// 1234
// 1234
// 1234
// 1234

#include <iostream>
using namespace std;
int PrintStar(int n)
{
    cout << "Star Pattern" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    cout << endl;
}
int PrintNum(int n)
{
    cout << "Numer Pattern" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j;
        }
        cout << "\n";
    }
}
int PrintABCD(int n)
{
    cout << "ABCD Pattern" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << char(64 + j);
        }
        cout << "\n";
    }
    cout << "\n";
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << char(ch);
            ch++;
        }
        cout << "\n";
    }
}

int main()
{
    int n = 4;
    PrintStar(n);
    PrintNum(n);
    PrintABCD(n);
    return 0;
}
