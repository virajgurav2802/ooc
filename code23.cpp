#include <iostream>
using namespace std;

void swapNumbers(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;

    cout << "Inside function: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    swapNumbers(a, b);

    cout << "In main: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b;

    return 0;
}