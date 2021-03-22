/*
Rotated Array
Suppose a sorted array A is rotated at some pivot unknown to you beforehand.
(i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).
Find the minimum element.

The array will not contain duplicates.
*/

int Solution::findMin(const vector<int> &A) {
    int len = A.size();
    
    if(len == 1) return A[0];
    if(len == 2) return min(A[0], A[1]);
    
    if(A[0]< A[1] && A[0]< A[len -1])return A[0];
    if(A[len -1]< A[len - 2] && A[len - 1] < A[0]) return A[len - 1];
    
    int l = 1, h = len - 2, mid;
    
    while(l<= h)
    {
        mid = (h - l)/ 2 + l;
        if(A[mid]< A[mid + 1] && A[mid]< A[mid - 1]) return A[mid];
        else if(A[mid] < A[len-1]) h = mid - 1;
        else l = mid + 1;
    }
}


//time complexity O(logn)
