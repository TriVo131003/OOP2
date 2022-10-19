#include"B1.h"
    void Complex::input()
    {
        int imaginary, real;
        cout << "Input real part: ";
        cin >> real;
        cout << "Input imaginary part: ";
        cin >> imaginary;
        this->real = real;
        this->imaginary = imaginary;
    }
    void Complex::output()
    {
        cout << real;
        if (imaginary < 0)
            cout << imaginary << "i" << endl;
        else if (imaginary > 0)
            cout << "+" << imaginary << "i" << endl;
        else
            cout << endl;
    }
    double Complex::computeModule()
    {
        return sqrt(real * real + imaginary * imaginary);
    }
    int Complex::getImaginary() {
        return imaginary;
    }
    int Complex::getReal() {
        return real;
    }
    void Complex::setImaginary() {
        cin >> imaginary;
    }
    void Complex::setReal() {
        cin >> real;
    }
    void Complex::addition(Complex a)
    {
        cout << "The result is: " << real + a.real;
        if (imaginary + a.imaginary < 0)
            cout << imaginary + a.imaginary << "i\n";
        else if (imaginary + a.imaginary)
            cout << "+" << imaginary + a.imaginary << "i\n";
        else
            cout << endl;
    }
    void Complex::subtraction(Complex a)
    {
        cout << "The result is: " << real - a.real;
        if (imaginary - a.imaginary < 0)
            cout << imaginary - a.imaginary << "i\n";
        else if (imaginary - a.imaginary)
            cout << "+" << imaginary - a.imaginary << "i\n";
        else
            cout << endl;
    }
    void Complex::multiplication(Complex a)
    {
        cout << "The result is: " << (real * a.real - imaginary * a.imaginary);
        int i = (real * a.imaginary + imaginary * a.real);
        if (i < 0)
            cout << i << "i\n";
        else if (i > 0)
            cout << "+" << i << "i\n";
        else
            cout << endl;
    }
    void Complex::division(Complex a)
    {
        double temp = (double)(real * a.real + imaginary * a.imaginary) / (double)(a.real * a.real + a.imaginary * a.imaginary);
        cout << "the result is: " << temp;
        double i = (double)(a.real * imaginary - a.imaginary * real) / (double)(a.real * a.real + a.imaginary * a.imaginary);
        if (i < 0)
            cout << i << "i\n";
        else if (i > 0)
            cout << "+" << i << "i\n";
        else
            cout << endl;
    }