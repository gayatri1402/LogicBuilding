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


bool CheckEvenOdd(int iNo)
{
    if((iNo % 2)== 0)
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

    printf(" please enter number to check whether it is even or odd");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);    //function call

    if(bRet==true)
    {
        printf("%d is Even number\n",iValue);
    }
    else{
        printf("%d is odd number\n",iValue);
    }
    return 0;
}