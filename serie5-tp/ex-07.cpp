j #include<iostream> using namespace std;
/*A medical laboratory carries out analyses for patients.
The result of each analysis is obtained
after a certain number of days, depending on the nature of the analysis.
1. Write an algorithm that displays the date of the result of
an analysis based on the date
of the analysis. (The number of days required for the result of
this analysis is given by the user).
2. Repeat the previous question using the algorithm that calculates
the next day's date.*/

int main()
{
    int M, Y, D, result;
    cout << "---Please enter date of the analysis---" << endl;
    cout << "Please enter Year: ";
    cin >> Y;
    cout << "\nPlease enter Month: ";
    cin >> M;
    cout << "\nPlease enter Day: ";
    cin >> D;
    cout << "\nPlease enter number of days required for the result: ";
    cin >> result;

    // use if condition for verify there is a leap year
    for (int i = 1; i <= result; i++)
    {
        D = D + 1;
        if (M == 2)
        {

            if ((Y % 100 != 0 || Y % 400 == 0) && Y % 4 == 0)
            {
                if (D > 29)
                {
                    D = D - 29;
                    M = 3;
                }
            }
            else
            {
                if (D > 28)
                {
                    D = D - 28;
                    M = 3;
                }
            }
            // create if condition for check month 30 day
        }
        else if (M == 4 || M == 6 || M == 11 || M == 9)
        {
            if (D > 30)
            {
                D = D - 30;
                M = M + 1;
            }
            //  create if condition for check month 31 day<
        }
        else if (M == 1 || M == 3 || M == 5 || M == 7 || M == 8 || M == 10)
        {
            if (D > 31)
            {
                D = D - 31;
                M = M + 1;
            }
            // check end year or not
        }
        else
        {
            if (D > 31)
            {
                D = 1;
                M = 1;
                Y = Y + 1;
            }
        }
    }
    cout << "\nThe result date is: " << Y << "/" << M << "/" << D << endl;
    return 0;
}