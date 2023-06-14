#include<stdio.h>


int CheckDigit(int iNo)
{
int iCnt = 0;
int iDigit = 0;
if(iNo<0)
{
    iNo = -iNo;
}

while(iNo!= 0)
{
    iDigit = iNo % 10;
    if(iDigit == 8)
    {
        iCnt ++;
    }
    iNo = iNo /10;

}
return iCnt;
}




int main()
{
    int iValue = 0;
    int bRet= 0;

    printf("Enter base: \n");
    scanf("%d", &iValue);

    

    bRet = CheckDigit(iValue);
   
    printf("count %d is ",bRet);
    
    return 0;
}