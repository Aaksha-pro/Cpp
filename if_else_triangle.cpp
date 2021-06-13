#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter lenght of sides of traingle\n";
    cin>>a>>b>>c;
    if (a==b and b==c)
    {
        cout<<"equilateral\n";
    }
    else if (a==b or a==c or b==c)
    {
        cout<<"isosceles\n";
    }
    else
    {
        cout<<"scalene\n";
    }
    
}