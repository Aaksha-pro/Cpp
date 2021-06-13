#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter number\t";
    cin>>n;
    for (i=0;i<n+1;i++)
    {
        if (i%2==0)
        {
            continue;;
        }
        cout<<i<<endl;
    }
}