//write a program number even or odd
#include<stdio.h>   //for print and scanf
#include<stdbool.h> //for bool data type

///////////////////////////////////////////
// /////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckEvenOdd
//  Input :         Integer
//  Output :        Boolean
//  Description :   Check Whether input is even or odd
//  Author :        Gayatri Ajabsing Jadhav
//  Date :          20/04/2023
//
/////////////////////////////////////////////////////////////////////////////////


bool CheckDivisible(int iNo)
{
    if(((iNo % 3)== 0) && ((iNo % 5)==0))
    {
        return true;

    }
    else
    {
        return false;

    }

}
/////////////////////////////////////
//Entry point function
//////////////////////////////////////
int main()
{
    int iValue = 0;     // variable accept input
    bool bRet = false;  //accept return value

    printf(" divisible by 3 and 5");
    scanf("%d",&iValue);

    bRet = CheckDivisible(iValue);    //function call

    if(bRet==true)
    {
        printf("%d is divisible by 5 and 3\n",iValue);
    }
    else{
        printf("%d not divisible by 3 and 5\n",iValue);
    }
    return 0;
}






/*Logical operator
Logical AND &&
Logical OR ||

*/