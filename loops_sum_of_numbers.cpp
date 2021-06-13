#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,i;
    cout<<"enter value till where sum is to be taken";
    cin>>n;
    for (i=0;i<n+1;i++)
    {
        sum=sum+i;
    }
    cout<<sum;
}