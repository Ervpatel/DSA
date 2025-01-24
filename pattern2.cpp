#include<iostream>
using namespace std;

int main() {

    int k = 1;
    int j = 1;
    int n;
    cout << "Enter the value of n :";
    cin >> n;

//  complicated nested loop

    // for(int i = 0 ; i < n ; i++) {
    //     for(j = k; j < (k+n) ; j++ ){
    //         cout << j << " ";
    //     }
    //     k = j;
    //     cout << endl;
    // }

//  easy nested loop

    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < n ; j++) {
            cout << k << " ";
            k++;
        }
        cout << endl;
    }

    return 0;
}