#include <iostream>
using namespace std;
/*In an oral examination, the candidates are examined one
after the other by an examiner, who
asks each candidate questions and then gives them a mark.
After each candidate has passed,
the examiner takes 3 minutes to give the mark and start
with the next candidate.
If the exam starts at time T (H:M:S), write the algorithm
that displays the start and end
times for each candidate (the number of candidates and the duration of each
candidate's exam are given by the user).*/
int main()
{
    /*i use  this ver for :
    H, M, S : for save hour exam and minute exam and seconds exam star
    MS,SS : for save minute student ans seconds student
    */
    int H, M, S, MS, SS;
    // this part for input user (time star exam)
    cout << "-----please enter time star exam (H:M:S)-----" << endl;
    cout << "Hour: ";
    cin >> H;
    cout << "\nMinute: ";
    cin >> M;
    cout << "\nSecond: ";
    cin >> S;
    // use while loop for add one student and more
    while (true)
    {
        // this part for input user (time student for exam M:S)
        cout << "------please enter time student(enter 0 for end program)------"
             << endl;
        cout << "\nMinute: ";
        cin >> MS;
        if (MS == 0)
        {
            cout << "\nTHANK FOE USE PROGRAM";
            break;
        }
        cout << "\nSecond: ";
        cin >> SS;

        cout << "start time for student is(H:M:S): " << H << ":" << M << ":" << S << endl;
        // this part for calculate end time for student
        M = M + MS;
        S = S + SS;
        if (S >= 60)
        {
            M = M + (S / 60);
            S = S % 60;
        }
        if (M >= 60)
        {
            H = H + (M / 60);
            M = M % 60;
        }

        cout << "end time for student is(H:M:S): " << H << ":" << M << ":" << S << endl;
        // this part for add 3 minute for break
        M = M + 3;
        if (M >= 60)
        {

            M = M % 60;
            H = H + (M / 60);
        }
    }

    return 0;
}