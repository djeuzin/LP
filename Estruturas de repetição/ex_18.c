#include <stdio.h>

int main(void) {

  int t, n, soma, maior, menor;

  do{
    printf("Total de números no conjunto: ");
    scanf("%i", &t);

    if(t<1)
      printf("Digite um valor positivo maior ou igual a 1\n");
  }while(t<1);
  
  printf("Número: ");
  scanf("%i", &n);
  menor = n;
  maior = n;
  soma = n;
  
  for(int i=1; i<t; i++){
    printf("Número: ");
    scanf("%i", &n);
    soma = soma + n;
    
    if(n>maior){
      maior=n;
    }

    if(n<menor){
      menor=n;
    }
  }

  printf("\nSoma: %i\n", soma);
  printf("Maior: %i\n", maior);
  printf("Menor: %i\n", menor);
  
  return 0;
}