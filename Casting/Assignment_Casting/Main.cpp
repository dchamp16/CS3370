#include <iostream>

int main(int argc, char *argv[])
{
    std::cout << "xxxxx this C++ code is a simple demonstration of static_cast and reinterpret_cast xxxxx\n\n";

    int answer;
    std::cout << "Enter a number between 33 and 126: ";
    std::cin >> answer;

    int *ptr = new int(answer);
    char *ch = reinterpret_cast<char *>(ptr);
    std::cout << "\n\nreinterpret_cast\n------------------------\n";
    if (answer >= 33 && answer <= 126)
    {
        std::cout << "Integer Pointer Address: " << ptr << std::endl;
        std::cout << "Character Pointer Address: " << &ch << std::endl;
        std::cout << "----------------\n";
        std::cout << "Integer Value: " << *ptr << std::endl;
        std::cout << "Character Value: " << *ch << std::endl;
    }
    else
    {
        std::cout << "Number should be between 33 and 126" << std::endl;
    }

    delete ptr;

    std::cout << "\n\nstatic_cast\n------------------------"
              << std::endl;
    double multiplication{3.6 * 1.7};
    int result = static_cast<int>(multiplication);

    std::cout << "multiplication: " << multiplication << std::endl;
    std::cout << "result: " << result << std::endl;

    return 0;
}
