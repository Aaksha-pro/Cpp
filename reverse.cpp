#include<iostream>
using namespace std;
int main()
{
    int n,rev=0;
    cout<<"enter n:- ";
    cin>>n;
    while (n>0)
    {
        int remainder= n%10;
        rev=10*rev +remainder;
        n=n/10;
    }
    cout<<rev;

}