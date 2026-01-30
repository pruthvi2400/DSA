#include<iostream>
using namespace std;

int precision(int n);
double moreprecision(int n,int precision,int temp);

int main()
{
    int n;
    cout<<"Enter the no. = ";
    cin>>n;

    int temp=precision(n);
    double finalans=moreprecision( n, 3, temp);

    cout<<"Squre Root ="<<finalans;
    return 0;

}

int precision(int n)
{
    int start=0;
    int end=n;
    int ans=0;

    while(start<=end)
    {
        int mid=start+(end-start)/2;
        long long target = mid*mid;

        if(target == n)
        {
            return mid;
        }
        if(target > n)
        {
            end=mid-1;
        }
        else
        {
            ans=mid;
            start=mid+1;
        }
    }

    return ans;
}

double moreprecision(int n,int precision,int temp)
{
    double factor=1;
    double ans=temp;

    for(int i=0;i<precision;i++)
    {
        factor=factor/10;
        for(double j=ans;j*j<n;j=j+factor)
        {
            ans=j;
        }
    }

    return ans;

}