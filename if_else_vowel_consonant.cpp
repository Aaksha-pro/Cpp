#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter any alphabet\n";
    cin>>ch;
    
    if (ch=='A' or ch=='E' or ch=='I' or ch=='O' or ch=='U')
    {
        cout<<"vowel";
    }
    else if (ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u')
    {
        cout<<"vowel";
    }
    else
    {
        cout<<"consonant";
    }
}   