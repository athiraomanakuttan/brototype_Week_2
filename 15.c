#include<stdio.h>
#include<stdlib.h>
void getArray(int a[],int size);
displayArray(int a[], int size);
void main()
{
    int size;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int a[size];
    getArray(a,size);
    displayArray(a,size);
}
void getArray(int a[], int size)
{
    printf("Enter the array elements\n");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }
}
displayArray(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",a[i]);
    }
}