/*Excel Column Number
Asked in:  
Amazon
Problem Description
Given a column title A as appears in an Excel sheet, return its corresponding column number.
Problem Constraints
1 <= |A| <= 100

Input Format
First and only argument is string A.

Output Format
Return an integer

Example Input
Input 1:
 1
Input 2:
 28

Example Output
Output 1:
 "A"
Output 2:
 "AB"

Example Explanation
Explanation 1:

 1 -> "A"
Explanation 2:

A  -> 1
B -> 2
C -> 3
...
Z -> 26
AA -> 27
AB -> 28 

approach :
    Assume the column values as Base-26 number system.
*/

int Solution::titleToNumber(string A) {
    int len = A.size();

    int power = 0, res = 0, base = 26;
    
    for(int i = len - 1; i>= 0; i--)
    {
        res += (A[i] - 64)* pow(base, power);
        power ++;
    }
    return res;
}
