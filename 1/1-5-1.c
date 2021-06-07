#include <stdio.h>

/* копирование ввода на вывод; 1-ая версия  */
/*
int main()
{
    int c;
    c = getchar();
    while (c != EOF) {
        putchar (c);
        c = getchar();
    }
}*/

/* копирование ввода на вывод; 2-ая версия */

int main()
{
    int c;
    putchar(EOF);
    while ((c = getchar()) != EOF) {
        putchar (c);
    }
}
