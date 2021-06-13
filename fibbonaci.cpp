#include<iostream>
using namespace std;
int main()
{
    int n,i,a=0,b=1,c=0;
    cout<<"enter number:-";
    cin>>n;
    for (i=1;i<=n;i++)
    {
        if (i==1)
        {
            cout<<a<<" ";
            continue;
        }
        else if (i==2)
        {
            cout<<b<<" ";
            continue; 
        }
        else
        {
            c=a+b;
            a=b;
            b=c;
        }
        cout<<c<<" ";
    }
    return 0;
}