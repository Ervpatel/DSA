#include<iostream>
using namespace std;

// int SumDigit(int n) {
//     int num[100];
//     int temp = n;
//     int size = 0;
//     int ans = 0;

//     for (int i = 0 ; temp != 0 ; i++) {
//         num[i] = temp % 10;
//         temp /= 10;
//         size++;
//     }

//     for (int i = 0 ; i < size ; i++) {
//         ans += num[i];
//     }

//     return ans;
// }

int SumDigit(int n) {
    int ans = 0;
    int num = 0;

    for (int i = 0 ; n != 0; i++) {
        num = n % 10;
        n /= 10;
        ans += num;
    }

    return ans;
}

int main() {

    int n;
    cout << "Enter the value of n :";
    cin >> n;

    int sum = SumDigit(n);

    cout << "Sum of given digit is : " << sum;

    return 0;
}