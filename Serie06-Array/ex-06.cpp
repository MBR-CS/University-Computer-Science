#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // sorting array
    int T[100] = {-2, -1, 0, 2, 3, 4, 7, 11, 15, 18};
    int V, R;
    cout << "please enter a value for add to array: ";
    cin >> V;
    for (int i = 0; i < 100; i++)
    {
        if (V <= T[i])
        {
            R = T[i];
            T[i] = V;
            V = R;
        }
    }
    for (int i = 0; i < 100; i++)
    {
        cout << T[i] << endl;
    }

    return 0;
}