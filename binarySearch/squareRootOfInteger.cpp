/*
Square Root of Integer

Given an integar A.
Compute and return the square root of A.

If A is not a perfect square, return floor(sqrt(A)).

DO NOT USE SQRT FUNCTION FROM STANDARD LIBRARY
Input Format

The first and only argument given is the integer A.
Output Format

Return floor(sqrt(A))
Constraints

1 <= A <= 10^9
For Example

Input 1:
    A = 11
Output 1:
    3

Input 2:
    A = 9
Output 2:
    3
*/

int Solution::sqrt(int A) {
  if(A<= 1) return A;
  int mid, l = 1, h = A, ans;  
  while(l<= h)
  {
    mid = l + (h - l) / 2;
    if(mid <= A/ mid)
    {
      l = mid + 1;
      ans = mid;
    }
    else
    {
      h = mid - 1;
    }
  }
  return ans;
}

// TIME COMPLEXITY O(logn)
// SPACE COMPLEXITY O(1)
