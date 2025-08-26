#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the array elements";
    cin>>n;
    int i,sum=0;
   int arr[n];
        for(i=0;i<n;i++)
        {
               cin>>arr[i];
        }

    for(i=0;i<n;i++)
    {
       
        sum+=arr[i];
     
    }
       cout<<"sum::"<<sum<<endl;
       double avrg=sum/n;
       cout<<"average::"<<avrg;
}