#include<iostream>
using  namespace std;
template<class T>
T Max(T *arr,int iSize)
{
    
    T Max=arr[0];
    int i=0;
    for(i=0;i<iSize;i++)
    {
     if(arr[i]>Max)
     {
         Max=arr[i];
     }  
    
    }
     return Max; 
}
int main()
{
    //int iret=0;
int arr[]={11,21,75,55,21};

int iMax = Max(arr,5);

printf("%d",iMax);

    return 0;
}