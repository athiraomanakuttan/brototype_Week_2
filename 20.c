#include<stdio.h>
#include<stdlib.h>
void main()
{
    int limit,num=1;
    printf("Enter the limit\n");
    scanf("%d",&limit);
    for(int i=1; i<=limit; i++)
    {
        for(int j=1; j<=i; j++)
        {
            
            printf("%d\t",num);
            num++;
        }
        printf("\n");
    }
}