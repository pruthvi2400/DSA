#include <iostream>
using namespace std;

void Selection_sort(int arr[],int n);

int main()
{
    int n;
    cout<<"Enter the size of array =";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the no.=";
        cin>>arr[i];
    }
    cout<<"Array = ";

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;

    Selection_sort( arr, n);
    cout<<"The sorted Array =";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;

}

void Selection_sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minindex=i;

        for(int j=i+1;j<n;j++)
        {
            if(arr[minindex]>arr[j])
            minindex=j;
        }
        swap(arr[minindex],arr[i]);
    }
}