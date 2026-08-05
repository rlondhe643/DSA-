#include <iostream>
#include <vector>
using namespace std;
vector<int> pairSum(vector<int>& arr, int target) {
    vector<int> result;
    int n = arr.size();
    int i = 0, j = n - 1;
    int ps;
    while(i<j){
        ps = arr[i] + arr[j];
    }if(ps > target){
        j--;
    }else if (ps < target)
    {
        i++;
    }else{
        result.push_back(i);
        result.push_back(j);
        return result;
    }
    
}
int main(){
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = pairSum(nums, target);
    cout << ans[0] << " " << ans[1] << endl;

    return 0;
    
}