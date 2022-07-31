//Ler uma matriz 20 x 20 e um inteiro X. Fazer uma busca de X na matriz e escrever apenas a localização de sua primeira ocorrência (linha e coluna) ou a mensagem “não encontrado”.

#include <stdio.h>
#include <stdlib.h>

int main(){

  int m[20][20], contador=0, x, i=0, j=0;

  for(int i=0; i<20; i++){
    for(int j=0; j<20; j++){
      m[i][j] = (rand() % 10) + 1;
      printf("\t%i", m[i][j]);
    }
    printf("\n");
  }

  printf("X: ");
  scanf("%i", &x);

  for(i=0; i<20; i++){
    for(j=0; j<20; j++){
      if(x == m[i][j]){
        contador++;
        printf("Encontrado na posição [%i][%i]\n", i, j);
        break;
      }
    }
    if(x == m[i][j])
    break;
  }

  if(contador == 0)
    printf("X não encontrado na matriz");
  
  return 0;
}