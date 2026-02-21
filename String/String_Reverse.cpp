#include<iostream>
using namespace std;

//For reversing a string you need to find its lenght first

int str_Lenght(char name[])
{
    int count =0;
    for(int i=0; name[i] != '\0'; i++)
    {
        count++;
    }

    return count;
}


// Reversing String

int str_Reverse(char name[],int n)
{
    int start=0;
    int end=n-1;

    while(start<end)
    {
        swap(name[start],name[end]);
        start++;
        end--;
    }
}

int main()
{
    char name[10];

    cout<<"Enter the name :";
    cin>>name;

    cout<<"IS your name :";
    cout<<name<<endl;

    int len= str_Lenght( name );

    cout<<"Length of String :"<<len<<endl;

    str_Reverse(name,len);
    cout<<"The reverse String :";
    cout<<name<<endl;

    return 0;

}