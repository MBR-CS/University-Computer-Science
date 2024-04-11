// series03 Exercicse 3 S2-G3 Bloul Mohamed Ridha Abdessamed
#include <iostream>
using namespace std;
int main() {
  int number;
  cout << "Please enter number: ";
  cin >> number;
  int increase_1 = number + 1, increase_2 = increase_1 + 1,
      increase_3 = increase_2 + 1;

  int by_decrease_1 = number - 1, by_decrease_2 = by_decrease_1 - 1,
      by_decrease_3 = by_decrease_2 - 1;

  if (number >= 0) {
    cout << "The three values that follow is:\n";
    cout << increase_1 << "\n" << increase_2 << "\n" << increase_3 << "\n";
    cout << "The three values that follow is:\n";
    cout << by_decrease_1 << "\n" << by_decrease_2 << "\n" << by_decrease_3;
  } else {
    cout << "The three values that follow is:\n";
    cout << by_decrease_1 << "\n"
         << by_decrease_2 << "\n"
         << by_decrease_3 << "\n";
    cout << "\nThe three values that follow is:\n";
    cout << increase_1 << "\n" << increase_2 << "\n" << increase_3;
  }
  return 0;
}