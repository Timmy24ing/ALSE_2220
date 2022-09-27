#include <cmath>
#include "complex.h"

Complex::Complex(){
	re = im = 0.;
}

Complex::Complex(double r, double i){
	re = r;
	im = i;
}

double Complex::real(){
	return re;
}
void   Complex::real(double r){
  re = r;
}

double Complex::imag(){
  return im;
}

void   Complex::imag(double i){
  im = i;
}

Complex Complex::operator+(const Complex &a){
  Complex c;
  c.re = re + a.re;
  c.im = im + a.im;
  return c;
}

Complex Complex::operator-(const Complex &a){
  Complex c;
  c.re = re - a.re;
  c.im = im - a.im;
  return c;
}

Complex Complex::operator*(const Complex &a){
  Complex c;
  c.re = re * a.re - im * a.im;
  c.im = re * a.im + im * a.re;
  return c;
}

double Complex::magnitud(){
	return sqrt( re * re + im * im );
}

Complex Complex::conyugate(){
	Complex c;
	c.re = re;
	c.im = -im;
	return c;
}

Complex Complex::inverse(){
	Complex c;
	c.re = - re;
	c.im = -im;
	return c;
}

double Complex::angle(){
	return atan2(im, re);
}
