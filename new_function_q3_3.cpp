#include<iostream>
using namespace std;
int hexa(int n)
{
    int r,i=1,dn=0;
    while (n!=0)
    {
        r = n%10;
        n = n/10;
        dn = dn +r*i;
        i = i*16;
    }
    return dn;
}
int main()
{
    int a;
    cout<<"enter any hexadecimal number:-\t";
    cin>>a;
    cout<<hexa(a);
}