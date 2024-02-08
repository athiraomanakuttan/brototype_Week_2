#include <stdio.h>
#include <stdlib.h>
void getArrayElements(int a[], int size);
void main()
{
    int size;
    printf("Enter the size of the array\n");
    scanf("%d", &size);
    int a[size][size], b[size][size], c[size][size];
    printf("Enter the first array elemets\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the Second array elemets\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("Added array is \n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}
