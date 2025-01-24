#include<iostream>
#include<vector>
using namespace std;

int MajorityElement(vector<int>vec) {
    int n = vec.size();
    int feq = 1;
    int ans = vec[0];

    for(int i = 1 ; i < n ; i++) {
        if(vec[i] == vec[i-1]) {
            feq++;
        } else {
            feq = 1;
            ans = vec[i];
        }
        if(feq > n/2) {
            return ans;
        }
    }

    return ans;


}

int main() {

    vector<int>vec = {0 , 0 , 1 , 1 , 1, 2 , 2, 2, 2 ,2};

    int ans = MajorityElement(vec);

    cout << ans << endl;
    

    return 0;
}