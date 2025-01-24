#include<iostream>
using namespace std;

int main() {

    int arr1[6] = {1 , 4 , 3 , 8 , 4 , 7};
    int arr2[6] = {1 , 5 , 9 , 3 , 10};

    for(int i = 0 ; i < 6 ; i++) {
        for(int j = 0 ; j < 6 ; j++) {
            if(arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
            }
        }
    }

    return 0;
}