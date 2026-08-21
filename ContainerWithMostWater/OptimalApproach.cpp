#include <iostream>
using namespace std;
int CointainerWithMostWater(int height[], int n)
{

    int MaxWater = 0;
    int lp = 0, rp = n - 1;
    while (lp < rp)
    {
        int w = rp - lp;
        int ht = min(height[lp], height[rp]);
        int CurrWater = w * ht;
        MaxWater = max(MaxWater, CurrWater);
        if (height[lp] < height[rp])
        {
            lp++;
        }
        else
        {
            rp--;
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