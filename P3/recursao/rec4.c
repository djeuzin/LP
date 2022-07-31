//Escreva uma função recursiva que receba uma string e retorne 1 se for um palíndromo e 0 caso contrário.

#include <stdio.h>
#include <string.h>

int palindromo(char[],int);

int main(){
  char palavra[30];

  printf("Palavra: ");
  fgets(palavra,sizeof(palavra),stdin);
  palavra[strlen(palavra)-1]='\0';
  if(palindromo(palavra,0))
    printf("É palíndromo.\n");
  else
    printf("Não é palíndromo.\n");
  return 0;
}

int palindromo(char palavra[],int n){
  if(palavra[n]!=palavra[strlen(palavra)-1-n])
    return 0;
  else
    if(n==strlen(palavra)/2)
      return 1;
    else
      palindromo(palavra,n+1);
}
