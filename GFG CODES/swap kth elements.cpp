	void swapKth(int *arr, int n, int k) {
	    int count=0;

                int end=n-1;
                
                int temp;
                
                for(int i=0;i<k-1;i++){
                
                count++;
                
                end--;
                
                }
                
                temp=arr[count];
                
                arr[count]=arr[end];
                
                arr[end]=temp;
                
                }
