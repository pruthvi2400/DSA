#include<iostream>
using namespace std;

// Conveting char to lower case

int tolowercase(char ch)
{
    if(ch>='a' && ch<='z')
        return ch;
    else{
        char temp = ch - 'A'+'a';
        return temp;
    }

}

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

int str_Palindrom(char name[],int n)
{
    bool isPalindrom=true;

    for(int i=0;i<n/2;i++)
    {
        if(tolowercase(name[i]) != tolowercase(name[n-1-i]))
        {
            isPalindrom=false;
            break;
        }
        
    }

    if(isPalindrom)
    {
        cout<<"The string is Palindrom ";
    }else{
        cout<<"The string is NOT Palindrom";
    }

}

int main()
{
    char name[10];

    cout<<"Enter the String :";
    cin>>name;

    cout<<"IS your Sting :";
    cout<<name<<endl;

    int len= str_Lenght( name );

    cout<<"Length of String :"<<len<<endl;

    str_Palindrom(name,len);
    return 0;

}