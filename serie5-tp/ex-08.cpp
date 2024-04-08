#include <iostream>
using namespace std;
// EX08: Write the algorithm for this game
int main()
{
    // with if Condition
    int correct_result, answer_user, number_user, counter = 0,
                                                  wrong_answer;
    cout << "please enter your number for multiplication operations|-----> ";
    cin >> number_user;
    for (int operations = 1; operations <= 10; operations++)
    {
        cout << "--------------------\nyour operation is |-----> " << operations << " * " << number_user << " |----->";
        cin >> answer_user;
        correct_result = number_user * operations;
        if (answer_user == correct_result)
        {
            counter++;
            cout << "GOOD🥳\n";
        }
        else
        {
            cout << "FALSE🙁\n"
                 << "correct answer is: " << correct_result << endl;
        }
    }
    if (counter > 7)
    {
        cout << "WINNNN " << counter << " of the answer correct" << endl;
    }
    else
    {
        wrong_answer = 10 - counter;
        cout << "You LOST!!😕 " << counter << " of the answer correct and "
             << wrong_answer << " of the wrong answer" << endl;
    }
    return 0;
}