#include<iostream>
using namespace std;

int CalFibonacci(int n) {
    int f1 = 1;
    int f2 = 1;
    int fib = 0;

    for(int i = 1 ; i <= n-2 ; i++) {
        fib = f1 + f2;
        f1 = f2;
        f2 = fib;
    }

    return fib;

}

int main() {

    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    int ans = CalFibonacci(n);
    cout << "the Nth number of fibonacci is : " << ans;

    return 0;
}