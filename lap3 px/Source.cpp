#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int num, loop, sum = 0;
    scanf("%d", &num);
    for (loop = 1; loop < num; loop++)
    {
        if (num % loop == 0)
        {
            sum = sum + loop;
        }
    }
    printf("%d", sum);
    return 0;
}
