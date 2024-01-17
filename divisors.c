#include <stdio.h>
void main()
{
    int num, i, temp;
    printf("enter the number :");
    scanf("%d", &num);
    printf("the divisors of %d is :\n", num);
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            temp = i;
            printf("%d\n", temp);
        }
    }
}