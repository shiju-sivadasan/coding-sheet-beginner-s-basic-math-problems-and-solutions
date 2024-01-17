#include <stdio.h>
void main()
{
    int num, rem;
    printf("enter the number :");
    scanf("%d", &num);
    rem = num % 10;
    printf("the last digit of %d is : %d ", num, rem);
}