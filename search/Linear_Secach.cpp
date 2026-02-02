#include<iostream>
using namespace std;


bool search(int arr[],int n, int element);

int main()
{
    int n;
    cout<<"Enter the total no. :";
    cin>>n;
   
    int arr[n];
    int count=0;

    for(int i=0; i<n ; i++)
    {
        cout<<"Enter the numbers = ";
        cin>>arr[i];
        count++;
    }

    int element;
    cout<<"Enter the element for search =";
    cin>>element;


    int found=search( arr, n, element);
    
    cout<<"Is the No. present(0 means No/1 Means Yes) = "<< found <<endl;


    return 0;
}

bool search(int arr[],int n,int element)
{
    

    for(int i=0;i<n;i++)
    {
        if(arr[i]==element)
        {
            return true;
        }
    }
    return false;
}