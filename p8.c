//write a program which accept the marls and display the class accordingly
// 0 to 34
//35 to 49
// 50 to 59

#include<stdio.h>   //for print and scanf
void DisplayClass(float fMarks)
{
if((fMarks<0.0f)||(fMarks>100.00f)) 
{ 
printf("Please enter the marks in between the range 0 to 100");
return;
}

    if((fMarks>=0.0f)&&(fMarks<35.00))
    {
        printf("You are fail");
    }
    else if((fMarks>35.00f)&&(fMarks<50.00))
    {
        printf("You got pass class\n");
    }
    else if((fMarks>=50.00f)&&(fMarks<60.00f))
    {
        printf("you got second class\n");
    }
    else if((fMarks>=60.00f)&&(fMarks<=75.00f))
    {
        printf("you got first class");

    }
    else if((fMarks>=75.00)&&(fMarks<=100))
    {
        printf("you got first class with distiction\n");
    }


}
int main()
{
    float fValue = 0.0f;

    printf("Please enter youe percentage\n");
    scanf("%f",&fValue);

    DisplayClass(fValue);
    
    return 0;
}






/*Logical operator
Logical AND &&
Logical OR ||

*/