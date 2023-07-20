class Solution {
public:
     double myPow(double x, int n) {
        if (n == 0) return 1.0; // Any number to the power of 0 is 1
        if (n == 1) return x;   // Any number to the power of 1 is itself

        double ans = 1.0;
        long long nn = n; // Convert 'n' to a long long to handle the overflow
        if (nn < 0) {
            nn = -nn;
            x = 1.0 / x;
        }

        while (nn) {
            if (nn % 2) {
                ans *= x;
                nn--;
            } else {
                x *= x;
                nn /= 2;
            }
        }

        return ans;
    }
};
