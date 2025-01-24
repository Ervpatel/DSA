#include<iostream>
using namespace std;

int PrimeOrNot(int n) {
    int count = 0;
    for (int i = 1 ; i <= n ; i++) {
        if(n % i == 0) {
            count++;
        }
    }

    if(count == 2) {
        return 1;
    } else {
        return 0;
    }
}

int main() {

    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    if(PrimeOrNot(n)) {
        cout << n << " is prime number";
    } else {
        cout << n << " is un-prime number";
    }

    return 0;
}