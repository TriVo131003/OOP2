#include "B1.h"
int main()
{
    Complex A;
    A.input();
    A.output();
    Complex B;
    B.input();
    B.output();
    cout << "Addition: ";
    A.addition(B);
    cout << "\nSubtraction: ";
    A.subtraction(B);
    cout << "\nMultiplication: ";
    A.multiplication(B);
    cout << "\nDivision: ";
    A.division(B);

    cout << "Real part: " << A.getReal() << "\n";
    cout << "Imaginary part: " << A.getImaginary() << "\n";
    cout << "Set imaginary part: ";
    A.setImaginary();
    cout << "Set real part: ";
    A.setReal();
    cout << "Real part: " << A.getReal() << "\n";
    cout << "Imaginary part: " << A.getImaginary() << "\n";
}
