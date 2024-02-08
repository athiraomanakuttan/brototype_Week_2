#include <stdio.h>
#include <stdlib.h>
void checkPassorFail(float mark);
void main()
{
    float mark;
    printf("Enter your mark\n");
    scanf("%f", &mark);
    checkPassorFail(mark);
}
void checkPassorFail(float mark)
{
    if (mark >= 50)
    {
        printf("You are passed the exam\n");
    }
    else
    {
        printf("You are failed in exam\n");
    }
}