#include<iostream>
using namespace std;
int main()
{
    int n,i,r;
    cout<<"enter the multi table No";
    cin>>n;
    cout<<"\nmultiplication table no::"<<n<<endl;
    for(i=1;i<=10;i++)
    {
       r=n*i;
     cout<<n<<"x"<<i<<"::"<<r<<endl;
    }
}