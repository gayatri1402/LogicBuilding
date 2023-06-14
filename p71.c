#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iSize = 0;
    int *ptr = NULL;

    printf("Enter the number of element :\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }
    printf("memory allocate successfully..");

    return 0;
}