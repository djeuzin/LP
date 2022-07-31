//Declarar uma matriz 5 x 5 e preencher com 1s a diagonal principal e com 0s os demais elementos. No final, escreva a matriz obtida.

#include <stdio.h>

int main(){

  int m[5][5];

  for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
      if(i==j)
        m[i][j] = 1;        
      else
        m[i][j] = 0;

      printf("%i\t", m[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}