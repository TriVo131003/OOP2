#pragma once
#ifndef _COMPLEX_H_
#define  _COMPLEX_H_
#include <iostream>
#include <cmath>
using namespace std;
class Complex
{
private:
    int imaginary;
    int real;
public:
    void input();
    void output();
    double computeModule();
    int getImaginary();
    int getReal();
    void setImaginary();
    void setReal();
    void addition(Complex);
    void subtraction(Complex);
    void multiplication(Complex a);
    void division(Complex a);
};
#endif
