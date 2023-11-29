#include<iostream>
#include<cmath>
using namespace std;
int power(int n,int p)
{
    if(p == 0)
    {
        return 1;
    }
    int presum = power(n,p-1);
    return n*presum;
    
}
main()
{
    int n;
    cout<<"enter number ";
    cin>>n;
    int p;
    cin>>p;
    int sum3 = pow(n,p);
    int sum2 = power(n,p);
    cout<<"total : "<<sum3<<endl;
    cout<<"total sum is "<<sum2;
}
