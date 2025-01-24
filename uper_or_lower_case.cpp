// PROGRAM TO FIND THE GIVEN CHARACTER IS UPER CASE OR LOWER CASE

#include<iostream>
using namespace std;

int main() {

    char ch;
    cout << "Enter the character :";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
        cout << ch << " is lower case latter";
    } else if(ch >= 'A' && ch <= 'Z') {
        cout << ch << " is uper case latter";
    } else {
        cout << "not valid";
    }

    return 0;
}

