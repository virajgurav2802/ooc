#include <iostream>
using namespace std;

class Number
{
private:
    int value;

public:
    Number(int v) : value(v) {}

    // Unary minus operator overloading
    Number operator-()
    {
        return Number(-value);
    }

    void display()
    {
        cout << "Value = " << value << endl;
    }
};

int main()
{
    int n1;

    cout << "Enter a number: ";
    cin >> n1;

    Number num(n1);

    Number result = -num;

    result.display();

    return 0;
}