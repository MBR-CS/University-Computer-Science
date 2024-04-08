#include <iostream>
#include <cmath>
using namespace std;
/*Let X, A, and B be positive integers such that X < A < B.
Write the algorithm that
displays all the multiples of X between A and B.*/
int main()
{
    int A, B, X, result;
    bool correct_number = true;
    while (correct_number)
    {
        cout << "please enter a number X (X<A<B)|-----> ";
        cin >> X;
        cout << "please enter a number A (X<A<B)|-----> ";
        cin >> A;
        cout << "please enter a number B (X<A<B)|-----> ";
        cin >> B;
        if (X < A && A < B)
        {
            correct_number = false;
            cout << "the multiples of " << X << " between " << A << " and " << B << " is:" << endl;
            for (int i = A; i <= B; i++)
            {
                result = i * X;
                cout << result << endl;
            }
        }
        else
        {
            cout << "please enter numbers correct (X<A<B)" << endl;
        }
    }

    return 0;
}
