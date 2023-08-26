#include <iostream>

using namespace std;


class Base(){

};

class derived: public Base(){
    
}

int main()
{

    /*
    Dynamic cast
    1. dynamic_Cast is a runtime cast operator used to perform conversion of one type varibale to another only on class pointer and references
    2. It mean it check the valid casting of the variables at the run time and if the casting fails it return a null value

    Syntax
    dynamic_cast<new_data_type>(expression)
    */

   Base b; //creating a object for a class
   derived d;

   Base *pb = dynamic_cast<*Base>(&d);
   derived *foo = dynamic_cast<*derived>(&b);



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


    //---------------------

    /*
    static cast
    1. capable to perform all the conversion
    2. compile time casting

    Syntax:
    static_cast<new_data_type>(expression)
    */
    
    // double multiplication{3.6 * 1.7};
    // int result;
    // result = multiplication; // it doesnt check data type in run time and its more safe

    // cout << "result: " << result << endl;