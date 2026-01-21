#include<iostream>
using namespace std;

int addition(int arr[],int n);

int main()
{

    cout<<"Enter the no. of Elements";
    int n;
    cin>>n;

    int arr[n];
    int count=0;

    for(int i=0;i<n;i++){
        cout<<"Enter the no.";
        cin>>arr[i];
        count++;
    }

    int sum=addition(arr,n);
    cout<<"Sum of every Element :"<<sum<<endl;

    cout<< "total no. of elements :"<<count<<endl;

    return 0;
}

int addition(int arr[],int n)
{
    int sum= 0;

    for(int i=0;i<n;i++)
    {
       sum+= arr[i];
    }


    return sum;

} 