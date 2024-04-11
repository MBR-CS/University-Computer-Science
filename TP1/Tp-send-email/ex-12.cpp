#include <iostream>
using namespace std;
// EX12: Write the algorithm for this game
int main() {
  // with if Condition
  int value_help = 1, correct_result, answer_user, number_user, counter = 0,
      wrong_answer;
  cout << "please enter your number for multiplication operations: ";
  cin >> number_user;
  while (value_help <= 10) {
    cout << "your operation is:" << value_help << " x " << number_user << endl;
    cin >> answer_user;
    correct_result = number_user * value_help;
    if (answer_user == correct_result) {
      counter++;
      cout << "GOOD\n";

    } else {
      cout << "FALSE\n"
           << "correct answer is: " << correct_result << endl;
    }
    value_help++;
  }
  if (counter > 7) {
    cout << "WINNNN " << counter << " of the answer correct";
  } else {
    wrong_answer = 10 - counter;
    cout << "You LOST!! " << counter << " of the answer correct and "
         << wrong_answer << " of the wrong answer" << endl;
  }
  return 0;
}