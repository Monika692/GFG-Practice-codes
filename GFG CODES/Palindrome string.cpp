public:	
	int isPalindrome(string S)
	{
	    string rev=S;
	    int n=S.length();
	    int start=0;
	    int end=n-1;
	    while(start<end)
	    {
	        char temp=rev[start];
	        rev[start]=rev[end];
	        rev[end]=temp;
	        end--;
	        start++;
	    }
	    if(rev==S)
	    return 1;
	    
	    return 0;
	}
