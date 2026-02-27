#include<iostream>
using namespace std;

bool isPresent(int arr[][100], int target, int row, int col)
{
   
    for(int i=0; i<row ;i++)
    {
        for(int j=0; j<col ;j++)
        {
            if(arr[i][j] == target)
            {
                 return 1;
            }
        }
    }
    return 0;    
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

    int target;
    cout<<"Enter the no. to be find :";
    cin>>target;


    if(isPresent(arr, target, row, col ))
    {
        cout<<"Element Found";
    }
    else{
        cout<<"Element not found";
    }
}