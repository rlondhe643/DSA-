#include <iostream>
using namespace std;

int PrintStar(int n)
{
    cout << "Star Pattern" << endl;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
// 1
// 22
// 333
// 4444

int PrintNum(int n)
{
    cout << "Number Pattern" << endl;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << "\n";
    }
}
// Reverce Triangle Pattern

int ReverceTrianglePattern(int n)

{
    cout << "Reverce Triangle Pattern" << endl;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << "\n";
    }
}

int InvertedTrianglePattern(int n)

{
    cout << "Inverted Triangle Pattern" << endl;
    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j <i; j++)
        {
            cout << " ";
        }
         for (int j = 0; j <n-i; j++)
        {
            cout << (i+1)<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n = 4;
    PrintStar(n);
    PrintNum(n);
    ReverceTrianglePattern(n);
    InvertedTrianglePattern(n);
}