for(int i=1;i<n;i++)
    {
        int temp=arr[i];
        int j=i-1;

        for(;j>=0;j--)
        {
            if(temp<arr[j])
            {
                arr[j+1]=arr[j];
            }
            else{
                break;
            }

            arr[j+1]=temp;
        }

        
    }