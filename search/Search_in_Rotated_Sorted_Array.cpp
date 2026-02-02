#include<iostream>
using namespace std;

int main()
{
    int n=6;
    int arr[]={5,6,1,2,3,4};

    int start=0;
    int end=n-1;
    int target;
    cout<<"Enter the no. to find = ";
    cin >> target;

    while(start <= end)
    {
        int mid=start+(end-start)/2;

        if(arr[mid]==target)
        {
             cout << "Found at index: " << mid;
             return 0;
        }
        if(arr[start]<=arr[mid] )
        {
            if(arr[start]<=target && arr[mid] > target)      
            {
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        else
        {
            if(arr[mid]<=target && arr[end]>target)
            {
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
    }

    cout << "Element not found";
    return 0;
}