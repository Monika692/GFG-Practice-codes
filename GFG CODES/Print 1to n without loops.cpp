class Solution
{
public:
    void printTillN(int N)
    {
      if(N!=0)
     {
         printTillN(N-1);
         cout<<N<<" ";
     }
    }
};
