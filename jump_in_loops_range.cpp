#include<iostream>
using namespace std;
int main()
{
    int n1,i,n2,n;
    cout<<"enter lower limit\t";
    cin>>n1;
    cout<<"enter upper limit\t";
    cin>>n2;
    for (n=n1;n<n2+1;n++)
    {
        for (i=2;i<n;i++)
        {
            if (n%i==0)
            {
                break;
            }
        }
        if (i==n)
            {
                cout<<i<<endl;

            }
    }
}