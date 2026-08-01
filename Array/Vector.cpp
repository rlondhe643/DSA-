#include<iostream>
#include<vector>
using namespace std;
int UniqueNumber(){

}

int main(){
    vector<int> arr = {4,1,2,1,2};
    for(int value : arr){
        cout<<value<<endl;
    }
    //Vector function's
    // size function
    cout<<"Size of vector is : "<<arr.size()<<endl;

    //push_back 
    arr.push_back(12);//adding element

    //POP back fiunction
    arr.pop_back();//delete the element

    //front function
    cout<<"front element"<<arr.front()<<endl;//return frist value

    //back fuction
    cout<<"back element"<<arr.back()<<endl;//return last value

    //at function
    cout<<arr.at(2)<<endl;//to find perticullar number
    
    return 0 ;
}
