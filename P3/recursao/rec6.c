//Faça uma função recursiva que permita somar os elementos de um vetor de inteiros.

#include <stdio.h>
#include <stdlib.h>

int somaElementos(int v[],int n,int i){
  if(i==n-1)
    return v[i];
  else
    return v[i] + somaElementos(v,n,i+1);
}

int main(){
  int v[10], i;

  for(i=0;i<10;i++){
    v[i] = rand()%11;
    printf("%i\t",v[i]);
  }

  printf("\nSoma dos elementos do vetor: %i.\n",somaElementos(v,10,0));
  return 0;
}