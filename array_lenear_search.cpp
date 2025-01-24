#include<iostream>
using namespace std;

int Search(int arr[] , int size , int n) {

    for(int i = 0 ; i < size ; i++) {

        //for searching
        if(arr[i] == n) {
            return i;
        }

        //if value is not in that array
        if(i == size-1) {
            return 0;
        }

    }

}

int main() {

    int arr[] = {2 , 4 , 9 , 6 , 8 , 3 , 1, 4};
    int size = sizeof(arr)/sizeof(int);

    int n;
    cout << "Search the value :";
    cin >> n;

    if(Search(arr , size , n)) {
    cout << "Index is : " << Search(arr , size , n);
    } else {
        cout << n << " is not in array";
    }

    return 0;
}