#include <iostream>
#include <vector>
using namespace std;
int RotatedSortedArray(vector<int> arr, int size, int tar)
{
    int mid = 0;
    int st = 0;
    int end = size - 1;
    while (st <= end)
    {
        mid = st + (end - st) / 2;
        if (arr[mid] == tar)
        {
            return mid;
        }
        if (arr[st] <= arr[mid])
        {
            if ( (arr[st] <= tar && tar <= arr[mid]))
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        else
        {
            if ( (arr[mid] <= tar && tar <= arr[end]))
            {
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1; // Target not found
}

int main()
{
    vector<int> arr = {3, 4, 5, 6, 7, 0, 1, 2};
    int n = arr.size();
    int target = 0;
    int ans =  RotatedSortedArray(arr, n, target);
    cout << "the index of target:" << ans << endl;
    return 0;
}