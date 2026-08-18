#include<iostream>
#include<vector>
using namespace std;

vector<int>pairSum(vector<int> nums,int target){
    vector<int> ans;
    int n = nums.size();

    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            if(nums[i]+nums[j]==target){
                ans.push_back(i);
                ans.push_back(j);
            }
        }

    }
    return ans;

}

vector<int>pairSum(vector<int> nums,int target){
    vector<int> ans;
    int n = nums.size();
    int i=0;
    int j=n-1;

    while(i<j){
            if(nums[i]+nums[j]==target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;

            }
            else if(nums[i]+nums[j]<target){
                i++;

            }
            else{
                j--;
            }
        }
        
    return ans;

}
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq = 0, ans = 0;
        for(int i=0;i<nums.size();i++){
            if(freq == 0){
                ans =nums[i];

            }if(ans == nums[i]){
                freq++;
            }else{
                freq--;
            }
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> nums = {2,7,21,13};
    int majority = s.majorityElement(nums);
    cout << "Majority Element: " << majority << endl;
    int target = 9;
    vector<int> ans =pairSum(nums,target);
     if (ans.size() == 2)
    {
        cout << ans[0] << " " << ans[1] << endl;
    }
    else
    {
        cout << "Pair not found" << endl;
    }
    return 0;

}