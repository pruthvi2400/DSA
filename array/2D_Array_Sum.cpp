#include<iostream>
#include <climits>
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
        cout<<"Row "<<i<<" Sum : "<<sum<<endl;
    }
}

// Col Wise Sum
void ColSum(int arr[][100], int row ,int col)
{
    for(int j=0; j<col ; j++)
    {   
        int sum=0;
        for(int i=0; i<row ; i++)
        {
            sum+=arr[i][j];
        }
        cout<<"Column "<<j<<" Sum : "<<sum<<endl;
    }
}

//Largest Sum Row wise
int LargestRowSum(int arr[][100], int row, int col)
{
    int max=INT_MIN;
    int rowindex = 0;

    for (int i=0; i<row ; i++)
    {
        int sum = 0;
        for(int j=0; j<col ; j++)
        {
            sum += arr[i][j];
        }

        if( sum > max)
        {
            max = sum;
            rowindex = i;
        }
    }

    cout<<"The Rowise maximum Sum is :"<<max<<endl;
    return rowindex;

}

//Largest Sum Col wise
int LargestColSum(int arr[][100], int row, int col)
{
    int max=INT_MIN;
    int colindex = -1;

    for (int j=0; j<col ; j++)
    {
        int sum = 0;
        for(int i=0; i<row ; i++)
        {
            sum += arr[i][j];
        }

        if( sum > max)
        {
            max = sum;
            colindex = j;
        }
    }

    cout<<"The Colwise maximum Sum is :"<<max<<endl;
    return colindex;

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

    
    int rowindex = LargestRowSum(arr, row, col);
    cout<<"The Row number with Largest Sum is : "<< rowindex <<endl;

    int colindex = LargestColSum(arr, row, col);
    cout<<"The Col number with Largest Sum is : "<< colindex <<endl;

    return 0;
}