#include<iostream>
using namespace std;

int main()
{
    int arr[10]={0};
    int t=0;
    while(t!=-1)
    {
        cout<<"Enter number(Enter -1 to terminate): ";
        cin>>t;
        while(t>0)
        {
            int x=t%10;
            arr[x]++;
            t/=10;
        }
    }
    for(int i=9;i>=0;i--)
    {
        while(arr[i]>0)
        {
            cout<<i;
            arr[i]--;
        }
    }
    return 0;
}
