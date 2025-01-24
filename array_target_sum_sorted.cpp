#include<iostream>
#include<vector>
using namespace std;

vector<int>TargetPair(vector<int>vec , int target) {
    int n = vec.size();
    vector<int>ans;

    for(int i = 0 , j = vec.back(); i < n ;) {
        if(vec[i] + vec[j] == target) {
            ans.push_back(vec[i]);
            ans.push_back(vec[j]);
            return ans;
        } else if(vec[i] + vec[j] > target) {
           j--;
        } else {
            i++;
        }
    }

    return ans;

}

int main() {

    vector<int>vec = {2 , 7, 11, 15};
    int target = 18;
    vector<int>ans = TargetPair(vec , target);

    cout << "(" << ans[0] << " , " << ans[1] << ")";


    return 0;
}