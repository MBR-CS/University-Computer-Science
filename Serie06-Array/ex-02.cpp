#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    /*Let T be an array of 100 integer elements,
    this array contains 50 positive elements and 50
    negative elements, and let Tab be an array of integers.*/
    int T[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
               11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
               21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
               31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
               41, 42, 43, 44, 45, 46, 47, 48, 49, 50,
               -1, -2, -3, -4, -5, -6, -7, -8, -9, -10,
               -11, -12, -13, -14, -15, -16, -17, -18, -19, -20,
               -21, -22, -23, -24, -25, -26, -27, -28, -29, -30,
               -31, -32, -33, -34, -35, -36, -37, -38, -39, -40,
               -41, -42, -43, -44, -45, -46, -47, -48, -49, -50};
    int Tab[100];
    int even = 0, odd = 1;
    /*Write an algorithm to put the positive values of the array T in the cells with an odd index in the array Tab,
and the negative values of the array T in the cells with an even index in the array Tab.*/
    for (int i = 0; i < 100; i++)
    {
        if (T[i] < 0)
        {
            Tab[even] = T[i];
            even += 2;
        }
        else
        {
            Tab[odd] = T[i];
            odd += 2;
        }
    }
    for (int i = 0; i < 100; i++)
    {
        cout << Tab[i] << endl;
    }

    return 0;
}