#include<iostream>
using namespace std;
int sum(int n)
{
    int s=0;
    for (int i=0;i<=n;i++)
    {
        s=s+i;
    }
    cout<<s;
    return s;
}
int main()
{
    int a;
    cin>>a;
    sum(a);
}