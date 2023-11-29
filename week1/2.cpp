#include<iostream>
using namespace std;
main()
{
    
    int size;
    int index;
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
        for(int j = i+1;j<= i+1;j++)
        {
            if(array[j]> array[j-1] && array[j]> array[j+1])
            {
                index = j;
            }
        }
    }
    cout<<"index is"<<index;
    
}