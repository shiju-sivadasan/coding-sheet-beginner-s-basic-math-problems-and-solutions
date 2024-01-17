#include <stdio.h>
void main()
{
    int num;
    printf("enter the number:");
    scanf("%d", &num);
    int i, factor, sum = 0;
    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            factor = i;
            sum = sum + factor;
        }
    }
    if (sum == num)
    {
        printf("%d is a perfect number :", num);
    }
    else
    {
        printf("%d is not a perfect number :", num);
    }
}