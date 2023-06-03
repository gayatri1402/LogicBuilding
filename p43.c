#include<stdio.h>

typedef unsigned long int ULONG;

ULONG Factorial(int iNo)

{
    ULONG iFact = 1;
    int iCnt = 0;
    
    iCnt = 1;
    while(iCnt >= 1)
    {
         iFact = iFact * iCnt;
         iCnt++;
    }
   return iFact;
    
}

int main()
{
    int iValue = 0;
    ULONG iRet = 0;
    
    printf("Enter number:\n");
    scanf("%d",&iValue);
    iRet= Factorial(iValue);

    printf("Result is %d\n", iRet);

    return 0;
}