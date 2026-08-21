#include <iostream>
using namespace std;
int CointainerWithMostWater(int height[], int n)
{

    int MaxWater = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int width = j - i;
            int ht = min(height[i], height[j]);
            int area = width * ht;
            MaxWater = max(MaxWater, area);
        }
    }
    return MaxWater;
}

int main()
{
    int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = sizeof(height) / sizeof(height[0]);

    int ans = CointainerWithMostWater(height, n);
    cout << "MaxWater capacity is:" << ans << endl;
    return 0;
}