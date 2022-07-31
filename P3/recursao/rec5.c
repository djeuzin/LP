//Escreva uma função recursiva que inverta uma string.

#include <stdio.h>
#include <string.h>

void inverteString(char[],int);

int main(){
  char palavra[30];

  printf("Palavra: ");
  fgets(palavra,sizeof(palavra),stdin);
  palavra[strlen(palavra)-1] = '\0';
  inverteString(palavra,0);
  printf("Palavra invertida: %s\n",palavra);
  return 0;
}

void inverteString(char palavra[],int n){
  char aux;
  if(n!=strlen(palavra)/2){
    aux = palavra[n];
    palavra[n] = palavra[strlen(palavra)-1-n];
    palavra[strlen(palavra)-1-n] = aux;
    inverteString(palavra,n+1);
  }
}