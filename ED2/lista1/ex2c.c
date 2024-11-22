#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXCHAR 256

int BMH(const char* T, const char* P, int *cont);

int main(){
    const char* T = "ABCDABDABDABCDABCDABC";
    const char* P = "ABCDABC";
    int cont = 0;
    int ocorr = BMH(T, P, &cont);
    if (ocorr != -1){
        printf("Casamento encontrado na posicao: %d\n", ocorr);
        } else{
            printf("Padrão não encontrado no texto.\n");
        }
        printf("Número total de comparacoes: %d\n", cont);
    return 0;
}

int BMH(const char* T, const char* P, int *cont){
    int i, j, k, ocorr = 0;
    int t = strlen(T);
    int p = strlen(P);
    int d[MAXCHAR];

    for(j = 0; j < MAXCHAR; j++){
        d[j] = p;
    }
    for(j = 1; j < p; j++){
        d[P[j-1]] = p - j;
    }
    i = p;
    while(i <= t){
        k = i;
        j = p;
        while (T[k-1] == P[j-1] && j > 0){
            k--;
            j--;
            (*cont)++;    
        }
        if(j == 0)
            return k + 1;
        (*cont)++;
        i += d[T[i - 1]];
    }
    return -1;
}