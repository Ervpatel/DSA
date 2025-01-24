#include<iostream>
#include<vector>
using namespace std;

int main() {

    vector<int>vec = {4, 1 , 2 , 1 ,4};
    int sum = 0;

    for(int i : vec) {
        sum ^= i;
    }

    cout << "Unique value is : " << sum;

    return 0;
}