
#include <stdio.h>
/*
int power(int m, int n);

// текст функции power
int main(void)
{
    int i;

    for (i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, power(2, i), power(-3, i));
    return 0;
}

int power(int base, int n)
{
    int i;
    int p;

    p = 1;
    for (i = 1; i <= n; ++i)
        p *= base;
    return p;
}
*/

/* 1.15 */

float celc(int fahr);

int main(void)
{
    int temp;

    printf("Введите температуру в фаренгейтах: ");
    scanf("%d", &temp);
    printf("В цельсиях: %.1f", celc(temp));
    
    return 0;
}

float celc(int fahr)
{
    return (5.0 / 9.0) * (fahr - 32);
}
