#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a[] = {10, 15, 4, 25, 3, -4};
    int *p = &a[2]; // element #2 == 4

    cout << p << "\t" << *p << "\t" << *(p) << endl;

    cout << "\na. *(p+1): " << *(p + 1)
         << "\nb. *p[-1]:  " << p[-1]
         << "\nc. p - a: " << p - a
         << "\nd. a[*p++]: " << a[*p++]
         << "\ne. *(a+a[2]): " << *(a + a[2]) << endl;

    /*
    char s[] = "desolate", *p = s;

    cout << *p++ << endl; //output: e
    cout << *(p++) << endl; //output: 
    cout << (*p)++ << endl; //output: 
    cout << *++p << endl; //output: 
    cout << *(++p) << endl; //output: 
    cout << ++*p << endl; //output: 
    cout << ++(*p) << endl; //output: 
    cout << s << endl; //output: 
    */
    return 0;
}
