// PROGRAM TO FIND GIVEN NUMBER IS ODD OR EVEN

#include<iostream>
using namespace std;

int main() {

    int number;
    cout << "Enter the number ";
    cin >> number;

    if(number % 2 == 0) {
        cout << number << " is even " ;
    } else {
        cout << number << " is odd" ;
    }

    return 0;
}