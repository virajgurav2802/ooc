#include <iostream>
using namespace std;

class Number
{
private:
    int value;

public:
    // Constructor
    Number(int v)
    {
        value = v;
    }

    // Binary + operator
    Number operator+(Number n)
    {
        Number temp(0);

        temp.value = value + n.value;

        return temp;
    }

    // Display
    void display()
    {
        cout << "Value = " << value << endl;
    }
};

int main()
{
    int n1, n2;

    cout << "Enter first number: ";
    cin >> n1;

    cout << "Enter second number: ";
    cin >> n2;

    Number num1(n1);
    Number num2(n2);

    Number result = num1 + num2;

    cout << "Addition: ";
    result.display();

    return 0;
}