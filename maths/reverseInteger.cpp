/*
Reverse integer
Asked in:  
HCL
Bloomberg
Reverse digits of an integer.

Example1:

x = 123,

return 321
Example2:

x = -123,

return -321

Return 0 if the result overflows and does not fit in a 32 bit signed integer
*/

int Solution::reverse(int A) {
    int temp = abs(A);
    
    int reverse = 0;
    while(temp > 0)
    {
        int digit = temp % 10;
        if (reverse > (INT_MAX / 10) || (reverse == (INT_MAX / 10) && digit > (INT_MAX % 10))) {
            return 0;
        }
        reverse = reverse * 10 + digit;
        temp /= 10;
    }
    
    
    if(A< 0) reverse *= -1;
    return reverse;
}

