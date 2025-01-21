#include <stdio.h>
#include <stdlib.h>

int bucaSequencial(int V[], int n, int *cont, int K);

int main(){
    int V[] = {10, 15, 20, 25, 30, 35, 40, 45};
    int *cont = 0, K = 30;
    int n = sizeof(V) / sizeof(V[0]);
    int result = bucaSequencial(V, n, &cont, K);

    if(result != -1){
        printf("Valor %d encontrado na posicao %d com %d comparacoes\n", K, result, cont);
    }else {
        printf("Valor %d nao encontrado apos %d comparacoes\n", K, cont);
    }
    return 0;
}

int bucaSequencial(int V[], int n, int *cont, int K){
    int i;
        for(i = 0; i < sizeof(V); i++){
        (*cont)++;
        if(V[i] == K){
            return i;
        }
    }
    return -1;
}