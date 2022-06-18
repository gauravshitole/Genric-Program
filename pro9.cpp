#include<iostream>
using namespace std;
template<class T>
int Serarch(T *arr,int iSize,T iNo)
{
     
    int i=0;
    for(i=iSize;i>=0;i--)
    {
        if(arr[i]==iNo)
        {
           break ;
        }
    }
    return i;
}


int main()
{

    int arr[]={10,20,30,10,30,40,10,40,10};
    int iRet=  Serarch<int>(arr,9,40);
    printf("%d\n",iRet);
 

    
    

    return 0;
}