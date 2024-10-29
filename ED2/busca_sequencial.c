#include <stdio.h>
#include <stdlib.h>
#define n 5

int main() {
    int i, vet[n] = {1, 2, 3, 4, 5};
    int K = 3;
    for (i = 0; i < n; i++) {
        if (vet[i] == K) {
            printf("Elemento encontrado: %d\n", vet[i]);
            return vet[i];
        }
    }
    printf("Elemento não encontrado!\n");
    return -1;
}
