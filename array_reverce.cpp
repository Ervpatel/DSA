#include<iostream>
using namespace std;

void ArrayReverce(int arr1[] , int size) {

    int temp = 0;
    for(int i = 0 , j = (size-1) ; i < j ; i++ , j--) {
        temp = arr1[i];
        arr1[i] = arr1[j];
        arr1[j] = temp;
    }

}

int main() {

    int arr1[] = {2 , 4 , 6 , 8 , 10 , 12};
    int size = sizeof(arr1)/sizeof(int);

    ArrayReverce(arr1 , size);

    for(int i = 0 ; i < size ; i++) {
        cout << arr1[i] << endl;
    }
    

    return 0;
}