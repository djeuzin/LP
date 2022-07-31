//Ler uma matriz 8 x 8 e transformá-la em uma matriz triangular inferior, atribuindo zero a todos os elementos acima da diagonal principal (ou seja, dada uma matriz A, para qualquer i < j, A[i,j] = 0). Imprimir a matriz no final.

#include <stdio.h>
#include <stdlib.h>

int main(){

  int m[8][8];

  for(int i=0; i<8; i++){
    for(int j=0; j<8; j++){
      m[i][j] = (rand()%10) + 1;
      printf("%i\t", m[i][j]);
    }
    printf("\n");
  }

  printf("\nTransformando em matriz triangular superior:\n\n");

  for(int i=0; i<8; i++){
    for(int j=0; j<8; j++){
      if(i<j)
        m[i][j] = 0;
      printf("%i\t", m[i][j]);
    }
    printf("\n");
  }

  return 0;
}