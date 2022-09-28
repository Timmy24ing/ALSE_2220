#include <iostream>

using namespace std;
// complex.h

class Complex{
    double re, im;
	
  public:
    Complex();
	Complex(double r, double i);
	double real();
	void   real(double r);
	double imag();
	void   imag(double i);
	Complex operator+(const Complex &a);
	Complex operator-(const Complex &a);
	Complex operator*(const Complex &a);
	double angle();
	double magnitud();
	Complex conyugate();
	Complex inverse();	
};
