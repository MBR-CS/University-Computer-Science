#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //? part 01 matrix with rows and columns ::
    //? Let A [M,N] be an integer matrix with M rows and N columns
    //?(M and N are known values). Give the algorithms for calculating :

    int A[3][4] = {
        {1, 2, 3, 4},
        {3, 4, 5, 6},
        {5, 6, 7, 8}};
    // !1. The sum and number of elements greater than a value X given by the user.
    int Value, Sum = 0, Counter = 0;
    cout << "Please enter a value |---> ";
    cin >> Value;
    for (int m = 0; m < 3; m++)
    {

        for (int n = 0; n < 4; n++)
        {
            if (A[m][n] > Value)
            {
                Sum += A[m][n];
                Counter++;
            }
        }
    }
    cout << "Sum is |---> " << Sum << endl;
    cout << "Number is |---> " << Counter << endl;
    cout << "-------------------------------" << endl;

    // !2. The number of even elements in a row given by the user.
    int even, row;
    cout << "Please choose row between 1 and 3 |---> ";
    cin >> row;
    for (int i = 0; i < 4; i++)
    {
        if (A[row - 1][i] % 2 == 0)
        {
            even++;
        }
    }
    cout << "number of even elements in a row " << row << " is |---> " << even << endl;
    cout << "-------------------------------" << endl;

    // !3. The number of odd elements in a column given by the user.
    int odd = 0, column;
    cout << "Please choose row between 1 and 4 |---> ";
    cin >> column;
    for (int i = 0; i < 3; i++)
    {
        if (A[i][column - 1] % 2 == 1)
        {
            odd++;
        }
    }
    cout << "number of odd elements in a column " << column << " is |---> " << odd << endl;
    cout << "-------------------------------" << endl;

    //? part 02 square matrix with diagonal ::
    //? Let A [N,N] be a square matrix. Give the algorithms for :
    //* trace : sum first diagonal(1nd) her is 1+4+7+5
    /*  {*, 2, 3, 4},
        {3, *, 5, 6},
        {5, 6, *, 8},
        {4, 9, 6, *}
    */
    //* sum second diagonal(2nd) her is 4+5+6+4
    /*  {1, 2, 3, *},
        {3, 4, *, 6},
        {5, *, 7, 8},
        {*, 9, 6, 5}
    */
    int B[4][4] = {
        {1, 2, 3, 4},
        {3, 4, 5, 6},
        {5, 6, 7, 8},
        {4, 9, 6, 5}};
    // !1. Calculate the trace of the matrix A.
    int trace = 0;
    for (int i = 0; i < 4; i++)
    {
        trace += B[i][i];
    }
    cout << "trace of the matrix B is: " << trace << endl;
    cout << "-------------------------------" << endl;

    // !2. Calculate the sum of the elements of the 2nd diagonal of this matrix.
    int sum = 0, index = 3;
    for (int i = 0; i < 4; i++)
    {
        sum += B[i][index];
        index--;
    }
    cout << "the sum of the elements of the 2nd diagonal of this matrix B is: " << sum << endl;
    return 0;
}