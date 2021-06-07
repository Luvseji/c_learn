#include <stdio.h>

/* подсчет вводимых символов; 1-ая версия */
/*
int main()
{
    long nc;
    nc = 0;
    while (getchar() != EOF)
        nc += 1;
    putchar (nc);
}*/

/* подсчет вводимых символов; 2-ая версия */

int main()
{
    double nc;
    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf ("%.0f\n", nc);
}
