#include<iostream>
using namespace std;
int main()
{
    int r,i,c,j;
    cout<<"enter no. of rows:\t";
    cin>>r;
    cout<<"enter no. of columns:\t";
    cin>>c;
    for (i=1;i<=r;i++)
    {
        cout<<endl;
        for (j=1;j<=c;j++)
        {
            if (i==1 || i==r )
            {
                cout<<"*";
            }
            else if (j==1 || j==c)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            
        }
        
    }
}