int makeProductOne(int arr[], int n) 
    {
        int negative=0;
        int res=0;
        int zeroes=0;
        
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            zeroes++;
            else if(arr[i]>0)
            res=res+(arr[i]-1);
            else
            {
                res=res+(-1-arr[i]);
                negative++;
            }
        }
        
        res=res+zeroes;
        
        if(negative%2==1 and zeroes==0)
        res=res+2;
        
        return res;
    }
