#ifndef __FRACTION_H__
#define __FRACTION_H__

#include <stdexcept>
#include <string>

class Fraction
{
private:
    int numerator, denominator;
    int LCM(int x, int y); //  Lowest Common Multiplier (bội chung nhỏ nhất)
    int GCD(int x, int y); //  Greatest Common Divisor (ước chung lớn nhất)
public:
    Fraction();
    Fraction(int n);
    Fraction(int n, int d);
    std::string GetString(void); // a function converting a fraction into a string
    double GetValue(void);       //  a function converting a fraction into a double value
    Fraction operator!(void);
    Fraction operator+(Fraction arg);
    Fraction operator*(Fraction arg);
    Fraction operator/(Fraction arg);
    Fraction &operator+=(Fraction arg);
};

std::ostream &operator<<(std::ostream &ostr, Fraction &f);
#endif