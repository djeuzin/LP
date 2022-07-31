//Crie uma função recursiva que receba um número inteiro positivo N e calcule o somatório dos números de 1 a N.

#include <stdio.h>

int somaN(int n){
  if(n==1)
    return 1;
  else
    return somaN(n-1) + n;
}

int main(){

  int n;

  printf("N: ");
  scanf("%i", &n);

  printf("\nSoma: %i", somaN(n));
  
  return 0;
}