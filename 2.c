#include <stdio.h>
#include <stdlib.h>
float SumCalculate(int num1, float num2);
void main()
{
    int num1;
    float num2, sum;
    printf(" enter two numbers\n");
    scanf("%d %f", &num1, &num2);
    sum = SumCalculate(num1, num2);
    printf("Sum of the numbers is : %f", sum);
}
float SumCalculate(int num1, float num2)
{
    float sum;
    sum = num1 + num2;
    return sum;
}