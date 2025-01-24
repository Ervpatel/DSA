#include<iostream>
#include<vector>
using namespace std;

int MajorityElement(vector<int>vec) {

    int n = vec.size();
    int feq = 0;
    int ans = 0;

    for(int i : vec) {
        if(feq == 0) {
            ans = i;
        }
        if(i == ans) {
            feq++;
        } else {
            feq--;
        }
    }

    int count = 0;
    for(int i : vec) {
        if(i == ans) {
            count++;
        }
    }

    if(count > n/2) {
        return ans;
    } else {
        return -1;
    }

}

int main() {

    vector<int>vec = {1 , 2, 2, 1, 1,};

    int ans = MajorityElement(vec);

    cout << "Majority element is : " << ans;

    return 0;
}