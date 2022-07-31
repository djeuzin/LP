//Escreva um programa que leia uma string, conte quantos caracteres desta string são iguais a 'a' e substitua os que forem iguais a 'a' por 'b'. O programa deve imprimir o número de caracteres modificados e a string modificada.

#include <stdio.h>
#include <string.h>

int main(){

  char s[20];
  int contador = 0;

  printf("String: ");
  fgets(s, sizeof(s), stdin);
  s[sizeof(s)-1] = '\0';

  for(int i=0; i<sizeof(s); i++){
    if(s[i] == 'a'){
      contador++;
      s[i] = 'b';
    }
  }

  if(contador==0)
    printf("\nNada foi modificado.\n");
  else
    printf("\n%i caracteres iguais a \"a\" foram modificados\n\n", contador);
  printf("%s", s);
  
  return 0;
}