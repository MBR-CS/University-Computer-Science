// Series04:Ex04 S2-G3 Bloul Mohamed Ridha

#include <iostream>
using namespace std;

int main() {
  // ex 04 with simpel algorithm :
  int S1, S2, S3, S4, S5, number_student;
  string Destination;
  S1 = 40;
  S2 = 80;
  S3 = 120;
  S4 = 160;
  S5 = 180;
  cout << "Please enter your number: ";
  cin >> number_student;
  if (number_student < S1 and number_student > 0) {
    Destination = "S1";
  } else if (number_student < S2) {
    Destination = "S2";
  } else if (number_student < S3) {
    Destination = "S3";
  } else if (number_student < S4) {
    Destination = "S4";
  } else {
    Destination = "S5";
  }
  cout << "your Destination is: " << Destination << endl;
  // ex 04 with switch case:
  switch(number_student){
    case 1 ... 40:
      Destination = "S1";
      break;
    case 41 ... 80:
      Destination = "S12";
      break;
    case 81 ... 120:
      Destination = "S3";
      break;
    case 121 ... 160:
      Destination = "S4";
      break;
    default:
      Destination = "S5";
  }
  cout << "your Destination is: " << Destination << endl;

  return 0;
}