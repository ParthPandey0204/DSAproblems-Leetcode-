class Solution {
public:
   double myPow(double x, int n) {
    long long N = n;               // Use long long to handle INT_MIN
    bool is_negative = false;
    if (N < 0) {
        is_negative = true;
        N = -N;
    }
    double result = 1.0;
    while (N > 0) {
        if (N % 2 == 1) {
            result *= x;
        }
        x *= x;
        N /= 2;
    }
    if (is_negative) {
        result = 1.0 / result;
    }
    return result;
}
};