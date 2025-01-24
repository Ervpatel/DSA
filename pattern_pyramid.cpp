#include<iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    int temp = 1;
    for(int i = 0 ; i < n ; i++) {
        for(int j = (n-i-1) ; j > 0 ; j--) {
            cout << " ";
        }
        for(int j = 1 ; j <= (i+1) ; j++) {
            cout << j;
        }

        // complicated
        // for(int k = (n-i) ; k < n ; k++) {
        //     cout << n-k;
        // }

        // simple
        for(int j = i ; j > 0 ; j--) {
            cout << j;
        }
        
        cout << endl;
    }

    return 0;
}
