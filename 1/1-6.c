#include <stdio.h>

/* подсчет цифр, симв-разделителей и прочих символов */
/*
int main(void)
{
    int c, i, nwhite, nother;
    int ndigit[10];
    nwhite = nother = 0;
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;
    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9')
            ++ndigit[c - '0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;
    }
    printf ("Цифры =");
    for (i = 0; i <= 9; ++i)
        printf (" %d", ndigit[i]);
    printf ("\nСимволы-разделители = %d, прочие = %d\n", nwhite, nother);
}
*/

/* 1.13 */

int main(void)
{
    int c, i, j, n = 0;
/*    
    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            n = c - '0';
            for (i = 0; i <= n - 1; ++i)
                putchar ('-');
            putchar ('\n');
        }
    }
*/
    int ndigit[10];
    for (i = 0; i <= 9; ++i)
        ndigit[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            ++ndigit[c - '0'];    
        }
    }
    
    int max_el = ndigit[0];
    for (i = 0; i <= 9; ++i) {
        if (max_el < ndigit[i])
            max_el = ndigit[i];
    }
    
    for (i = 0; i <= max_el; ++i) {
        for (j = 0; j <= 9; ++j) {   
            if (i == 0 && j == 0) {
                for (int k = 0; k <= 9; ++k)
                    printf ("%d(%d) ", k, ndigit[k]);
                printf ("%d\n", max_el);
            }
            if (i < ndigit[j]) {
                printf ("|    ");
            }
            else
                printf ("     ");
        }
        putchar ('\n');
    }
}
