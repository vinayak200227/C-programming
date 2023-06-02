// 2. Write a function to calculate simple interest. (TSRS)
#include <stdio.h>
float simpleInterest(float P,float R,float T)
{
    return (P*R*T)/100;
}
int main()
{
    float p,r,t;
    printf("Enter principle amount:\n");
    scanf("%f", &p);
    printf("Enter rate\n");
    scanf("%f",&r);
    printf("Enter time in year:\n");
    scanf("%f",&t);
    printf("Simple interest is %.2f",simpleInterest(p,r,t));
    return 0;
}
