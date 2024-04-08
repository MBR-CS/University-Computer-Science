#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Write the algorithm for this game.
    int G[20] = {45, 12, 67, 23, 55,
                 89, 34, 78, 20, 15,
                 92, 27, 63, 41, 50,
                 74, 38, 81, 17, 60};
    int H[13] = {0,
                 0,
                 0,
                 0,
                 0,
                 0,
                 0,
                 0,
                 0,
                 0,
                 0,
                 0,
                 0};
    int N, D, R, P = 0, W = 0, IH = 0;
    bool flag = false;

    while (P < 20 && W < 3)
    {
        cout << "Please enter number of cell from 1 to 20: ";
        cin >> N;
        for (int i = 0; i < 13; i++)
        {
            if (H[i] == N && N != 0)
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            cout << "please choose another cell from 1 to 20!!!" << endl;
            flag = false;
        }
        else
        {
            if (N > 20 || N < 1)
            {
                cout << "Wrong Number!!" << endl;
            }
            else
            {
                H[IH] = N;
                IH++;
                cout << "Please enter a double number: " << G[N - 1] << endl;
                cin >> D;
                R = G[N - 1] * 2;
                if (R == D)
                {
                    P += 2;
                }
                else
                {
                    W++;
                    cout << "Wrong answer" << endl;
                }
            }
        }
    }
    if (P >= 20)
    {
        cout << "You Winner" << endl;
    }
    else
    {
        cout << "You Lost!!" << endl;
    }

    return 0;
}