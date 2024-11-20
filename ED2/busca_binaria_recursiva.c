#include <stdio.h>

int PesquisaBinariaRec(int V[], int K, int esquerda, int direita);

int main() {
    int V[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int K = 7;
    int tamanho = sizeof(V) / sizeof(V[0]);
    
    int resultado = PesquisaBinariaRec(V, K, 0, tamanho - 1);

    if (resultado != -1) {
        printf("Elemento encontrado na posição: %d\n", resultado);
    } else {
        printf("Elemento não encontrado.\n");
    }

    return 0;
}

int PesquisaBinariaRec(int V[], int K, int esquerda, int direita) {
    if (esquerda > direita) {
        return -1;
    }

    int meio = (esquerda + direita) / 2;

    if (V[meio] == K) {
        return meio;
    }else if (V[meio] > K){
        return PesquisaBinariaRec(V, K, esquerda, meio - 1);
    }else{
        return PesquisaBinariaRec(V, K, meio + 1, direita);
    }
}
