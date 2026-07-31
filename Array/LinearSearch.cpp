#include<iostream>
using namespace std;    

int linearSearch(int arr[], int n, int target) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            return i; 
        }
    }
    return -1; 
}
int main() {
    int arr[] = {4,2,7,8,1,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 30;
    int index = linearSearch(arr, n, target);
    if(index != -1) {
        cout << "Element " << target << " found at index " << index << endl;
    } else {
        cout << "Element " << target << " not found in the array." << endl;
    }
    return 0;
}