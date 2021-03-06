#include <stdio.h>

/* печать таблицы температур по Фаренгейту и Цельсию для
fahr = 0, 20 ... 300; вариант с плавающей точкой */

#define LOWER 0
#define UPPER 300 /* верхняя граница */
#define STEP 20

int main()
{
    int fahr;
    
    for (fahr = UPPER; fahr >= LOWER; fahr -= STEP){
        printf ("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
}
