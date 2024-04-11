#include <iostream>
using namespace std;
/*A medical laboratory carries out analyses for patients. The result of each
analysis is obtained after 15 days from the date of analysis.*/

int main() {
  int M, Y, D;
  cout << "---Please enter date of the analysis---" << endl;
  cout << "Please enter Year: ";
  cin >> Y;
  cout << "\nPlease enter Month: ";
  cin >> M;
  cout << "\nPlease enter Day: ";
  cin >> D;
  D = D + 15;
  //use if condition for verify there is a leap year
  if (M == 2) {
    
    if ((Y % 100 != 0 || Y % 400 == 0) && Y % 4 == 0) {
      if (D > 29) {
        D = D - 29;
        M = 3;
      }
    } else {
      if (D > 28) {
        D = D - 28;
        M = 3;
      }
    }
    // create if condition for check month 30 day 
  } else if (M == 4 || M == 6 || M == 11 || M == 9) {
    if (D > 30) {
      D = D - 30;
      M = M + 1;
    }
    //  create if condition for check month 31 day 
  } else if (M == 1 || M == 3 || M == 5 || M == 7 || M == 8 || M == 10) {
    if (D > 31) {
      D = D - 31;
      M = M + 1;
    }
    // check end year or not
  } else {
    if (D > 31) {
      D = 1;
      M = 1;
      Y = Y + 1;
    }
  }

  cout << "\nThe result date is: " << Y << "/" << M << "/" << D;

  // With case switch:
  int MC, YC, DC;
  cout << "---Please enter date of the analysis---" << endl;
  cout << "Please enter Year: ";
  cin >> YC;
  cout << "\nPlease enter Month: ";
  cin >> MC;
  cout << "\nPlease enter Day: ";
  cin >> DC;
  DC = DC + 15;
  switch (MC) {
  case 2:
    if ((YC % 100 != 0 || YC % 400 == 0) && YC % 4 == 0) {
      if (DC > 29) {
        DC = DC - 29;
        MC = 3;
      }
    } else {
      if (DC > 28) {
        DC = DC - 28;
        MC = 3;
      }
    }
    break;
  case 4:
  case 6:
  case 11:
  case 9:
    if (DC > 30) {
      DC = DC - 30;
      MC = MC + 1;
    }
    break;
  default:
    if (DC > 31) {
      DC = 1;
      MC = 1;
      YC = YC + 1;
    }
  }
  cout << "\nThe result date is: " << YC << "/" << MC << "/" << DC;
  return 0;
}