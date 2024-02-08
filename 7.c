#include<stdio.h>
#include<stdlib.h>
void main()
{
    int number;
    printf("Please enter the number\n");
    scanf("%d",&number);
    for(int i=1; i<=10; i++)
    {

        printf("%d X %d = %d\n",i,number,i*number);
    }
}