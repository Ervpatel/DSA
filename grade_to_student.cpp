// giving grades to student according his marks

#include<iostream>
using namespace std;

int main() {

    int marks;
    cout << "Enter your marks :";
    cin >> marks;

    if(marks >= 85 && marks <= 100) {
        cout << "congarts !\n";
        cout << "you got 'A' grade";
    } else if(marks >= 70 && marks < 85) {
        cout << "congarts !\n";
        cout << "you got 'B' grade";
    } else if(marks >= 55 && marks < 70) {
        cout << "you got 'C' grade";
    } else if(marks >= 35 && marks < 55) {
        cout << "you get 'D' grade";
    } else if(marks >= 0 && marks < 35) {
        cout << "Sorry !\n";
        cout << "You are fail";
    } else {
        cout << "invalide input";
    }

    return 0;
}