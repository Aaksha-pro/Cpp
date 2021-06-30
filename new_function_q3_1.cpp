#include<iostream>
using namespace std;
int deci(int n)
{
    int i=1,dn=0,r;
    while (n!=0)
    {
        r = n%10;
        n = n/10;
        dn = dn + (r*i);
        i = i*2;
    }
    return dn;
}
int main()
{
    int a;
    cout<<"enter any binary sequence:-\t";
    cin>>a;
    cout<<deci(a);
}