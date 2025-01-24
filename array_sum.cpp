#include<iostream>
using namespace  std;

int Sum(int arr[] , int sz) {

    int sum = 0;

    for(int i = 0 ; i < sz ; i++) {
        sum += arr[i];
    }

    return sum;

}

int main() {

    int arr[] = {1 , 2 , 3 , 4 , 5};
    int sz = sizeof(arr)/sizeof(int);
    int ans = Sum(arr , sz);

    cout << ans << endl;

    return 0;
}