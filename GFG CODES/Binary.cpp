// User function template for C++

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
       int l=0;
       int h=n-1;
       int mid=0;
       while(l<=h)
       {
           mid=(l+h)/2;
           if(arr[mid]==k)
           return mid;
           if(arr[mid]<k)
           l=mid+1;
           else
           h=mid-1;
       }
       return -1;
    }
};
