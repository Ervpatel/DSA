#include<iostream>
using namespace std;

int main() {

    int count = 0;
    int n;
    bool IsPrime = true;
    cout << "Enter any number :";
    cin >> n;

    for(int i = 2 ; i < n ; i++) {
        if(n % i == 0) {
            IsPrime = false;
            break;
        }
    }

    if(IsPrime) {
        cout << n << " is prime number";
    } else {
        cout << n << " is not prime number";
    }
    


    return 0;
}

                       // Easy way //

// #include<iostream>
// using namespace std;

// int main() {

//   int n;
//   int count = 0;
//   cout << "Enter the number :";
//   cin >> n;

//   for(int i = 1; i <= n ; i++) {
//     if(n % i == 0) {
//       count++;
//     }
//   }

//   if(count == 2) {
//     cout << n << " is prime number";
//   } else if(count == 1) {
//     cout << n << " is nutral number";
//   } else {
//     cout << n << " is un-prime number";
//   }

//   return 0;
// }