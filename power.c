#include <stdio.h>
void main()
{
    int base, expo, power = 1;
    printf("enter the base :");
    scanf("%d", &base);
    printf("enter the exponential :");
    scanf("%d", &expo);
    while (expo != 0)
    {
        power = power * base;
        expo--;
    }
    printf("power is : %d", power);
}