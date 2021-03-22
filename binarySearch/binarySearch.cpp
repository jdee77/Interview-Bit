/*
Binary search :
searching algorithm that reduces the search space in each execution level.
starts with mid element; if its equal to targeted element return tha 'mid' position
if not and mid greter than targeted element reduce search space to left half, if lower than make right half as search space.
*/


int binarySearch(vector<int> const ar, int x)
{
  int len = ar.size();
  int low = 0;
  int high = len - 1;
  int mid;
  
  while(low<= high)
  {
    mid = low + (high - low)/2;
    if(ar[mid] == x) return mid;  
    else if(ar[mid] > x) h = mid - 1; // reduce search space to left half of the array
    else l = mid + 1;                 // reduce search space to right half of the array
  }
  return -1;  // if element not present 
}
