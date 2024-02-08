#include <stdio.h>
#include <stdlib.h>
void main()
{
    int size,temp;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int a[size];
    printf("Enter the array elemnts\n");
    for(int i=0; i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int j=0; j<size-1; j++)
    {
        for(int k=j+1; k<size;k++)
        {
            if(a[j]<a[k])
            {
                temp=a[j];
                a[j]=a[k];
                a[k]=temp;
            }
        }
    }
    printf("The sorted array is \n");
    for(int m=0; m<size;m++)
    {
        printf("%d\t",a[m]);
    }
}