#include<iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "base class" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class" << endl;
    }    
};

int main() {
    Base* basePtr;
    Derived derived_obj;
    basePtr = &derived_obj;

    basePtr->show();
    return 0;
}