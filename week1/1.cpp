#include<iostream>
using namespace std;
main()
{
    
    int size;
   
    int max = 0;
    int max2 = 0;
    cout<<"enter size of array "<<endl;
    cin>>size;
     int array[size];
    for(int i = 0;i<size;i++)
    {
        cout<<"enter number :"<<endl;
        cin>>array[i];
    }
    for(int i = 0;i<size;i++)
    {
        if(array[i] > max)
        {
           
            max2 = max;
            max = array[i];
        }
       // else if(array[i] > )
    }
    int sum = 0;
    sum = (max-1)*(max2-1);
    cout<<"largest sum is "<<sum;

}