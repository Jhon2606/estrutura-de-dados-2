#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int buscaBinaria(int V[], int tamanho, int K);

int main(){

    clock_t start, end;
    start = clock();
    getchar();

    int V[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100
};
    int K = 7;
    int tamanho = sizeof(V) / sizeof(V[0]);
    int resultado = buscaBinaria(V, tamanho, K);
    if (resultado != -1) {
        printf("Elemento encontrado: %d\n", resultado);
    }else{
        printf("Elemento não encontrado\n");
    }

    end = clock();
    printf("\n\n  Tempo de execucao: %.4f segundos\n", ((double) (end - start)) / CLOCKS_PER_SEC);

    return 0;
}

int buscaBinaria(int V[], int tamanho, int K){
    int esquerda = 0;
    int direita = tamanho - 1;
    while(esquerda <= direita){
        int meio = (direita + esquerda)/2;
        if(K  < V[meio]){
            direita = meio - 1;
        }else if(K > V[meio]){
            esquerda = meio + 1;
        }else{
            return V[meio];
        }
    }
    return -1;
}