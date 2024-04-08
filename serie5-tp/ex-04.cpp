#include <iostream>
using namespace std;
/*Let X be a binary number consisting of N digits.
Write the algorithm that displays the decimal
value corresponding to this binary number.*/
int main()
{
    int decimal = 0, binary, base = 1;
    cout << "____convert from binary to decimal____ " << endl;
    cout << "please enter a number binary |-----> ";
    cin >> binary;

    while (binary > 0)
    {
        decimal = decimal + (binary % 10) * base;
        binary = binary / 10;
        base = base * 2;
    }
    cout << "convert decimal result is|-----> " << decimal << endl;

    return 0;
}