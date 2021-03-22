/*
Count Element Occurence
Given a sorted array of integers, find the number of occurrences of a given target value.
Your algorithm’s runtime complexity must be in the order of O(log n).
If the target is not found in the array, return 0

**Example : **
Given [5, 7, 7, 8, 8, 10] and target value 8,
return 2.

*/

int leftPos(vector<int> ar, int x) //function to find out the left occurance of x
{
    if(ar[0] == x) return 0;
    int len = ar.size() - 1, mid;
    int l = 1, h = len -1;
    while(l<= h)
    {
        mid = l + (h - l)/2;
        if(ar[mid] == x && ar[mid - 1]!= x) return mid;
        else if(ar[mid] >= x) h = mid - 1;
        else l = mid + 1;        
    }
    return -1;
}

int rightPos(vector<int> ar, int x) //function to find out the right most occurance of x
{
    int len = ar.size() - 1, mid;
    if(ar[len] == x) return len;
    int l = 0, h = len - 2;
    while(l<= h)
    {
        mid = l + (h - l)/2;
        if(ar[mid] == x && ar[mid + 1]!= x) return mid;
        else if(ar[mid] <= x) l = mid + 1;
        else h = mid - 1;        
    }
    return -1;
}

int Solution::findCount(const vector<int> &ar, int x) {
    int pos1, pos2;
    
    pos1 = leftPos(ar, x);
    pos2 = rightPos(ar, x);
    if(pos1 == -1) return 0;  //if element is not present in array
    return pos2 - pos1 + 1;
}
