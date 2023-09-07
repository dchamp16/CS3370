#include <iostream>
#include <string>
using namespace std;

int main()
{
    char *foo[2];
    char s1[] = "Peter", s2[] = "Justin", s3[] = "Ramos";

    foo[0] = s1;
    foo[1] = s2;
    foo[2] = s3;
    (s1)++;
    cout << s1 << endl;

    int *p = new int;

    delete p;

    int *q = new int[5];

    delete[] q;
    return 0;
}
