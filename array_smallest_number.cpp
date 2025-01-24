#include<iostream>
using namespace std;

int main() {

    int arr[100];
    int min = INT8_MAX;
    int ind = 0;
    int n;
    cout << "Enter the size of aaray :";
    cin >> n;

    for(int i = 0 ; i < n ; i++) {
        cout << "Enter the " << i << "th index :";
        cin >> arr[i];
    }

    for(int i = 0 ; i < n ; i++) {
        if(arr[i] < min) {
            min = arr[i];
            ind = i;
        }
    }

    cout << min << " is the smallest number in array" << endl;
    cout << ind << " is the index of smallest number in array";


    return 0;
}