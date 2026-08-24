class Solution {
public:
    double myPow(double x, long long n) {
      if (n == 0)
        return 1.0;

    // If n is negative, convert to positive and invert x
    if (n < 0)
        return 1.0 / myPow(x, -n);

    // Recursive case
    double half = myPow(x, n / 2);

    if (n % 2 == 0)
        return half * half;  // even power
    else
        return x * half * half; 
        } // odd power
};