#include <stdio.h>

void insercao_binaria(int V[], int n) {
    // Começamos a partir do segundo elemento (i = 1), pois o primeiro já está "ordenado"
    for (int i = 1; i < n; i++) {
        // 'auxiliar' armazena o valor a ser inserido na parte ordenada do vetor
        int auxiliar = V[i];

        // Definimos o intervalo de busca binária
        int esq = 0;       // Posição inicial do intervalo
        int dir = i;       // Posição onde 'auxiliar' será inserido, no pior caso

        // Executamos a busca binária para encontrar a posição correta para 'auxiliar'
        while (esq < dir) {
            int meio = (esq + dir) / 2;  // Calcula o meio do intervalo

            // Se o valor no meio for menor ou igual a 'auxiliar', descartamos a metade esquerda
            if (V[meio] <= auxiliar) {
                esq = meio + 1;
            } else {
                dir = meio;  // Caso contrário, descartamos a metade direita
            }
        }

        // Agora, movemos todos os elementos da posição de 'esq' até 'i-1' uma posição para a direita
        // para abrir espaço para inserir o 'auxiliar' na posição correta
        for (int j = i; j > esq; j--) {
            V[j] = V[j - 1];
        }

        // Finalmente, colocamos o 'auxiliar' na posição encontrada
        V[esq] = auxiliar;
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

    insercao_binaria(V, n);  // Chama a função de ordenação

    printf("Vetor ordenado: ");
    imprimir_vetor(V, n);  // Imprime o vetor ordenado

    return 0;
}
