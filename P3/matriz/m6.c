//Dada uma matriz MAT de inteiros com 4 x 5 elementos, faça um algoritmo para somar os elementos de cada linha gerando o vetor SOMALINHA. Em seguida, some os valores dos elementos do vetor em uma variável TOTAL, que deve ser impressa ao final.

#include <stdio.h>
#include <stdlib.h>

int main(){
  
  int mat[4][5], somalinha[4] = {0}, total=0;

  for(int i=0; i<4; i++){
    for(int j=0; j<5; j++){
      mat[i][j] = (rand() % 10) + 1;
      printf("%i\t", mat[i][j]);

      somalinha[i] += mat[i][j];
    }
    printf("\n");
  }

  printf("\n\n");
  
  for(int i=0; i<4; i++){
    printf("Soma inha %i: %i\n", i+1,somalinha[i]);
    total += somalinha[i];
  }

  printf("Total: %i", total);

  return 0;
}