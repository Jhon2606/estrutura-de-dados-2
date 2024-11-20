#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int forca_bruta(char *T, char *P, int *V, int t, int p);

int main(){
  char T[] = "ABCDABDABDABCDABCDABC";
  char P[] = "ABCDABC";
  int t = strlen(T);
  int p = strlen(P);
  int V[t];

  int resultado = forca_bruta(T, P, V, t, p);

  if(resultado == 0){
    printf("Padrao nao encontrado.\n");
  }else{
    printf("Padrao encontrado nas posicoes: ");
    for (int i = 0; i < resultado; i++) {
      printf("%d ", V[i]);
    }
    printf("\n");
  }
  return 0;
}

int forca_bruta(char *T, char *P, int *V, int t, int p){
  int count = 0;
  for(int i = 0; i <= t - p; i++){
    int j = 0;
    while(j < p && T[i + j] == P[j]){
      j++;
    }
    if(j == p){
      V[count++] = i;
    }
  }
  return count;
}