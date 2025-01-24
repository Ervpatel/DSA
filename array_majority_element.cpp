#include<iostream>
using namespace std;

int MajorityElement(int arr[] , int n) {

    for(int i = 0 ; i < n ; i++) {
        int count = 0;
        for(int j = 0 ; j < n ; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        if(count > (n/2)) {
            return arr[i];
        }
    }

}

int main() {

    int arr[] = {2 , 2, 1 , 2 , 1};
    int n = 5;

    int ans = MajorityElement(arr , n);

    cout << ans << endl;

    return 0;
}