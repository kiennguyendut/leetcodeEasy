#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    void print()
    {
        cout << real << " + i" << imag << endl;
    }

    friend Complex operator+(Complex const &c1, Complex const &c2);
};

Complex operator+(Complex const &c1, Complex const &c2)
{
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main()
{
    Complex c1(10, 5);
    Complex c2(2, 3);
    Complex c3 = c1 + c2;
    c3.print();
    return 0;
}
