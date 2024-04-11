#include <iostream>
#include <ostream>
using namespace std;

int Factorial(int number) {
  if (number == 0 || number == 1) {
    return 1;
  }
  return number * Factorial(number - 1);
}

int Unique(int N) {
  if (N == 0 || N == 1) {
    return 1;
  }
  return Factorial(N) + Unique(N - 1);
}

int main() {
  // call the function
  int n;
  cout << "Please enter a number: ";
  cin >> n;
  cout << "Your result is:" << Unique(n) << endl;
  return 0;
}
