#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void montar_tabela(const char* P, int p, int *aux);
int KMP(const char* T, const char* P, int *cont);

int main (){
    const char* T = "ABCDABDABDABCDABCDABC";
    const char* P = "ABCDABC";
    int cont = 0;

    int primeira_ocorrencia = KMP(T,P, &cont);
    if(primeira_ocorrencia != -1){
        printf("Pimeira ocorrencia encontrada no cararter %d do texto com %d comparacoes.\n", primeira_ocorrencia, cont);
    }else{
        printf("Nenhuma ocorrencia encontrada.\n");
    }

    return 0;
}

void montar_tabela(const char* P, int p, int *aux){
    int j = -1;
    aux[0] = j;

    for(int i = 1; i < p; i++){
        while (j > -1 && P[j + 1] != P[i]){
            j = aux[j];
        }
        if(P[j + 1] == P[i]){
            j++;
        }
        aux[i] = j;
    }
}

int KMP(const char* T, const char* P, int *cont){
    int t = strlen(T);
    int p = strlen(P);
    int aux[p];

    montar_tabela(P, p, aux);
    int j = -1;

    for(int i = 0; i < t; i++){
        (*cont)++;
        while (j > -1 && P[j + 1] != T[i]){
            j = aux[j];
            (*cont)++;
        }
        if(P[j + 1] == T[i]){
            j++;
            
        }
        if(j == p - 1){
            return (i + 1) - p;
        }
    }
    return -1;
}