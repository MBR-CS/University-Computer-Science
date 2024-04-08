#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    /*Let T be an array of 100 integer elements,
    and let Val be an integer value repeated in this array.*/
    int T[100] = {45,
                  78,
                  33,
                  12,
                  68,
                  87,
                  42,
                  56,
                  79,
                  32,
                  66,
                  89,
                  23,
                  12,
                  98,
                  54,
                  67,
                  89,
                  45,
                  79,
                  12,
                  67,
                  88,
                  23,
                  67,
                  89,
                  45,
                  78,
                  33,
                  67,
                  90,
                  24,
                  68,
                  87,
                  12,
                  56,
                  79,
                  32,
                  66,
                  89,
                  23,
                  76,
                  98,
                  54,
                  67,
                  89,
                  45,
                  79,
                  32,
                  67,
                  88,
                  23,
                  67,
                  89,
                  45,
                  78,
                  33,
                  67,
                  12,
                  24,
                  68,
                  87,
                  42,
                  56,
                  79,
                  32,
                  66,
                  89,
                  23,
                  76,
                  98,
                  54,
                  67,
                  89,
                  45,
                  79,
                  32,
                  67,
                  88,
                  23,
                  67,
                  89,
                  45,
                  78,
                  33,
                  67,
                  90,
                  12,
                  68,
                  87,
                  42,
                  56,
                  79,
                  32,
                  66,
                  89,
                  23,
                  12,
                  98,
                  54};
    int P, p, val = 12;
    /* Using two different methods, write an algorithm for displaying the index of the last
    occurrence of the value Val in the array T.
    */
    // first method
    for (int i = 0; i < 100; i++)
    {
        if (T[i] == val)
        {
            P = i;
        }
    }
    cout << "first method:: The last position is : " << P << endl;

    // second method
    for (int i = 99; i >= 0; i--)
    {

        if (T[i] == val)
        {
            p = i;
            break;
        }
    }
    cout << "second method:: The last position is : " << p << endl;

    return 0;
}