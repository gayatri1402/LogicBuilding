#include<stdio.h>
#include<stdbool.h>

int CalculatePower(int iBase, int iPower)
{
    int iCnt = 0;
    int iResult =1;

    for(iCnt = 1;iCnt<= iPower; iCnt++)
    {
        iResult = iResult * iBase;
    }
    return iResult;
}


int main()
{
    int iValue1 = 0, iValue2 = 0;
    int bRet= 0;

    printf("Enter base: \n");
    scanf("%d", &iValue1);

    printf("Enter power: \n");
    scanf("%d", &iValue2);


    bRet = CalculatePower(iValue1,iValue2);
    printf("the power of %d is", bRet);

    
    return 0;
}