#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void DayCheck(int mark);
void main()
{
    int day;
    printf("Please enter your mark\n");
    scanf("%d", &day);
    DayCheck(day);
}
void DayCheck(int day)
{

    switch (grade)
    {

    case 9:
        printf("Grade A");
        break;
    case 8:
        printf("Grade B");
        break;
    case 7:
        printf("Grade C");
        break;
    case 6:
        printf("Grade D");
        break;
    case 5:
        printf("Grade E");
        break;
    case 4:
        printf("Sorry yu failed");
        break;
    case 3:
        printf("Sorry yu failed");
        break;
    case 2:
        printf("Sorry yu failed");
        break;
    case 1:
        printf("Sorry yu failed");
        break;
    case 0:
        printf("Sorry yu failed");
        break;
    default:
        printf("Wrong input.");
        break;
    }
}