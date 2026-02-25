#include <iostream>
using namespace std;

void Sort_Insertion(int arr[],int n);

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

    Sort_Insertion(arr,n);
    cout<<"The sorted Array =";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;

}

void Sort_Insertion(int arr[],int n)
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