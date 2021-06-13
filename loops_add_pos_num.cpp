#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"enter value whoe sum is to be shown\t";
    cin>>n;
    while(n>0)
    {
        sum=sum+n; 
        cout<<"sum"<<sum<<endl;
        cout<<"enter the number\t";
        cin>>n;
    }
}
