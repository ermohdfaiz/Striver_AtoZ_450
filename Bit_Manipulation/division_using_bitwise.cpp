// the 1st fuction is brute force
long long mydivide(long long dividend, long long divisor) 
{
    int ans = 0;
    int temp = divisor;
    int i = 0;
        
    while (dividend >= (temp << i)) {
        //i = 0;
        temp = divisor;
        
        while (dividend >= (temp << i)) {
            i++;
        }
        ans += 1 << --i;
        dividend = dividend - (temp << i);
        i = 0;
    }
    return ans;
}

// this is optimize
long long divide(long long dividend, long long divisor)
{
    long long ans = 0;
long long temp = 0;

int sign = (dividend < 0) ^ (divisor < 0) ? -1 : 1;

divisor = abs(divisor);
dividend = abs(dividend);

for (int i = 31; i >= 0; i--) {
    if (dividend >= (divisor << i) + temp) {
        temp += divisor << i;
        ans += 1LL << i;
    }
}

if (sign == -1) {
    ans = -ans;
}
return ans;
    
    
}

// leetcode solution
long long leetcode_divide(long long dividend, long long divisor) {
    
    if(dividend == divisor)
    return 1;
    bool isPositive = (dividend<0 == divisor<0);    // if both are of same sign, answer is positive
    unsigned int a = abs(dividend);
    unsigned int b = abs(divisor);
    unsigned int ans = 0;
    while(a >= b){  // while dividend is greater than or equal to divisor
        short q = 0;
        while(a > (b<<(q+1)))
            q++;
        ans += (1<<q);  // add the power of 2 found to the answer
        a = a - (b<<q);  // reduce the dividend by divisor * power of 2 found
    }
    if(ans == (1<<31) and isPositive)   // if ans cannot be stored in signed int
        return INT_MAX;
    return isPositive ? ans : -ans;
}