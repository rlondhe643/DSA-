#include <iostream>
using namespace std;

// Encapsulation is wrapping up of Data& member function in single Unit called Class
class Account
{
private:
    double balance;
    string password;

public:
    string AccountID;
    string username;
};

int main(){
    Account a;
    return 0;
}
