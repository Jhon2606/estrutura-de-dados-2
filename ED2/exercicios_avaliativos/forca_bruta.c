#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ForcaBruta(const char* frase, char* chave);

int main(){
    char chave[20];
    const char* frase = "abracadabra";

    printf("Digite a chave a ser buscada: ");
    scanf("%s", chave);

    int resultado = ForcaBruta(frase, chave);

    if(resultado == -1){
        printf("Chave nao encontrada.\n");
    }else{
        printf("Chave encontrada apos %d comparacoes.\n", resultado);
    }
    return 0;
}

int ForcaBruta(const char* frase, char* chave){
    int n = strlen(frase);
    int m = strlen(chave);
    int cont = 0;

    for(int i = 0; i <= n - m; i++){

        int j = 0;
        
        while (j < m && frase[i + j] == chave[j]){
            j++;
            cont = i + j;
        }
        
        if(j == m){
            return cont;
        }
    }
    return -1;
}