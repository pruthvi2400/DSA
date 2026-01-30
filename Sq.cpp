#include<iostream>
using namespace std;

int sqroot(int n);

int main()
{
    int n;
    cout<<"Enter the no. = ";
    cin>>n;

    int ans=sqroot(n);

    cout<<"Squre Root ="<<ans;
    return 0;

}

int sqroot(int n)
{
    int start=0;
    int end=n;
    int ans=0;

    while(start<=end)
    {
        int mid=start+(end-start)/2;

        if(mid*mid == n)
        {
            return mid;
        }
        if(mid*mid > n)
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