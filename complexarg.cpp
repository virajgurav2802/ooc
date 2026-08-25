#include <iostream>
using namespace std;

class complex
{
public:
    int real, imag;

    void input()
    {
        cin >> real >> imag;
    }

    void display()
    {
        cout << real << " + " << imag << "i";
    }
};

int main()
{
    complex c1, c2;

    // Input first complex number
    cout << "Enter first complex number (real imaginary): ";
    c1.input();

    // Input second complex number
    cout << "Enter second complex number (real imaginary): ";
    c2.input();

    // Addition
    cout << "\nAddition: ";
    cout << c1.real + c2.real << " + "
         << c1.imag + c2.imag << "i";

    // Subtraction
    cout << "\nSubtraction: ";
    cout << c1.real - c2.real << " + "
         << c1.imag - c2.imag << "i";

    return 0;
}