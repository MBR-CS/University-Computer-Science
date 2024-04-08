#include <iostream>
using namespace std;
/*Let X be a positive integer given by the user.
Write the algorithm that displays
in order all the digits that make up this number, and
also displays the number made up of the digits of X in reverse order.*/
int main() {
  int a, reverse = 0;
  cout << "please enter a number|-----> ";
  cin >> a;

  while (a != 0) {
    reverse = (reverse * 10) + (a % 10);
    cout << a % 10 << endl;
    a = a / 10;
  }
  cout << "your reverse number is|-----> " << reverse;
  return 0;
}
