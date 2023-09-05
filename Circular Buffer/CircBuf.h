// CircBuf.h
#ifndef CIRCBUF_H
#define CIRCBUF_H

#include <string>
#include <cstddef>
using std::string;

class CircBuf
{
	const size_t CHUNK{8};
	// Insert your private stuff here
	// static const size_t CHUNK = 64; // You can adjust this value as needed
	char *buffer_;
	size_t capacity_ = 8;
	size_t size_;
	size_t head_;
	size_t tail_;
	void growing();
	void clearBuffer();
	char *createNewBufferWithMinimumSize();
	void copyDataToNewBuffer(char *newBuffer);
	void updateBufferAfterShrinking(char *newBuffer);

public:
	CircBuf(size_t reserve = 0); // Number of elements you want it to be able to hold to start with.
	~CircBuf();
	size_t size();
	size_t capacity();

	void insert(char);
	void insert(const char *, size_t sz);
	void insert(const string &);
	char get();
	string get(size_t);
	string flush(); // Returns a string with all the characters, AND shrinks the buffer to zero.
	string examine();
	void shrink(); // Reduces the unused space in the buffer.
};
#endif
