//Escreva uma função recursiva que calcule o fatorial de um número.

#include <stdio.h>

int fat(int n){
  if(n == 0 || n == 1)
    return 1;
  else
    return fat(n-1)*n;
}

int main(){

  int vFatorial;

  printf("Fatorial de: ");
  scanf("%i", &vFatorial);

  printf("\n%i", fat(vFatorial));
  
  return 0;
}