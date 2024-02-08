#include<stdio.h>
#include<stdlib.h>
void main()
{
    int size,index=0;
    printf("Enter the array limit\n");
    scanf("%d",&size);
    int a[size],b[size];
    printf("Enter the array elemets\n");
    for(int i=0; i<size; i++)
        scanf("%d",&a[i]);
    for(int i=0; i<size-1; i++)
    {
        b[index]=a[i]*a[i+1];
        index++;
    }
    printf("The new array is \n");
    for(int i=0; i<index; i++)
    {
        printf("%d\t",b[i]);
    }
}