#include "CircBuf.h"
#include <iostream>

CircBuf::CircBuf(size_t reserve)
{
    // Constructor: Initializes the circular buffer with optional reserved capacity.
    if (reserve == 0)
    {
        capacity_ = 0;
        buffer_ = nullptr;
    }
    else
    {
        // Calculate the capacity based on the requested reserve size.
        capacity_ = ((reserve + CHUNK - 1) / CHUNK) * CHUNK;
        buffer_ = new char[capacity_];
    }
    size_ = 0;
    head_ = 0;
    tail_ = 0;
}

CircBuf::~CircBuf()
{
    // Destructor: Releases memory allocated for the circular buffer.
    delete[] buffer_;
}

size_t CircBuf::size()
{
    // Returns the current number of elements in the circular buffer.
    return size_;
}

size_t CircBuf::capacity()
{
    // Returns the maximum number of elements the circular buffer can hold without resizing.
    return capacity_;
}

void CircBuf::insert(char c)
{
    // Inserts a single character into the circular buffer.
    if (size_ == capacity_)
    {
        // Dynamically increases buffer capacity if it's full.
        growing();
    }

    buffer_[head_] = c;
    ++head_;
    head_ %= capacity_;
    ++size_;
}

void CircBuf::insert(const char *data, size_t sz)
{
    // Inserts an array of characters into the circular buffer.
    for (size_t i{0}; i < sz; i++)
    {
        insert(data[i]);
    }
}

void CircBuf::insert(const std::string &str)
{
    // Inserts a string into the circular buffer.
    insert(str.c_str(), str.size());
}

char CircBuf::get()
{
    // Retrieves and removes a single character from the circular buffer.
    if (size_ == 0)
    {
        // Throws an exception if the buffer is empty.
        throw std::out_of_range("Buffer is empty");
    }
    char character = buffer_[tail_];
    ++tail_;
    tail_ %= capacity_;
    --size_;
    return character;
}

std::string CircBuf::get(size_t count)
{
    // Retrieves and removes a specified number of characters from the circular buffer as a string.
    std::string result;
    count = std::min(count, size_);
    for (size_t i{0}; i < count; i++)
    {
        result += get();
    }
    return result;
}

std::string CircBuf::flush()
{
    // Retrieves and removes all characters from the circular buffer as a string, then resets the buffer.
    std::string result;
    while (size_ > 0)
    {
        result += get();
    }
    delete[] buffer_;
    buffer_ = nullptr;
    capacity_ = 0;
    tail_ = head_ = 0;
    return result;
}

std::string CircBuf::examine()
{
    // Returns a string representing the contents of the buffer, enclosed in square braces,
    // with unused elements represented as dashes.
    std::string result = "[";
    for (size_t i{0}; i < size_; i++)
    {
        result += buffer_[(tail_ + i) % capacity_];
    }
    // Fill the remaining capacity with dashes
    for (size_t i{size_}; i < capacity_; i++)
    {
        result += '-';
    }
    result += "]";
    return result;
}

void CircBuf::shrink()
{
    // Reduces the unused space in the circular buffer by creating a smaller buffer.
    if (size_ == 0)
    {
        clearBuffer();
    }
    else
    {
        char *newBuffer = createNewBufferWithMinimumSize();
        copyDataToNewBuffer(newBuffer);
        updateBufferAfterShrinking(newBuffer);
    }
}

// Helper function for dynamically growing the buffer
void CircBuf::growing()
{
    // Increases the capacity of the circular buffer when it's full.
    size_t newCapacity = capacity_ + CHUNK;
    char *newBuffer = new char[newCapacity];
    for (size_t i{0} i < size_; i++)
    {
        // Copy data from the old buffer to the new buffer, preserving order.
        size_t oldIndex = (tail_ + i) % capacity_;
        newBuffer[i] = buffer_[oldIndex];
    }
    delete[] buffer_;
    buffer_ = newBuffer;
    capacity_ = newCapacity;
    head_ = size_;
    tail_ = 0;
}

// Helper function to clear the circular buffer
void CircBuf::clearBuffer()
{
    delete[] buffer_;
    buffer_ = nullptr;
    capacity_ = 0;
    tail_ = head_ = 0;
}

// Helper function to create a new buffer with a minimum size
char *CircBuf::createNewBufferWithMinimumSize()
{
    return new char[std::min(size_, capacity_)];
}

// Helper function to copy data to a new buffer when shrinking
void CircBuf::copyDataToNewBuffer(char *newBuffer)
{
    std::copy(buffer_ + tail_, buffer_ + tail_ + size_, newBuffer);
}

// Helper function to update the buffer after shrinking
void CircBuf::updateBufferAfterShrinking(char *newBuffer)
{
    delete[] buffer_;
    buffer_ = newBuffer;
    capacity_ = size_;
    tail_ = 0;
    head_ = size_;
}
