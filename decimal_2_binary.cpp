#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    int r,dn=0,i=1;
    cout<<"enter binary:\t";
    cin>>n;
    while (n!=0)
    {
        r=n%10;
        n/=10;
        dn += r*i;
        i=i*2;
    }
    cout<<dn;
}