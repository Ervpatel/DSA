#include<iostream>
using namespace std;

int fact_n(int n) {
    int fact = 1;

    for(int i = 1 ; i <= n ; i++) {
        fact *= i;
    }

    return fact;
}

int main() {

    int n;
    cout << "Enter the value of n :";
    cin >> n;

    int ans = fact_n(n);

    cout << "The factorial of n number is : " << ans;

    return 0;
}