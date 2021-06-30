#include<iostream>
using namespace std;
int oct(int n)
{
    int i=1,dn=0,r;
    while (n!=0)
    {
        r = n%10;
        n = n/10;
        dn = dn + r*i;
        i = i*8;
    }
    return dn;
}
int main()
{
    int a;
    cout<<"enter any octal sequence:-\t";
    cin>>a;
    cout<<oct(a);
}