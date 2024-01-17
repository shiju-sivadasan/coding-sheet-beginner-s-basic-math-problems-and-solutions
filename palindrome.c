#include <stdio.h>
void main()
{
    int num, rev = 0, temp, rem, check = 0;
    printf("enter the number :");
    scanf("%d", &num);
    check += num;
    while (num > 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    if (rev == check)
    {
        printf("%d is palindrome:", check);
    }
    else
    {
        printf("%d is not a palindrome :", check);
    }
}