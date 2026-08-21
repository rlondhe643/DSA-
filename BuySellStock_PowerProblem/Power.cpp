#include<iostream>
using namespace std;
class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0)
            return 1.0;

        long long binform = n;

        if (binform < 0) {
            x = 1 / x;
            binform = -binform;
        }

        double ans = 1.0;

        while (binform > 0) {
            if (binform % 2 == 1) {
                ans *= x;
            }

            x *= x;
            binform /= 2;
        }

        return ans;
    }
};
int main() {
    Solution sol;
    double result = sol.myPow(2.0, 10);
    cout << "Result: " << result << endl; // Output: Result: 1024
    return 0;
}