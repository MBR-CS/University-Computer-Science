#include <iostream>
using namespace std;
/* ex 10 : Write an algorithm that asks for the ages of the children to define
and display the total amount to be paid for this family.*/
int main() {

  // with if Condition
  float total_price = 0, price_person, age_person;
  while (true) {
    cout << "Please enter your age (for end press 0): ";
    cin >> age_person;
    if (age_person == 0) {
      cout << "your price finall is (DA): " << total_price << endl;
      break;
    } else if (age_person < 6) {
      price_person = 5000 - (5000 * 0.75);
    } else if (age_person <= 12) {
      price_person = 5000 - (5000 * 0.5);
    } else if (age_person <= 16) {
      price_person = 5000 - (5000 * 0.25);
    } else {
      price_person = 5000;
    }
    total_price = total_price + price_person;
  }
  // with switch case:
  int total = 0, person_price, age;
  while (true) {
    cout << "Please enter your age (for end press 0): ";
    cin >> age;

    switch (age) {
    case 0:
      cout << "your price finall is (DA): " << total << endl;
      return 0;
    case 1 ... 5:
      person_price = 5000 - (5000 * 0.75);
      break;
    case 6 ... 12:
      person_price = 5000 - (5000 * 0.5);
      break;
    case 13 ... 16:
      person_price = 5000 - (5000 * 0.25);
      break;
    default:
      person_price = 5000;
    }
    total = total + person_price;
  }
  return 0;
}