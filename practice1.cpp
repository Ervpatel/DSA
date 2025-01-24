#include<iostream>
using namespace std;

int main() {

    // int a = 10;
    // int *ptr = &a;
    // int **pptr = &ptr;

    // cout << &a << endl;
    // cout << ptr << endl;
    // cout << *ptr << endl;
    // cout << a << endl;
    // cout << **pptr << endl;
    // cout << pptr << endl;
    // cout << &ptr << endl;
    // cout << *pptr << endl;

    int a = 10;
    int *ptr = &a;
    int **pptr = &ptr;
    int ***ppptr = &pptr;

    cout << **ppptr << endl;
    cout << *pptr << endl;

    return 0;
}