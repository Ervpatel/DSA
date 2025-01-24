#include<iostream>
#include<vector>
using namespace std;

int main() {

    int arr[] = {15 , 11 , 7 , 2};
    int n = 4;
    int target;
    vector<int>vec;

    cout << "Enter your target :";
    cin >> target;

    for(int i = 0 ; i < n ; i++) {
        int sum = 0;
        for(int j = i+1 ; j < n ; j++) {
            sum = arr[i] + arr[j];
            if(sum == target) {
                vec.push_back(arr[i]);
                vec.push_back(arr[j]);
            }
        }
    }

    if(vec.size() != 0) {

    cout << "That pair is : (";

    for(int val : vec) {
        cout << val;
        if(val != vec.back()) {
            cout << ",";
        }
    }

    cout << ")";
    } else {
        cout << "there is no pair which has the sum " << target;
    }

    return 0;
}