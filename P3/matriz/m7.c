//Leia duas matrizes reais de dimensão 3 x 5, calcule e imprima a soma das matrizes.

#include <stdio.h>
#include <stdlib.h>

int main(){

  int m1[3][5], m2[3][5], soma=0;

  printf("Matriz 1:\n");
  for(int i=0; i<3; i++){
    for(int j=0; j<5; j++){
      m1[i][j] = (rand() % 10) + 1;
      printf("%i\t", m1[i][j]);
      soma += m1[i][j];
    }
    printf("\n");
  }

  printf("\nMatriz 2:\n");
  for(int i=0; i<3; i++){
    for(int j=0; j<5; j++){
      m2[i][j] = (rand() % 10) + 1;
      printf("%i\t", m2[i][j]);
      soma += m2[i][j];
    }
    printf("\n");
  }

  printf("\nSoma dos valores das duas matrizes: %i", soma);
  
  return 0;
}