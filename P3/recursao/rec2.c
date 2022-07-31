//Escreva uma função recursiva que retorne o n-ésimo termo da sequência de Fibonacci.

#include <stdio.h>

int seqFib(int n){
  if(n==1 || n==2)
    return 1;
  else
    return seqFib(n-1)+seqFib(n-2);
}

int main(){

  int fib;

  printf("Qual número da sequência: ");
  scanf("%i", &fib);

  printf("\n%i", seqFib(fib));
  
  return 0;
}