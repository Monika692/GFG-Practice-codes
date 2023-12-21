/*Complete the function below*/

class Solution {
public:
    int PalinArray(int a[], int n)
    {
        for(int i=0;i<n;i++)
        {
    	if(!isPalindrome(a[i]))
    	{
    	    return 0;
    	}
    	}
    	return 1;
    }
    bool isPalindrome(int num)
    {
        int rev=0;
        int original=num;
        while(num>0)
        {
            int digit=num%10;
            rev=rev*10+digit;
            num/=10;
        }
        return original==rev;
    }
};
