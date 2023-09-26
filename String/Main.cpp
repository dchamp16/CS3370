#include <regex>
#include <iostream>

using namespace std;

// Create a regular expression object
std::regex re("^[a-zA-Z0-9]+$");

// Match the regular expression against a string
bool match = std::regex_match("hello world", re);

// If the regular expression matched, do something
cout << match << endl;
// if (match)
// {
//     // do something
//     cout <<
// }

// #include <iostream>
// #include <string>
// #include <typeinfo>
// using namespace std;

// int main()
// {
//     double foo{3.16};
//     string convertToString{to_string(foo)};
//     // char *getType{typeid(convertToString)};

//     // cout << "type: " << getType << "value: " << convertToString << endl;

//     return 0;
// }
