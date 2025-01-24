#include<iostream>
using namespace std;

int Min(int arr[] , int sz) {

    int ind_min = 0;
    int temp = INT32_MAX;

    for(int i = 0 ; i < sz ; i++) {
        if(arr[i] < temp) {
            temp = arr[i];
            ind_min = i;
        }
    }

    return ind_min;
}

int Max(int arr[] , int sz) {

    int ind_max = 0;
    int temp = INT32_MIN;

    for(int i = 0 ; i < sz ; i++) {
        if(arr[i] > temp) {
            temp = arr[i];
            ind_max = i;
        }
    }

    return ind_max;
}

int SwapMinMax(int arr[] , int sz) {

    int ind1 = Max(arr , sz);
    int ind2 = Min(arr , sz);

    int temp = arr[ind1];
    arr[ind1] = arr[ind2];
    arr[ind2] = temp;
}

int main() {

    int arr[] = {1 ,2 , 3, 4, 5};
    int sz = sizeof(arr)/sizeof(int);

    SwapMinMax(arr , sz);

    for(int i = 0 ; i < sz ; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}