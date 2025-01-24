#include<iostream>
using namespace std;

int main() {

    int arr[] = {3 , -4 , 5 , 4, -1 , 7, -8};
    int n = 7;
    int max_sum = INT8_MIN;
    int current_sum = 0;

    for(int st = 0; st < n ; st++) {
        for(int end = st; end < n ; end++) {
            current_sum = 0;
          for(int i = st ; i <=end ; i++) {
            current_sum += arr[i];
            max_sum = max(current_sum, max_sum);
          }
        }
    }

    cout << max_sum;

    return 0;
}