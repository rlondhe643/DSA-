#include<iostream>
#include<climits>
using namespace std;
int KadaneAlgorithm(int arr[],int n){
    int cs = 0;
    int ms = INT_MIN;

    for(int i=0;i<n;i++){
         cs += arr[i];
        ms = max(ms,cs);
        if(cs<0){
          cs = 0;
        } 
    }
    return ms;
}

int MaximumSubarraySum(int arr[],int n){
    int ms = INT_MIN;
    for(int st = 0;st<n;st++){
        int cs = 0;
       for(int end=st;end<n;end++){
        cs += arr[end];
        ms = max(ms,cs);
       }
    }
    return ms;
}
 
int main(){
    
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Maximum Subarray Sum: " << MaximumSubarraySum(arr,n) << endl;
    cout<<"Maximum Subarray Sum using kadane algoritham:"<<KadaneAlgorithm(arr,n) << endl;
    cout<< "All Subarrays: " << endl;
   
    
    for(int st=0;st<n;st++){
        for(int end=st;end<n;end++){
            for(int i=st;i<=end;i++){
                cout<< arr[i];
            }
            cout<<" ";

        }
        cout <<endl;
    }
    return 0;
}