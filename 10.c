#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    int a[n], b[n], temp;
    printf("enter the first array elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the Second array elements\n");
    for (int j = 0; j < n; j++)
    {
        scanf("%d", &b[j]);
    }

    for (int k = 0; k < n; k++)
    {
        temp = a[k];
        a[k] = b[k];
        b[k] = temp;
    }
    printf("first array : ");
    for(int m=0; m<n; m++)
    {
        printf("%d ,",a[m]);
    }
    printf("Second array : ");
    for (int p = 0; p < n; p++)
    {
        printf("%d ,", b[p]);
    }
}
