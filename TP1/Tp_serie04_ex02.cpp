// Series04:Ex02 S2-G3 Bloul Mohamed Ridha
// import library i need use in algorithms :
#include <cmath>
#include <iostream>
using namespace std;

int main() {
  /* EX 01 : part 01
  Write an algorithm that checks whether a number given by the user is even or
  odd.*/
  int number_user;
  cout << "---------------EX 02 : part 01-------------------"<<endl;
  cout << "Please enter a number:";
  cin >> number_user;
  if (number_user % 2 == 0)
    cout << "your number " << number_user << " is Even";
  else
    cout << "your number " << number_user << " is Odd";
  /* EX 01 : part 02
  Write an algorithm that asks the user for a number, then writes the square
root of that number (Remember that a negative number does not have a real square
root).*/
  float number_square;
  cout << "\n---------------EX 02 : part 02-------------------"<<endl;
  cout << "Please enter a number: ";
  cin >> number_square;
  if (number_square >= 0) {
    float square_root = sqrt(number_square);
    cout << "square root " << number_square << " is: " << square_root;
  } else {
    cout << "Please enter positive number i cant calculate square root negative number!! ";
  }
  /* EX 01 : part 03
    Write an algorithm that asks the user for a value, displays positive or
negative depending on the value and also displays its absolute value.*/
  float number_check;
  cout << "\n---------------EX 02 : part 03-------------------"<<endl;
  cout << "Please enter a number: ";
  cin >> number_check;
  if (number_check >= 0) {
    cout << number_check<< " is positive number and absolute number is: " << number_check;
  } else {
    float absolute = number_check * (-1);
    cout << number_check<< " is negative number and absolute number is: " << absolute;
  }
  /* EX 01 : part 04
Write the algorithm that displays the next positive value if the value given by
the user is a positive value, and the previous negative value if the value given
by the user is a negative value.*/
  int special_number;
  cout << "\n---------------EX 02 : part 04-------------------"<<endl;
  cout << "Please enter a number: ";
  cin >> special_number;
  if (special_number >= 0) {
    int next_number = special_number + 1;
    cout << "next number for " << special_number << " is: " << next_number;
  } else {
    int back_number = special_number - 1;
    cout << "back number for " << special_number << " is: " << back_number;
  }
  return 0;
}