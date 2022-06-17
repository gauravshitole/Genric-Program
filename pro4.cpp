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
    
float brr[]={10.0,3.7,9.8,8.7};

float fMax = Max(brr,4);

printf("%f\n",fMax);

    
int arr[]={10,20,30,40,50};

int iMax = Max(arr,5);

printf("%d\n",iMax);

 
    return 0;
}