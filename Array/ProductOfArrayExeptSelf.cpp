#include <iostream>
#include <vector>
using namespace std;
vector<int> OptimalProductOfArrayExeptSelf(vector<int> nums)
{
    int n = nums.size();
    vector<int> ans(n, 1);

    // Prefix product
    int prefix = 1;
    for (int i = 0; i < n; i++)
    {
        ans[i] = prefix;
        prefix *= nums[i];
    }

    // Suffix product
    int suffix = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        ans[i] *= suffix;
        suffix *= nums[i];
    }

    return ans;
}
vector<int> ProductOfArrayExeptSelf(vector<int> nums)
{
    int n = nums.size();
    vector<int> ans(n, 1);
    for (int i = 0; i < n; i++)
    {
        int prod = 1;
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                prod *= nums[j];
            }
        }
        ans[i] = prod;
    }
    return ans;
}
int main()
{
    cout<<"Optimal Way:"<<endl;
        vector<int> nums = {1, 2, 3, 4};
    vector<int> answ = OptimalProductOfArrayExeptSelf(nums);
    int sz = answ.size();
    for (int i = 0; i < sz; i++)
    {
        cout << answ[i] << endl;
    }

    cout<<"Normal"<<endl;
    vector<int> num = {1, 2, 3, 4};
    vector<int> answer = ProductOfArrayExeptSelf(num);
    int size = answer.size();
    for (int i = 0; i < size; i++)
    {
        cout << answer[i] << endl;
    }

    return 0;
}