#include<iostream>
using namespace std;

void Duplicates(int arr[],int n);

int main()
{
    int n;
    cout<<"enter the size of Array =";
    cin>>n;

     int arr[n];

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the Elements =";
        cin>>arr[i];
    }

    

    cout<<"The Duplictes are =";

    Duplicates( arr, n);

    return 0;
}

void Duplicates(int arr[],int n)
{
    for( int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (arr[i]==arr[j])
            {
                cout<<arr[i]<<" ";
                break;
            }
        }
    }
}