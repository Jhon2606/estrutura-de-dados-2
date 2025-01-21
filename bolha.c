#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Bolha(char V[]);
int main(){
    char V[] = "ABACATE";
    Bolha(V); //tem que passar assim pq ja representa um array
    for(int i = 0; i < strlen(V); i++){
        printf("Ordenacao: %c\n", V[i]);
    }

    return 0;
}

void Bolha(char V[]){
    char aux;
    int n = strlen(V);
    for(int i = n-1; i > 0; i--){
        for(int j = 0; j < i; j++){
            if(V[j] > V[j+1]){
                aux = V[j];
                V[j] = V[j+1];
                V[j+1] = aux;
            }
        }
    }
}
