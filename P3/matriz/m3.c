//Ler uma matriz 20 x 20 e um inteiro X. Fazer uma busca de X na matriz e, ao final, escrever a localização de todas as suas ocorrências (linha e coluna) ou a mensagem “não encontrado”.

#include <stdio.h>
#include <stdlib.h>

int main(){

  int m[20][20], contador=0, x;

  for(int i=0; i<20; i++){
    for(int j=0; j<20; j++){
      m[i][j] = rand() % 100;
    }
  }

  printf("X: ");
  scanf("%i", &x);

  for(int i=0; i<20; i++){
    for(int j=0; j<20; j++){
      if(m[i][j] == x){
        contador++;
        printf("Encontrado na posição [%i][%i]\n", i, j);
      }
    }
  }

  if(contador == 0)
    printf("X não encontrado na matriz");
  
  return 0;
}