#include <iostream>
#include <vector>
using namespace std;



int main(){
    int a = 10;
    int *ptr = &a;

    cout<< ptr <<endl;
    cout<< &a << endl;

    //pointer To pointer

    int **ptr2 = &ptr;
    cout<< **(ptr2) <<endl;

    // Dereference operator (value at address)
    cout<< *(ptr) <<endl;

    //NULL Pointer
    int *ptr3 = NULL;
    return 0;

}