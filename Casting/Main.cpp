#include <iostream>

using namespace std;

int main()
{

    

    return 0;
}


//GRAVEYARD


    
    /*
    implicit casting - automatic cast conversion by computer
    lowest to higher
    bool -> char -> short int -> int -> unsigned int -> long int -> 
    unsigned long int -> long long int -> float -> double -> long double
    */
    
    /*test cases1:*/
    
    // int number1{};
    // double number2 = 9.76;
    // number1 = number2;
    
    /*test cases2:*/
    
    // int number1{9};
    // double number2;
    // number2 = number1;
    
    // cout << "number1 value: " << number1 << "\nnumber2 value: " << number2 <<endl;
    
    /*
    explicit cast - cast conversion by the programmer
    Assignment operator 
    (type) expression
    */
    
    // cout << "\n------------------------\n" << endl;
    // int num3{7}, num4{3};
    // float result;
    
    // cout << "This is Implicit conversion" << endl;
    // cout << "result: "<< num3 / num4 << endl;
    // cout << "\n------------------------\n" << endl;
    // cout << "This is Explicit conversion" << endl;
    // result = (float) num3 / num4; //assignment operator
    // cout << "result: "<< result << endl;