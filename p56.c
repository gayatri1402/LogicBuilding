#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(int iNo)
{
   
    int iDigit =0;
    bool bFlag = false;

   while(iNo!=0)
    {
       iDigit = iNo % 10;
       if(iDigit == 8)
       {
        bFlag = false;
        break;
       }
       iNo = iNo/10;
}
return bFlag;

}



int main()
{
    int iValue = 0;
    int bRet= 0;

    printf("Enter base: \n");
    scanf("%d", &iValue);

    

    bRet = CheckDigit(iValue);
    if(bRet == true)
    {
    printf("the digit is %d is present",iRet);
    }
    
    return 0;
}