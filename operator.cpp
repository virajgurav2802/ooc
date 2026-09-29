#include <iostream>
using namespace std;

class Number
{
private:
    int value;

public:
    Number(int v) : value(v) {}

    // Prefix ++
    Number operator++()
    {
        ++value;
        return *this;
    }

    // Postfix ++
    Number operator++(int)
    {
        Number temp = *this;
        value++;
        return temp;
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

    ++num;       // increment by 1
    // num++;    // Don't use this also, otherwise it becomes +2

    num.display();

    return 0;
}