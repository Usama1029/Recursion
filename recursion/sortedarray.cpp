#include<iostream>
using namespace std;
bool sorted(int arr[] , int n)
{
    if(n == 1)
    {
        return true;
    }
    bool check = sorted(arr+1,n-1);
    return (arr[0]<arr[1]&& check);
}
main()
{
    int arr[] = {1,2,3,4,2};
     bool check = sorted(arr,5);
    
    cout<<"total sum is "<<check;
}
