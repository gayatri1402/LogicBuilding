#include<stdio.h>
void Display(int iNo)
{
    int icnt=0;
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

