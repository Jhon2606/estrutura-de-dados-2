#include <stdio.h>
#include <stdlib.h>

int bucaBinaria(int V[], int *cont, int K, int esquerda, int direita);

int main(){
    int V[] = {10, 15, 20, 25, 30, 35, 40, 45};
    int *cont = 0, K = 30;
    int n = sizeof(V) / sizeof(V[0]);
    int result = bucaBinaria(V, &cont, K, 0, n - 1);

    if(result != -1){
        printf("Valor %d encontrado na posicao %d com %d comparacoes\n", K, result, cont);
    }else {
        printf("Valor %d nao encontrado após %d comparacoes\n", K, cont);
    }
    return 0;
}

int bucaBinaria(int V[], int *cont, int K, int esquerda, int direita){
    if(esquerda > direita){
        return -1;
    }
    int meio = (esquerda+direita)/2;
    (*cont)++;
    if(V[meio] == K){
        return meio;
    }
    else if(K > V[meio]){
        return bucaBinaria(V, &cont, K, meio + 1, direita);
    }else{
        return bucaBinaria(V, &cont, K, esquerda, meio - 1);
    }
}