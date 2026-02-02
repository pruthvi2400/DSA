#include <iostream>
using namespace std;

void Bubble_Sort(int arr[],int n);

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

    Bubble_Sort(arr,n);
    cout<<"The sorted Array =";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;

}

void Bubble_Sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++){
             if(arr[j]>arr[j+1])
             swap(arr[j],arr[j+1]);
        }
    }
}