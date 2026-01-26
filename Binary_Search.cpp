#include <iostream>
using namespace std;

int Binary_Search(int arr[],int n, int key);

int main()
{
    int n; 
    cout<<"Enter the size of array =";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the values in the array = ";
        cin>>arr[i];
    }

    cout<<"Array = ";

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;

    int key;
    cout<<"Enter the index of Element to Find =";
    cin>>key;

    int search = Binary_Search( arr, n, key);


    cout<<"The index of no. is ="<<search<<endl;

    return 0;

}

int Binary_Search(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;
    int mid= start + (end-start) / 2;   

    while(start<=end)
    {
        if(arr[mid] == key)
        {
            return mid;
        }

        if(arr[mid] < key)
        {
            start=mid+1;
        }
        else{

            end=mid-1;
        }

        mid= start + (end-start) / 2;
    }

    return -1;
}