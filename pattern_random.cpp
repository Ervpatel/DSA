#include<iostream>
using namespace std;

int main() {

    int m;
    int n;

    cout << "Enter the value of raw :";
    cin >> m;

    cout << "Enter the value of colum :";
    cin >> n;

    for(int i = 0 ; i < m ; i++) {

        cout << "* ";

        if(i == 0 || i == (m-1)) {

            for(int i = 0 ; i < n-2 ; i++) {
                cout << "* ";
            }

        } else {

            for(int i = 0 ; i < n-2 ; i++) {
                cout << "  ";
            }

        }

        cout << "* ";
        cout << endl;
    }


    return 0;
}