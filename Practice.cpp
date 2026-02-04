#include <iostream>
using namespace std;

int Selection(int n,int arr[]);
int Bubble(int n,int arr[]);
int Insertion(int n,int arr);

int main()
{
    int n;
    cout<<"Enter the no. of Elements =";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the no. =";
        cin>>arr[i];
    } 

    cout<<"Array =";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    Selection( n, arr);
    cout<<"sorted Array By Selection =";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    Bubble( n, arr);
    cout<<"sorted Array By Bubble =";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    int Insertion(int n, int arr[]);
    
    cout<<"sorted Array By Insertion =";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}

int Selection(int n,int arr[])
{
    //Selection Sort

    for(int i=0;i<n-1;i++)
    {
        int minindex=i;

        for(int j=i+1;j<n;j++)
        {
            if(arr[minindex]>arr[j])
            {
                minindex=j;
            }
        }

         swap(arr[minindex],arr[i]);

    }

}

int Bubble(int n,int arr[])
{
    //Bubble Sort

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
}

int Insertion(int n,int arr[])
{
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
        }

        arr[j+1]=temp;
    }
}