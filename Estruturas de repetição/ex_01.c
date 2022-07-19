#include <stdio.h>

int main(void) {

  int n;

  do{
    printf("Digite um número entre 0 e 10: ");
    scanf("%i",&n);
    
    if(n<0 || n>10){
      printf("Número inválido.\n");
    }
  }while(n<0 || n>10);
  printf("Número válido.\n");
  
  return 0;
}