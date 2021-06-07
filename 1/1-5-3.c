#include <stdio.h>

/* подсчет строк входного потока */
/*
int main()
{
    int c, nl;
    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
    printf ("%d\n", nl);
}
*/

/* подсчет мусора */
/*
int main()
{
    int sp, c, tb, nl;
    tb = 0;
    sp = 0;
    nl = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++sp;
        if (c == '\t')
            ++tb;
        if (c == '\n')
            ++nl;
    }
    printf ("space: %d\ttabs: %d\tnew line: %d\n", sp, tb, nl);

}
*/

/* замена проблеов на пробел */
/*
int main()
{
    int c, sp;
    sp = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            putchar (c);
            while ((c = getchar()) == ' ') {
                ;
            }
        }
        putchar (c);
    }
}
*/

/* замена замен */

int main(void)
{
    int c;
    while ((c = getchar()) != EOF) {
        if (c == '\t')
            printf ("\\t");
        else if (c == '\b')
            printf ("\\b");
        else if (c == '\\')
            printf("\\\\");
        else
            putchar (c);
    }
}
