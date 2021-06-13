#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"enter n:\t";
    cin>>n;
    int a[n];
    cout<<"enter array elements:\t";
    for (i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for (i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    cout<<sum;
}
