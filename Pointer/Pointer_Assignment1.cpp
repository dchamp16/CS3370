#include <iostream>

class C
{
public:
    void f() { std::cout << "C::f\n"; } // Member function f()
    void g() { std::cout << "C::g\n"; } // Member function g()
};

int main()
{
    C c; // Create an object of class C named c

    // Using an object
    void (C::*pmf)() = &C::f; // Pointer to member function f
    (c.*pmf)();               // Execute c.f()

    pmf = &C::g; // Use the pointer for g
    (c.*pmf)();  // Execute c.g()

    // Using pointer to an object
    C *cp = &c;   // Create a pointer to object named cp pointing to c
    pmf = &C::f;  // Use the pointer for f
    (cp->*pmf)(); // Execute cp->f()

    pmf = &C::g;  // Use the pointer for g
    (cp->*pmf)(); // Execute cp->g()

    return 0;
}

/*
dont mind this is for my reference using my language for better understanding

#include <iostream>

class C {
public:
    void f() { std::cout << "C::f\n"; }  // Members na function na f()
    void g() { std::cout << "C::g\n"; }  // Members na function na g()
};

int main() {
    C c;  // Gumawa ng object ng klase na C na tinawag na c

    // Gamit ang isang object
    void (C::*pmf)() = &C::f;  // Pointer sa members na function na f
    (c.*pmf)(); // Pinapatakbong c.f()

    pmf = &C::g;  // Ginagamit ang pointer para sa g
    (c.*pmf)(); // Pinapatakbong c.g()

    // Gamit ang pointer sa isang object
    C* cp = &c;  // Gumawa ng pointer sa object na cp na tumuturo sa c
    pmf = &C::f;  // Ginagamit ang pointer para sa f
    (cp->*pmf)(); // Pinapatakbong cp->f()

    pmf = &C::g;  // Ginagamit ang pointer para sa g
    (cp->*pmf)(); // Pinapatakbong cp->g()

    return 0;
}


*/