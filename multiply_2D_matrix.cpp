#include<iostream.
using namespace std;
int main()
{
    int n1,m1,n2;
    cin>>n1>>m1;
    int arr1[n1][m1];
    int arr2[m1][n2];
    int ans[n1][n2];
    cout<<"enter matrix 1"<<endl;
    for(int i=0;i<n1;i++)
    {
        for ( int j=0;j<m1;j++)
        {
            cin>>[i][j];
        }
    }
    cout<<"enter matrix 2"<<endl;
    cin>>n2;
    for (int i=0;i<m1;i++)
    {
        for (int j=0;j<n2;j++)
        {
            cin>>[i][j];
        }
    }
    for (int i=0;i<n1;i++)
    {
        for (int j=0;j<n2;j++)
        {
            for (int k=0;k<n3;k++)
            {
                ans[i][j] = arr1[i][j] * arr2[j][k];
            }
        }
    }
    for (int i=0;i<n1;i++)
    {
        for (int j=0;j<n3;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}