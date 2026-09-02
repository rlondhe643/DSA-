#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int target)
{
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (target <= arr[mid])
        {
            high = mid - 1;
        }
        else if (target >= arr[mid])
        {
            low = mid + 1;
        }
        else 
        {
            return mid;
        }
    }
    
}
int main()
{
    int arr[] = {12, 24, 36, 46, 58, 69, 78, 89, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 90;
    int ans = BinarySearch(arr, n, target);
    cout << ans << endl;
    return 0;
}