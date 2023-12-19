class Solution
{
    public:
    void sort012(int arr[], int n)
    {
        int n0=0,n1=0,n2=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
                n0++;
            if(arr[i]==1)
                n1++;
            else
              n2++; 
        }
           for(int i=0;i<n;i++)
           {
             if(n0>0)
             {
                 arr[i]=0;
                 n0--;
             }
             else if(n1>0)
             {
                 arr[i]=1;
                 n1--;
             }
             else
             {
                 arr[i]=2;
                 n2--;
             }
        }
    }
};
