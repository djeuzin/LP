//Ler uma matriz 6 x 6, contar e escrever quantos valores maiores que 10 ela possui.

#include <stdio.h>

int main(){

  int m[6][6], contador=0;

  for(int i=0; i<6; i++){
    for(int j=0; j<6; j++){
      printf("n: ");
      scanf("%i", &m[i][j]);
      if(m[i][j]>10){
        contador++;
    }
  }
  }

  printf("%i numeros maiores que 10\n", contador);

  for(int i=0; i<6; i++){
    for(int j=0; j<6; j++){
      if(m[i][j]>10){
        printf("%i\n", m[i][j]);
      }
    }
  }
  
  return 0;
}