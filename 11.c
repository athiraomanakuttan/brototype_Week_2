#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n,count=0;
    printf("Enter the array lmit\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elents\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i]%2==0)
        {
            count+=1;
        }
    }
    printf("%d - numbers are even in this array", count);
    
}