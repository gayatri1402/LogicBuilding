#include<stdio.h>
void Display(int iNo)
{
    int icnt=0;
    if(iNo<0)  //filter for negative input
    {
        printf("Error : Invalid input.\n");
        printf("Note: Please enter positive number\n");
        return;
    }

    for(icnt=1;icnt<=iNo;icnt++)
    {
        printf("%d\n",icnt);
    }


}
int main()
{
    int iValue=0;
    printf("Enter the frequency:\n");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}

