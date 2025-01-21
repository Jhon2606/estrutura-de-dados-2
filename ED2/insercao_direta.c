#include <stdio.h>

void insercao_direta(int V[], int n) {
    // Começamos com a segunda posição (i = 1), pois o primeiro elemento já está "ordenado"
    for (int i = 1; i < n; i++) {
        // 'auxiliar' armazena o valor a ser inserido na parte ordenada do vetor
        int auxiliar = V[i];
        
        // 'j' é o índice da posição à esquerda de i, onde vamos comparar com 'auxiliar'
        int j = i - 1;

        // Enquanto 'j' for válido (>=0) e o elemento V[j] for maior que o 'auxiliar'
        // deslocamos os elementos de V para a direita para abrir espaço
        while (j >= 0 && V[j] > auxiliar) {
            V[j + 1] = V[j];  // Desloca V[j] para a direita
            j = j - 1;         // Move o índice j uma posição à esquerda
        }

        // Quando a condição do 'while' não é mais atendida, significa que encontramos
        // o local adequado para 'auxiliar'. Se 'j' foi alterado, inserimos o valor
        // de 'auxiliar' na posição correta (j + 1).
        if (j != i - 1) {
            V[j + 1] = auxiliar;
        }
    }
}

void imprimir_vetor(int V[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", V[i]);
    }
    printf("\n");
}

int main() {
    int V[] = {5, 2, 9, 1, 5, 6};  // Exemplo de vetor desordenado
    int n = sizeof(V) / sizeof(V[0]);  // Calcula o número de elementos no vetor

    printf("Vetor original: ");
    imprimir_vetor(V, n);

    insercao_direta(V, n);  // Chama a função de ordenação

    printf("Vetor ordenado: ");
    imprimir_vetor(V, n);  // Imprime o vetor ordenado

    return 0;
}
