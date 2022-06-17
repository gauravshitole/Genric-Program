#include<iostream>
using namespace std;

template<class T>

T AddN(T *acc,int iSize)
{
    T Sum;
    int i=0;
    for(i=0;i<iSize;i++)
    {
         Sum=acc[i]+Sum;
    }
    return Sum;
}
int main ()
{
float brr[]={10.0,3.7,9.8,9.7};
float fSum=AddN(brr,4);
printf("Ans in Float:%f\n",fSum);

int arr[]={10,20,30,40,50};
 
int iSum=AddN(arr,5);
printf("Ans in Int :%d\n",iSum);

 
    return 0;
}