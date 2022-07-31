//Faça uma função que receba uma string como parâmetro e retorne 1 se for palíndromo e 0 caso contrário.

#include <stdio.h>
#include <string.h>

int palindromo(char s[]){
  int contador = 0;

  //Temos que descontar o caractere '\0' portanto comparamos com o tamanho da string menos 1. Pois "ana\0" é diferente de "\0ana"
  for(int i=0; i<strlen(s)-1; i++){
    if(s[i] == s[strlen(s)-1-i]){
      contador++;
    }
  }

  if(contador == strlen(s)-1)
    return 1;
  else
    return 0;
}

int main(){

  char p[20];

  printf("Palavra: ");
  fgets(p, sizeof(p), stdin);
  p[strlen(p)-1]='\0';
  
  if(palindromo(p))
    printf("\nÉ um palíndromo");
  else
    printf("\nNão é um palíndromo");
  
  return 0;
}