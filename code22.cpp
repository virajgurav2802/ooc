#include <iostream>
using namespace std;

void circle(float r)
{
    const float pi = 3.14;

    cout << "Area = " << pi * r * r << endl;
    cout << "Circumference = " << 2 * pi * r;
}

int main()
{
    float radius;

    cout << "Enter radius: ";
    cin >> radius;

    circle(radius);

    return 0;
}