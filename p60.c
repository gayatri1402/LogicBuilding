#include<stdio.h>


int CountEvenDigit(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
  
    if(iNo < 0)
    {
        iNo = -iNo;

    }
    while(iNo != 0)
    {
     
    
        iDigit = iNo % 10;
         if((iNo%2)==0)
         {  
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;

}



int main()
{
    int iValue1 = 0;
    int iRet = 0;
    

    printf("Enter number: \n");
    scanf("%d", &iValue1);

    

    iRet = CountEvenDigit(iValue1);

   
    printf("fequency of %d is %d ",iValue1, iRet);

    
    return 0;
}