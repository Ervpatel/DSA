#include<iostream>
using namespace std;

int main() {

    int arr[] = {3 , -4 , 5 , 4, -1 , 7, -8};
    int n = 7;
    int sum_max = INT8_MIN;
    int sum = 0;

    for(int st = 0; st < n ; st++) {
        sum = 0;
        for(int end = st; end < n ; end++) {
          sum += arr[end];
          sum_max = max(sum, sum_max);
        }
    }

    cout << sum_max;

    return 0;
}