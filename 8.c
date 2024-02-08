#include<stdio.h>
#include<stdlib.h>
void main()
{
    int number,sum=0;
    printf("Enter a number\n");
    scanf("%d",&number);
    for(int i=1; i<=number; i+=2)
    {
        sum+=i;
    }
    printf("The sum of odd numbers is %d",sum);
}