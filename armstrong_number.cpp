#include<iostream>
using namespace std;

int main()
{
    int count=0;
    for(int i=100;i<=999&&count<3;i++)
    {
        int x=i;
        int sum=0;
        while(x>0)
        {
            int t=x%10;
            sum+=t*t*t;
            x/=10;
        }
        if(sum==i)
        {
            cout<<i<<endl;
            count++;
        }
    }
    return 0;
}