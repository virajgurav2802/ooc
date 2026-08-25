#include <iostream>
using namespace std;

class Fraction
{
public:
    int a, b, c, d;

    void add()
    {
        int x = a * d + c * b;
        int y = b * d;

        cout << "Addition = " << x << "/" << y;
    }
};

int main()
{
    Fraction f;

    cout << "Enter a b: ";
    cin >> f.a >> f.b;

    cout << "Enter c d: ";
    cin >> f.c >> f.d;

    f.add();

    return 0;
}