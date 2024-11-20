#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ConstruirPrefixos(const char *chave, int m, int *aux);
int KMP(const char* frase, char* chave);

int main(){
    char chave[20];
    const char* frase = "O rato roeu a roupa do rei de roma";

    printf("Digite a chave a ser buscada: ");
    scanf("%s", chave);

    int resultado = KMP(frase, chave);

    if(resultado == -1){
        printf("Chave nao encontrada.\n");
    }else{
        printf("Chave encontrada apos %d comparacoes.\n", resultado);
    }
    return 0;
}
void ConstruirPrefixos(const char *chave, int m, int *aux){
    int j = -1;
    aux[0] = j;

    for(int i = 1; i < m; i++){
        while(j > -1 && chave[j + 1] != chave[i]){
            j = aux[j];
        }
        if(chave[i] == chave[j + 1]){
            j++;
        }
        aux[i] = j;
    }
}

int KMP(const char* frase, char* chave){
    int n = strlen(frase);
    int m = strlen(chave);
    int aux[m];
    int cont = 0;

    ConstruirPrefixos(chave, m, aux);
    int j = -1;

    for(int i = 0; i < n; i++){
        cont++;
        
        while(j > -1 && chave[j + 1] != frase[i]){
            j = aux[j];
            cont++;
        }
         if(chave[j + 1] == frase[i]) { j++; }
        if(j == m - 1){
            return cont;
        }
    }
    return -1;
}