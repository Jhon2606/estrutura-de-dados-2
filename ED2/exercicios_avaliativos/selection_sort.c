#include <stdio.h>

void selectionSort(int V[], int n) {
    int i, j, menor, auxiliar;
    
    for (i = 0; i < n - 1; i++) {
        menor = i;
        
        for (j = i + 1; j < n; j++) {
            if (V[j] < V[menor]) {
                menor = j;
            }
        }
        
        if (i != menor) {
            auxiliar = V[i];
            V[i] = V[menor];
            V[menor] = auxiliar;
        }
    }
}

void imprimirVetor(int V[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", V[i]);
    }
    printf("\n");
}

int main() {
    int V[] = {64, 25, 12, 22, 11};
    int n = sizeof(V) / sizeof(V[0]);
    
    printf("Vetor original: ");
    imprimirVetor(V, n);
    
    selectionSort(V, n);
    
    printf("Vetor ordenado: ");
    imprimirVetor(V, n);
    
    return 0;
}
