#include<iostream>
using namespace std;
bool pytha(int n1, int n2, int n3)
{
    if ((n1*n1)+(n2*n2)==(n3*n3))
    {
        return true;
    }
    return false;
}
int main()
{
    int a,b,c;
    cout<<"enter 3 numbers:\t";
    cin>>a>>b>>c;
    if (pytha(a,b,c))
    {
        cout<<a<<" "<<b<<" "<<c<<" is pythagorean triplet.";
    }
    else
    {
        cout<<"not a pythagorean triplet.";
    }
}