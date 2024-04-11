// Series04:Ex03 S2-G3 Bloul Mohamed Ridha
// import library i need use in algorithms :
/* Write the algorithm that solves a second-degree equation 
where A, B and C are real numbers.*/
#include <cmath>
#include <iostream>
using namespace std;

int main() {

  float A, B, C, X_1, X_2, X;
  cout << "---------------EX 03-------------------"<<endl;
  cout << "please enter number A: ";
  cin>>A;
  cout << "\nplease enter number B: ";
  cin>>B;
  cout << "\nplease enter number C: ";
  cin>>C;
  cout << "\nYour second-degree equation is: "<<A<<"x²+("<<B<<")x+("<<C<<")"<<endl;
  
  float calculator_delta = pow(B, 2) - (4*A*C);
  if (calculator_delta > 0){
    X_1 = ((-B) +sqrt(calculator_delta))/(2*A);
    X_2 = ((-B) -sqrt(calculator_delta))/(2*A);
    cout << "the solutions to the equation is X1 and X2"<<endl;
    cout << "X1: "<<X_1<<endl;
    cout << "X2: "<<X_2;
  }else if (calculator_delta == 0){
    X = (-B)/(2*A);
    cout << "the solution to the equation is X"<<endl;
    cout << "X: "<<X;
  }else{
    cout << "the are no solutions!!";
  }
  return 0;
}