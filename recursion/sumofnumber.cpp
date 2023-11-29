#include<iostream>
using namespace std;
int sum(int n)
{
    if(n == 0)
    {
        return 0;
    }
    int presum = sum(n-1);
    return  n+presum;
    
}
main()
{
    int n;
    cout<<"enter number ";
    cin>>n;
    int sum2 = sum(n);
    cout<<"total sum is "<<sum2;
}
