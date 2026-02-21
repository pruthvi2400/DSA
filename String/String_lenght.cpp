#include<iostream>
using namespace std;

int Str_lenght(char name[])
{
    int count=0;

    for(int i=0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{

    char name[20];

    cout<<"Enter Your Name :";
    cin>>name;

    cout<<"Is your name pruthvi :";
    cout<<name<<endl;

    cout<<"Lenght of a string is :"<<Str_lenght(name)<<endl;

}