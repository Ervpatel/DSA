#include<iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter thhe value of n :";
    cin >> n;
    
    for(int i = 0; i < n ; i++) {
        for(int j = 0 ; j < i ; j++) {
            cout << " ";
        }
        for(int k = i ; k < n ; k++) {
            cout << (i+1);
        }
        cout << endl;
    }

    return 0;
}


// #include<iostream>
// using namespace std;

// int main() {

//     int n;
//     cout << "Enter thhe value of n :";
//     cin >> n;
    
//     char ch = 'A';
//     for(int i = 0; i < n ; i++) {
//         for(int j = 0 ; j < i ; j++) {
//             cout << " ";
//         }
//         for(int k = i ; k < n ; k++) {
//             cout << ch;
//         }
//         ch++;
//         cout << endl;
//     }

//     return 0;
// }