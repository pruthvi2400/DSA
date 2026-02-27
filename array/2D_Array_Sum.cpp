#include<iostream>
using namespace std;

// Rowwie Sum 
void RowSum(int arr[][100], int row ,int col)
{
    for(int i=0; i<row ; i++)
    {   
        int sum=0;
        for(int j=0; j<col ; j++)
        {
            sum+=arr[i][j];
        }
        cout<<"Sum :"<<sum<<endl;
    }
}

// Col Wise Sum
void ColSum(int arr[][100], int row ,int col)
{
    for(int j=0; j<row ; j++)
    {   
        int sum=0;
        for(int i=0; i<col ; i++)
        {
            sum+=arr[i][j];
        }
        cout<<"Sum :"<<sum<<endl;
    }
}

int main()
{
    int row;
    cout<<"Enter the numbers of rows :";
    cin>>row;

    int col;
    cout<<"Enter the numbers of rows :";
    cin>>col;

    int arr[100][100];

    for(int i=0; i<row ;i++)
    {
        for(int j=0; j<col ;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"2D Matrix :"<<endl;
    for(int i=0 ; i<row ;i++)
    {
        for(int j=0 ; j<col ;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout << endl;
    }

    cout<<"Rowise Sum "<<endl;
    RowSum( arr, row , col);

    cout<<"Rowise Sum "<<endl;
    ColSum( arr, row , col);

    return 0;
}