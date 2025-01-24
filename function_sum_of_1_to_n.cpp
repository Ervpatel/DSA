#include<iostream>
using namespace std;

int sum_num(int n) {
    int sum = 0;
    for(int i = 1 ; i <= n ; i++) {
        sum+=i;
    }

    return sum;
}

int main() {

    int n;
    cout << "Enter the value of n :";
    cin >> n;

    int sum = sum_num(n);
    cout << "Sum of 1 to n number is sum : " << sum;

    return 0;
}