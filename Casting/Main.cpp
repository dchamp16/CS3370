#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    /*
    const cast
    1. the const_Cast is used to change or manipulate the const behavior of the source pointer
    it means we can perform the const in two ways
    setting a const pointer to a non const pointer or deleting or removing the const from a const pointer
    Syntax:
    const_Cast<new_data_type>(expression)
    */
    auto func = [](int *ptr)
    {
        return *ptr;
    };
    const int num1{40};
    const int *num2{&num1};

    int *newValue = const_cast<int *>(num2);

    func(newValue);
    return 0;
}

// GRAVEYARD

/*
implicit casting - automatic cast conversion by computer
lowest to higher hiearcy
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

// static_cast ---------------------

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

// dynamic_cast ---------------------

/*
class Pet
{
private:
    string animal_name, animal_type, animal_gender;
    int animal_age;

public:
    Pet() = default;
    Pet(string name, string type, string gender, int age) : animal_name(name),
                                                            animal_type(type), animal_gender(gender), animal_age(age)
    {
    }

    virtual string getName()
    {
        return animal_name;
    }
    string getType()
    {
        return animal_type;
    }
    string getGender()
    {
        return animal_gender;
    }
    int getAge()
    {
        return animal_age;
    }
};

class Dog : public Pet
{
private:
    string dog_breed;

public:
    Dog() = default;
    Dog(string name, string type, string gender, int age,
        string breed) : Pet(name, type, gender, age), dog_breed(breed)
    {
    }

    string getBreed()
    {
        return dog_breed;
    }
};
*/

// int main()
// {

/*
Dynamic cast
1. dynamic_Cast is a runtime cast operator used to perform conversion of one type varibale to another only on class pointer and references
2. It mean it check the valid casting of the variables at the run time and if the casting fails it return a null value

Syntax
dynamic_cast<new_data_type>(expression)
*/

// Dog dog1("Lassie", "Dog", "Female", 3, "Border Collie");
// Pet *pet1 = &dog1;
/*Dynamically cast the pointer to a Dog pointer.*/
// Dog *d = dynamic_cast<Dog *>(pet1);

// Dog dog2("Fluffy", "Dog", "Male", 7, "German Sheperd");
// Pet *pet2 = &dog2;
// Dog *foo = dynamic_cast<Dog *>(pet2);

// cout << "\n-----\n"
//      << foo << "\n-----\n";

// if (d != nullptr)
// {
//     cout << "The dog breed is " << d->getBreed() << endl;
// }
// else
// {
//     cout << "The pointer is not a Dog pointer" << endl;
// }

//     return 0;
// }

// reinterpret_cast -------------
// int main(){

/*
Reinterpret cast
1. it us used to convert a pointer of some data type into a ponter of another data type even if the data type before and after conversion are different
2. It does not check if the pointer type and data pointed by the ponter is some or nor
Syntax:
reinterpret_cast<new_data_type>(expression)
*/

// int *ptr = new int(65);
// char *ch = reinterpret_cast<char *>(ptr);

// cout << "value ptr: " << ptr << endl;
// cout << "value ch: " << ch << endl;
// cout << "value ptr: " << *ptr << endl;
// cout << "value ch: " << *ch << endl;
// return 0;
// }