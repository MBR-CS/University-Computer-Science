#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    /*Given T, an array of 100 integer elements,
    this array contains a single 0.*/
    int T[] = {56,
               23,
               78,
               45,
               90,
               12,
               34,
               67,
               89,
               54,
               32,
               76,
               88,
               43,
               65,
               98,
               31,
               55,
               77,
               22,
               66,
               89,
               45,
               78,
               33,
               67,
               90,
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
               0,
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
               54};
    int F = T[0];
    /* Write an algorithm to shift the elements of this array to the left (circular shift)
so that the first element of this array (T [1]) is the null element.*/
    if (F == 0)
    {
        cout << "change position is done";
    }
    else
    {
        for (int i = 0; i < 100; i++)
        {
            if (T[i] == 0)
            {
                T[0] = 0;
                T[i] = F;
                break;
            }
        }
    }
    cout << "change position is done" << T[0] << endl;

    return 0;
}