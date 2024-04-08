#include <iostream>
#include <cmath>
using namespace std;

bool check();
int power();
int product();



int main() {
     // call the function
    float N;
    cout<<"please enter a number: ";
    cin>>N;
    if (check(N)){
        cout<<sqrt(N);
    }
    else{
        cout<<"please enter a positive number";
    }
    
    return 0;
}