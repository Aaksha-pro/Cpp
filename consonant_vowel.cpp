#include<iostream>
using namespace std;
int main()
{
    char s;
    cout<<"enter any alphabet:\t";
    cin>>s;
    if (s=='a' || s=='A' || s=='e' || s=='E' || s=='i' || s=='I' || s=='O' || s=='o' || s=='u' || s=='U')
    {
        cout<<s<<" is vowel";
    }
    else
    {
        cout<<s<<" is a consonant";
    }
}