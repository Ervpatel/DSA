#include<iostream>
using namespace std;

int Cal_nCr(int n , int r) {

    int fact1 = 1;
    int fact2 = 1;

    for(int i = 1 ; i != n-r ; i++) {
        fact1 *= i;
    }

    for(int i = 1 ; i <= r ; i++) {
        fact2 *= i;
    }

   return fact1 / fact2;

}

int main() {

    int n,r;
    cout << "Enter the value of n :";
    cin >> n;

    cout << "Enter the value of r :";
    cin >> r;

    int ans = Cal_nCr(n, r);

    cout << "Ans is :" << ans;

    return 0;
}