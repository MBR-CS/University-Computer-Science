#include <cmath>
#include <iostream>
using namespace std;

bool CheckNumber(float number) {
  if (number >= 0) {
    return true;
  } else {
    return false;
  }
}

int Power(int A, int B) {
  int result = 1;
  if (B == 0) {
    return result;
  } else {
    for (int i = 0; i < B; i++) {
      result *= A;
    }
  }
  return result;
}
int Power2(int A, int B) {
  if (B == 0) {
    return 1;
  }
  return A * Power2(A, B - 1);
}

int SuccessiveAdditionMethod(int A, int B) {
  int result = 0;
  for (int i = 0; i < B; i++) {
    result += A;
  }
  return result;
}

int SuccessiveAdditionMethod2(int A, int B) {
  if (B == 0) {
    return 0;
  }
  return A + SuccessiveAdditionMethod2(A, B - 1);
}

int main() {
  // 1
  float N;
  cout << "Please enter a number: ";
  cin >> N;
  if (CheckNumber(N)) {
    cout << "the square root is: " << sqrt(N) << endl;
  } else {
    cout << "please enter a positive number!!" << endl;
  }
  cout << "------------------------------" << endl;
  // 2
  int A, B;
  cout << "Please enter a number A: ";
  cin >> A;
  cout << "Please enter a number B: ";
  cin >> B;
  if (CheckNumber(A) && CheckNumber(B)) {
    cout << "the result is: " << Power(A, B) << endl;
  } else {
    cout << "please enter a positive numbers!!" << endl;
  }
  cout << "------------------------------" << endl;
  // 3
  cout << "Please enter a number A: ";
  cin >> A;
  cout << "Please enter a number B: ";
  cin >> B;
  if (CheckNumber(A) && CheckNumber(B)) {
    cout << "the result is: " << SuccessiveAdditionMethod(A, B) << endl;
  } else {
    cout << "please enter a positive numbers!!" << endl;
  }

  return 0;
}
