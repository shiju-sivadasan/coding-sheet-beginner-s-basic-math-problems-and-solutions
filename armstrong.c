#include <stdio.h>
void main()
{
    int num, sum = 0, rem, temp;
    printf("enter the number you want to check:");
    scanf("%d", &num);
    temp = num;
    while (num > 0)
    {
        rem = num % 10;
        sum = sum + rem * rem * rem;
        num = num / 10;
    }
    if (sum == temp)
    {
        printf("%d is armstrong:", temp);
    }
    else
    {
        printf("%d is not a armstrong :", temp);
    }
}