//8 - Faça uma função que receba uma matriz como parâmetro e retorne o maior elemento da matriz.
//9 - Faça uma função que receba uma matriz como parâmetro e retorne o menor elemento da matriz.

#include <stdio.h>
#include <stdlib.h>

int maiorMatriz(int linha, int coluna, int m[linha][coluna]){
  int maior = m[0][0];

  for(int i=0; i<linha; i++){
    for(int j=0; j<coluna; j++){
      if(m[i][j] > maior)
        maior = m[i][j];
    }
  }

  return maior;
}

int menorMatriz(int linha, int coluna, int m[linha][coluna]){
  int menor = m[0][0];

  for(int i=0; i<linha; i++){
    for(int j=0; j<coluna; j++){
      if(m[i][j] < menor)
        menor = m[i][j];
    }
  }

  return menor;
}

int main(void) {

  int linha, coluna;

  printf("Linha: ");
  scanf("%i", &linha);
  printf("Coluna: ");
  scanf("%i", &coluna);
  printf("\n\n");

  int m[linha][coluna];

  for(int i=0; i<linha; i++){
    for(int j=0; j<coluna; j++){
      m[i][j] = (rand() % 100) + 1;
      printf("%i\t", m[i][j]);
    }
    printf("\n");
  }

  printf("\nMaior valor: %i\n", maiorMatriz(linha, coluna, m));
  printf("Menor valor: %i", menorMatriz(linha, coluna, m));
  
  return 0;
}