#include <iostream>
using namespace std;

inline float simpleInterest(float p, float r, float t)
{
    return (p * r * t) / 100;
}

int main()
{
    float p, r, t;

    cout << "Enter principal amount: ";
    cin >> p;

    cout << "Enter rate of interest: ";
    cin >> r;

    cout << "Enter time: ";
    cin >> t;

    cout << "Simple Interest = " << simpleInterest(p, r, t);

    return 0;
}