#include <iostream>
using namespace std;

constexpr unsigned long long factorial(unsigned long long n) { return n <= 1 ? 1 : n * factorial(n - 1); }

int main()
{

    cout << "factorial(): " << factorial(4) << "\n----------"
         << endl;
    //--------

    bool flag = true;
    int count1 = 0, count2 = 0;
    (flag ? count1 : count2) = 4;
    cout << "count1: " << count1 << " count2: " << count2 << endl;

    int n = !flag ? count1 : count2;
    cout << "n: " << n << endl;

    return 0;
}

string evenpos(const string &s)
{
}