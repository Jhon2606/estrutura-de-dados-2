#include <stdio.h>
#include <stdlib.h>
#define N 5

void shellsort(int *dados);

int main() {
	int vetor[N], i;
	for(i=0; i<N; i++) {
		printf("Informe um valor: \n");
		scanf("%d", &vetor[i]);
	}
	shellsort(vetor);
	printf("Vetor ordenado:\n");
    for(i = 0; i < N; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0;
}

void shellsort(int *dados) {
	int i, j, h, aux;
	h = 1;

	while(h < N) {
		h = 3 * h + 1;
	}
	while (h > 1) {
		h /= 3;
		for(i = h; i < N; i++) {
			aux = dados[i];
			j = i - h;
			while(j >= 0 && aux  < dados[j]) {
				dados[j+h]=dados[j];
				j-=h;
			}
			dados[j+h]=aux;
		}
	}

}