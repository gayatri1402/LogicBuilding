#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(int iNo)
{
   
    int iDigit =0;

   while(iNo!=0)
    {
       iDigit = iNo % 10;
       if(iDigit == 8)
       {
        break;
       }
       iNo = iNo/10;
}
if(iDigit == 8)
{
    return true;
}
else
{
    return false;
}
}



int main()
{
    int iValue = 0;
    int bRet= 0;

    printf("Enter base: \n");
    scanf("%d", &iValue);

    

    CheckDigit(iValue);
    printf("the digit is %d is present", bRet);

    
    return 0;
}