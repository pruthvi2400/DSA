#include<iostream>
using namespace std ;

char MaximumOccernce(string s);

int main()
{
    string s;
    cout<<"Enter the String :";
    cin>>s;

    cout<<"The Maximun Occerance String :"<< MaximumOccernce(s)<<endl;

    return 0;
}

char MaximumOccernce(string s)
{
    int arr[26]={0};

    for(int i=0;i<s.length();i++)
    {
        char ch = s[i];
        int number=0;

        // lowercase
        if( ch >= 'a' && ch <='z')
        {
            number = ch - 'a';
        }
        else // Uppercase
        {
            number = ch - 'A';
        }

        arr[number]++;
    }

    int maxi = -1 , ans = 0;
    for(int i=0;i<26;i++)
    {
        if(maxi < arr[i])
        {
            ans=i;
            maxi = arr[i];
        }
    }

    return 'a' + ans;
}