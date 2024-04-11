#include <iostream>
using namespace std;
/*A medical laboratory carries out analyses for patients. The result of each
analysis is obtained after 15 days from the date of analysis.*/

int main() {
  /* --------------------------I Question-------------------------------
  Write an algorithm which, starting from a given date, displays the number of
remaining days before the end of the month.*/
  int M, Y, D, Days;
  cout << "---Please enter your date---" << endl;
  cout << "Please enter Year: ";
  cin >> Y;
  cout << "\nPlease enter Month: ";
  cin >> M;
  cout << "\nPlease enter Day: ";
  cin >> D;
  // use if condition for verify there is a leap year
  if (M == 2) {
    //
    if ((Y % 100 != 0 || Y % 400 == 0) && Y % 4 == 0) {
      Days = 29 - D;
    } else {
      Days = 29 - D;
    }
    // create if condition for check month 30 day
  } else if (M == 4 || M == 6 || M == 11 || M == 9) {
    Days = 30 - D;

    // create if condition for check month 31 day
  } else {
    Days = 31 - D;
  }

  cout << "\nremaining days before the end of the monthis :" << Days << " Day"
      << endl;
  /* --------------------------II Question-------------------------------
  Write an algorithm that asks the user for the number of a month in order to
display the number of days in the following month.*/
  int M2, Y2, days;
  cout << "---Please enter your date---" << endl;
  cout << "Please enter Year: ";
  cin >> Y2;
  cout << "\nPlease enter Month: ";
  cin >> M2;
  if (M2 == 12) {
    M2 = 1;
  } else {
    M2++;
  }

  // use if condition for verify there is a leap year
  if (M2 == 2) {
    //
    if ((Y2 % 100 != 0 || Y2 % 400 == 0) && Y2 % 4 == 0) {
      days = 29;
    } else {
      days = 28;
    }
    // create if condition for check month 30 day
  } else if (M2 == 4 || M2 == 6 || M2 == 11 || M2 == 9) {
    days = 30;

    // create if condition for check month 31 day
  } else {
    days = 31;
  }
  cout << "\nnumber of days in the following month " << M2 << " is: " << days
       << " Day";


  /* --------------------------III Question-------------------------------
  Write an algorithm that asks the user for a date to display the date of the
  next day..*/

  int M3, Y3, D3;
  cout << "---Please enter your date---" << endl;
  cout << "Please enter Year: ";
  cin >> Y3;
  cout << "\nPlease enter Month: ";
  cin >> M3;
  cout << "\nPlease enter Day: ";
  cin >> D3;
  D3++;
  // use if condition for month 2
  if (M3 == 2) {
    // use if condition for verify there is a leap year
    if ((Y3 % 100 != 0 || Y3 % 400 == 0) && Y3 % 4 == 0) {
      if (D3 > 29) {
        D3 = 1;
        M3++;
      }
    } else {
      if (D3 > 28) {
        D3 = 1;
        M3++;
      }
    }
    // create if condition for check end year and end month
  } else {
    if (D3 > 31 && M3 == 12) {
      D3 = 1;
      M3 = 1;
      Y3++;

    } else if (D3 > 31 || D3 > 30) {
      D3 = 1;
      M3++;
    }

  }

  cout << "\nThe next date is: " << Y3 << "/" << M3 << "/" << D3;
  /* --------------------------IV Question-------------------------------
 Write an algorithm that asks the user for a date to display the previous day's
 date.*/

  int M4, Y4, D4;
  cout << "---Please enter your date---" << endl;
  cout << "Please enter Year: ";
  cin >> Y4;
  cout << "\nPlease enter Month: ";
  cin >> M4;
  cout << "\nPlease enter Day: ";
  cin >> D4;
  D4--;
  // use if condition for month 2
  if (M4 == 3) {
    // use if condition for verify there is a leap year
    if ((Y4 % 100 != 0 || Y4 % 400 == 0) && Y4 % 4 == 0) {
      if (D4 == 0) {
        D4 = 29;
        M4--;
      }
    } else {
      if (D4 == 0) {
        D4 = 28;
        M4--;
      }
    }
    // create if condition for check end year and end month
  } else {
    if (D4 == 0 && M4 == 1) {
      D4 = 31;
      M4 = 12;
      Y4--;

    } else if (D4 == 0) {
      M4--;
      if (M4 == 4 || M4 == 6 || M4 == 11 || M4 == 9) {
        D4 = 30;
      } else {
        D4 = 31;
      }
    }
  }

  cout << "\nThe next date is: " << Y4 << "/" << M4 << "/" << D4;

    /* --------------------------V Question-------------------------------
Write an algorithm that converts the time format of an electronic clock from AM
and PM to 24 hours.*/

  int H, MT, S;
  string status;
  cout << "-----please enter your time (H:MT:S)-----" << endl;
  cout << "Hour: ";
  cin >> H;
  cout << "\nMinute: ";
  cin >> MT;
  cout << "\nSecond: ";
  cin >> S;
  cout << "\nAM or PM: ";
  cin >> status;
  if (status == "AM") {
    if (H == 12)
      H = 0;
  } else {
    if (H != 12)
      H = H + 12;
  }
  cout << "\nYour time in system 24h is: " << H << ":" << MT << ":" << S;
  return 0;
}