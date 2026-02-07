#include<iostream>
#include<vector>
using namespace std;

void mergearr(int arr1[],int arr2[],int arr3[],int n1,int n2){

    int i=0,j=0,k=0;

    while(i<n1 && j<n2)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }

    while(i<n1)
    {
        arr3[k]=arr1[i];
            k++;
            i++;
    }

    while(i<n2)
    {
        arr3[k]=arr1[j];
            k++;
            j++;
    }
}

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main()
{
    int arr1[5]={1,3,5,7,9};
    int arr2[3]={2,4,6};

    int arr3[8]={0};

    mergearr(arr1,arr2,arr3,5,2);

    print(arr3,8);
}