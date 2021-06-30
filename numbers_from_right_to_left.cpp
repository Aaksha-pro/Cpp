#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n:-";
    cin>>n;
    while (n>0)
    {
        int rem= n%10;
        n=n/10;
        cout<<rem;
    }
}