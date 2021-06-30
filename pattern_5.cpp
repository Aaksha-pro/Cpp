#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"enter value of n:\t";
    cin>>n;
    int count=1;
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<count<<"\t";
            count++;
        }
        cout<<endl;
    }
}