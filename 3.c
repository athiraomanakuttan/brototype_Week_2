#include <stdio.h>
#include <stdlib.h>
float CalculateSimpleInterest(int P, float R, float n);
void main()
{
    int P ;
    float R,n,SI;
    printf("How much is your principal amount\n");
    scanf("%d",&P);
    printf("Your Interest rate\n");
    scanf("%f",&R);
    printf("Number of years\n");
    scanf("%f", &n);
    SI = CalculateSimpleInterest(P,R,n);
    printf(" Your  simple interest is %f \n",SI);
}
float CalculateSimpleInterest(int P, float R, float n)
{
    float SI;
    SI=(P*R*n)/100;

    return SI;

    
}