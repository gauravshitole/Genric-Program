#include<iostream>
using  namespace std;
template<class T>
T Min(T *arr,int iSize)
{
    
    T Min=arr[0];
    int i=0;
    for(i=0;i<iSize;i++)
    {
     if(arr[i]<Min)
     {
         Min=arr[i];
     }  
    
    }
     return Min; 
}
int main()
{
    
float brr[]={10.0,3.7,9.8,8.7};

float fMin = Min(brr,4);

printf("%f\n",fMin);

    
int arr[]={10,20,30,40,50};

int iMin = Min(arr,5);

printf("%d\n",iMin);

 
    return 0;
}