/*
Determine whether an integer is a palindrome. Do this without extra space.

A palindrome integer is an integer x for which reverse(x) = x where reverse(x) is x with its digit reversed.
Negative numbers are not palindromic.

Example :

Input : 12121
Output : True

Input : 123
Output : False

approach:
        number % 10 -> last digit of the number
        number / 10 -> number after removing the last digit

        reverse(number) == number //pallindrome
*/

int Solution::isPalindrome(int A) {
    int reverse = 0;
    int base = 10;
    int temp = A;
    while(temp> 0)
    {
        reverse = (base * reverse) + (temp % 10);
        temp/= 10;
    }
    if(reverse == A) return 1;
    return 0;
}
