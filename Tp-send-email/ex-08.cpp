#include <iostream>
using namespace std;
/* 01-- Write an algorithm that asks the traveller for the distance in order to
   define the price. 02-- Write the previous algorithm using the "Case"
   instruction.*/
int main() {

  // with if Condition
  float distance_km, price_total;
  cout << "please enter your distance (km): ";
  cin >> distance_km;
  if (distance_km < 100) {
    price_total = distance_km * 2;
  } else if (distance_km < 200) {
    price_total = distance_km * 1.75;
  } else if (distance_km < 400) {
    price_total = distance_km * 1.50;
  } else {
    price_total = distance_km * 1.25;
  }
  cout << "your result price finall is: " << price_total << endl;

  // with switch case
  int distance, price;
  cout << "please enter your distance (km): ";
  cin >> distance;
  // switch case need parameter integer or charcter just
  switch (distance) {
  case 1 ... 99:
    price = distance * 2;
    break;
  case 100 ... 199:
    price = distance * 1.75;
    break;
  case 200 ... 399:
    price = distance * 1.50;
    break;
  default:
    price = distance * 1.25;
  }
  cout << "your result price finall is: " << price;
  return 0;
}