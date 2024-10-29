#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    clock_t start, end;
    start = clock();

    getchar();


    end = clock();
    printf("\n\n  %f seg.\n", ((double) (end - start)) / CLOCKS_PER_SEC);
    return 0;
}