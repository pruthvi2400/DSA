#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Total no. : ";
    cin>>n;
    int arr[n];

    int sum=0;

    
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the no. : ";
        cin>>arr[i];
        sum+=arr[i];
    }

    cout<<"Sum of numbers : "<<sum<<endl;

    return 0;
}