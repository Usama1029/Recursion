#include<iostream>
using namespace std;
int fictorial(int n)
{
    if(n == 0)
    {
        return 1;
    }
    int presum = fictorial(n-1);
    return  n*presum;
    
}
main()
{
    int n;
    cout<<"enter number ";
    cin>>n;
    int sum2 = fictorial(n);
    cout<<"total sum is "<<sum2;
}
