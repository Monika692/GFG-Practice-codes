int findLongestConseqSubseq(int arr[], int N)
    {
      sort(arr,arr+N);//1 2 3 4 9 10 20
      int count=1,maxim=0;
      if(N==1)
      return 1;
      for(int i=1;i<N;i++)
      {
          if(arr[i-1]+1==arr[i])
          {
              count++;
          }
          else if(arr[i-1]==arr[i])
          {
              continue;
          }
          else
          {
              count=1;
          }
          maxim=max(count,maxim);
      }
      return maxim;
    }
};
