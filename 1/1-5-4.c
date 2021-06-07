#include <stdio.h>

/* подсчет слов */

#define IN 1 /* внутри слова */
#define OUT 0 /* вне слова */
/*
int main(void)
{
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }
    printf ("%d %d %d\n", nl, nw, nc);
}
*/

/* одно слово на каждой строке */

int main(void)
{
    int c, pos;
    pos = OUT;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (pos == IN)
                putchar ('\n');
            pos = OUT;
        }
        else if (pos == OUT) {
            pos = IN;
        }
        if (pos == IN)
            putchar (c);
    }
}




















