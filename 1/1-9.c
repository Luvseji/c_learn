
#include <stdio.h>

#define MAXLINE 10

int get_line(char linef[], int maxline);
void copy(char to[], char fromf[]);

// печать самой длинной строки
int main(void)
{
    int len;
    int max;
    int c;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = get_line(line, MAXLINE)) > 0)
    {
        if (line[len - 1] != '\n')
        {
            while ((c = getchar()) != '\n' && c != EOF)
                ++len;
        }
        if (len > max) {
            max = len + 1;
            copy(longest, line);
        }
    }
    if (max > 0) // была ли хоть одна строка?
    {
        if (max > MAXLINE)
            printf("%s...\nДлина строки: %d\n", longest, max);
        else
            printf("%s\nДлина строки: %d\n",longest, max);
    }

    return 0;
}

// getline: читает строку в s, возвращает длину
int get_line(char s[], int lim)
{
    int c;
    int i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';

    return i;
}

// copy: копирует из 'from' в 'to'; to достаточно большой
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
