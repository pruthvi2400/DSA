#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[6]={1,2,3,4,5,6};
    int n=6;
    
    cout<<"Original Array =";

    for (int i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }
    
     cout<<endl;

    for(int i=0;i<n;i+=2)
    {
        if(i+1<n)
        {
         swap(arr[i],arr[i+1]);
        }

    }

    cout<<"Swaped array =";
    for(int i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }

    return 0;
}