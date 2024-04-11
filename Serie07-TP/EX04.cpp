#include <iostream>
using namespace std;

void FindMaxMin(int numbers[], int length) {
  int min = numbers[0], max = numbers[0];
  for (int i = 0; i < length; i++) {
    if (min > numbers[i]) {
      min = numbers[i];
    } else if (max < numbers[i]) {
      max = numbers[i];
    }
  }
  cout << "Max is: " << max << endl;
  cout << "Min is: " << min << endl;
}

int main() {
  // call the function
  int Numbers[] = {1, 2, 3, 4, 5};
  int Size = sizeof(Numbers) / sizeof(int);
  FindMaxMin(Numbers, Size);
  return 0;
}
