#include<iostream>
using namespace std;

void min_of_two(int x , int y) {
    
    if(x < y) {
        cout << x << " is minimum";
    } else {
        cout << y << " is minimum";
    }

}

int main() {

    int a , b;
    cout << "Enter the value of a :";
    cin >> a;

    cout << "Enter the value of b :";
    cin >> b;

    min_of_two(a,b);

    return 0;
}