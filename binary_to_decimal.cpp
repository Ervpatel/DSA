#include<iostream>
using namespace std;

// int BinaryToDecimal(int n) {

//     int count  = -1;
//     int i = 100000000;

//     while(count < 0) {
//         count = n - i;
//         if(count < 0) {
//             i /= 10;
//         }
//     }

//     int a = 0;
//     int div = 0;

//     while(i != 0) {

//         div = n/i;

//         if(n >= i) {
//             n -= i;
//         }

//         a = (a*2) + div;
//         i /= 10;

//     }

//     return a;

// } 

int BinaryToDecimal(int n) {

    int num = 0;
    int sum = 0;
    
    for(int i = 1 ; n != 0 ; i *= 2) {
        num = n % 10;
        n /= 10;
        sum += num*i;
    }

    return sum;
} 

int main() {

    int n;
    cout << "Enter the value of n :";
    cin >> n;

    int ans = BinaryToDecimal(n);

    cout << "Decimal number is : " << ans;

    return 0;
}