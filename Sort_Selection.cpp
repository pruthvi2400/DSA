#include <iostream>
using namespace std;

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

}

