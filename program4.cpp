#include<iostream>
using namespace std;

class Base {
public: 
    virtual void show() {
        cout << "Base class show function called." << endl;
    }
};
class Derived : public Base {
public:         
    void show() override {
        cout << "Derived class show function called." << endl;
    }
};

int main() {
    Base* bptr;          // Base class pointer
    Derived d;          // Derived class object
    bptr = &d;

    // Virtual function, binded at runtime (Runtime polymorphism)
    bptr->show();       // Calls Derived's show()

    return 0;
}
// Output:
// Derived class show function called.

// Explanation:
// In this example, we have a base class `Base` with a virtual function `show()`.

// The derived class `Derived` overrides this function. In the `main()` function,
// we create a base class pointer `bptr` that points to a derived class object `d`.
// When we call `bptr->show()`, the derived class's version of `show()` is invoked
// due to the virtual function mechanism, demonstrating runtime polymorphism.




