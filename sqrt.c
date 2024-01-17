#include <stdio.h>
int floorsqrt(int num)
{
    if (num == 0 || num == 1)
    {
        return num;
    }
    int i = 1, result = 1;
    while (result <= num)
    {
        i++;
        result = i * i;
    }
    return i - 1;
}
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d", &num);
    printf("the sqrt of %d is : %d", num, floorsqrt(num));
    return 0;
}