#include<iostream>
using namespace std;
template<class T>
int FrequencyX(T *arr,int iSize,T iNo)
{
    int iFreq=0;
    int i=0;
    for(i=0;i<iSize;i++)
    {
        if(arr[i]==iNo)
        {
            iFreq++;
        }
    }
    return iFreq;
}


int main()
{

    int arr[]={10,20,30,10,30,40,10,40,10};
    int iRet=FrequencyX<int>(arr,9,10);
    printf("%d\n",iRet);

    float brr[]={10.1,1.1,20.4,30.6,10.1,10.1,};
    float fRet=FrequencyX<float>(brr,6,10.1);
    printf("%f\n",fRet);

    
    

    return 0;
}