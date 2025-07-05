class Solution {
public:
    double myPow(double x, int n) {
        if(x == 1 || n == 0) {
            return 1;
        }
        long N = n;

        if(N < 0) {
            x = 1/x;
            N = -1 * N;
        }

        double result = 1;

        while(N > 0) {
            if(N % 2 == 1) {
                result *= x;
            }

            x *= x;
            N /= 2;
        }

        return result;
    }
};