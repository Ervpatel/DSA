#include<iostream>
using namespace std;

int main() {

    int n;
    int rem = 0;
    int sum = 0;
    cout << "Enter the value of n :";
    cin >> n;

    for(int i = 1 ; n != 0 ; i*=10) {
        rem = n % 2;
        n /= 2;
        rem *= i;
        if(rem == 1) {
            cout << 0;
        }
        sum += rem;
    }

    cout << sum;

    return 0;
}