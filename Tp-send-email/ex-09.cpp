#include <iostream>
using namespace std;
// ex 09 : Write the algorithm that determines the net price to be paid
int main() {

  // with if Condition
  float amount, price_total;
  cout << "please enter your amount (DA): ";
  cin >> amount;
  if (amount < 500) {
    price_total = amount;
  } else if (amount < 1000) {
    price_total = amount - (amount * 0.025);
  } else if (amount < 5000) {
    price_total = amount - (amount * 0.05);
  } else {
    price_total = amount - (amount * 0.1);
  }
  cout << "your result price finall is: " << price_total << endl;

  // with switch case
  int amount_user, price;
  cout << "please enter your amount (DA): ";
  cin >> amount_user;
  // switch case need parameter integer or charcter just
  switch (amount_user) {
  case 1 ... 499:
    price = amount_user;
    break;
  case 500 ... 999:
    price = amount_user - (amount_user * 0.025);
    break;
  case 1000 ... 4999:
    price = amount_user - (amount_user * 0.05);
    break;
  default:
    price = amount_user - (amount_user * 0.1);
  }
  cout << "your result price finall is: " << price;
  return 0;
}