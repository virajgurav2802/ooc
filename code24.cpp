#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    swapNumbers(a, b);

    cout << "After swapping: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b;

    return 0;
}