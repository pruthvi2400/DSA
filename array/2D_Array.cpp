#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of rows :";
    cin>>n;
    
    int m;
    cout<<"Enter the number of rows :";
    cin>>m;

    int arr[n][m];

    // Input 
    for(int i=0 ; i<n ;i++)
    {
        for(int j=0 ; j<m ;j++)
        {
            cin>>arr[i][j];
        }
    }

    // Output
    cout<<"2D Matrix :"<<endl;
    for(int i=0 ; i<m ;i++)
    {
        for(int j=0 ; j<m ;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout << endl;
    }
}