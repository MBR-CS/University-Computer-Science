// Series04:Ex05 S2-G3 Bloul Mohamed Ridha

#include <iostream>
using namespace std;

int main() {

  // ex 05:

  float sugar_kg, price;
  cout << "Please enter number amount (kg): ";
  cin >> sugar_kg;
  if (sugar_kg <= 10 and sugar_kg > 0) {
    price = sugar_kg * 100;
    cout << "your final price is: " << price;
  } else {
    price = (1000) + ((sugar_kg - 10) * 90);
    cout << "your final price afteer discount is: " << price;
  };
  return 0;
}