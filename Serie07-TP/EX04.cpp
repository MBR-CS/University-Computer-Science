#include <iostream>
#include <vector>
using namespace std;

void FindMaxMin(vector<int> numbers) {
  int min = numbers[0], max = numbers[0];
  for (int i:numbers) {
	if (min > i) {
	  min = i;
	} else if (max < i) {
	  max = i;
	}
  }
  cout << "Max is: " << max << endl;
  cout << "Min is: " << min << endl;
}

int main() {
  // call the function
  vector<int> numbers = {1, 2, 33, 4, 5};
  FindMaxMin(numbers);
  return 0;
}
