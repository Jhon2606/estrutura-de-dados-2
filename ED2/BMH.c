#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXCHAR 256

int BMH(char *T, char *P)
{
    int i, j, k;
    int n = strlen(T);
    int m = strlen(P);
    int d[MAXCHAR];

    //pré-processamento
    printf("d[j]:\n");
    for (j=0; j<MAXCHAR; j++) {
        d[j] = m;
        printf("%d ",d[j]);
    }printf("\nd[P[j-1]]\n");
    for (j=1; j<m; j++) {
        d[P[j-1]] = m-j;
        printf("%d ",d[P[j-1]]);
    }printf("\n\n");
    i = m;
    //busca
    while (i <= n) {
        k = i;
        j = m;
        while (T[k-1] == P[j-1] && j > 0) {
            k--;
            j--;
        }
        if (j == 0)
            return k+1;
        i += d[T[i - 1]];
    }
    return -1;
}

int BMHCont(char *T, char *P)
{
    int i, j, k, ocorr = 0;
    int n = strlen(T);
    int m = strlen(P);
    int d[MAXCHAR];

    //pré-processamento
    for (j=0; j<MAXCHAR; j++) {
        d[j] = m;
    }
    for (j=1; j<m; j++) {
        d[P[j-1]] = m-j;
    }
    i = m;
    //busca
    while (i <= n) {
        k = i;
        j = m;
        while (T[k-1] == P[j-1] && j > 0) {
            k--;
            j--;
        }
        if (j == 0)
            ocorr++;
        i += d[T[i - 1]];
    }
    return ocorr;
}

int BMH_contador(char *T, char *P)
{
    int i, j, k;
    int n = strlen(T);
    int m = strlen(P);
    int d[MAXCHAR];
    int contador = 0;
    // Pré-processamento
    for (j = 0; j < MAXCHAR; j++) {
        d[j] = m;
    }
    for (j = 1; j < m; j++) {
        d[P[j-1]] = m - j;
    }
    i = m;
    // Busca
    while (i <= n) {
        k = i;
        j = m;
        while (j > 0) {
            contador++;
            if (T[k - 1] != P[j - 1]) {
                break;
            }
            k--;
            j--;
        }
        if (j == 0)
            return contador;
        i += d[T[i - 1]];
    }
    return contador;
}


int main()
{
    char texto[] = "aabcacbacbacac";
	char padrao[] = "cacbac";

    int comp;

    comp = BMH_contador(texto, padrao);
    printf("Numero de comparações %d \n", comp);
    return 0;
}