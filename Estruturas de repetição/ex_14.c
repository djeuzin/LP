#include <stdio.h>

int main(void) {

  int par=0, impar=0, n;

  for(int i=1; i<=10; i++){
    printf("Digite um número: ");
    scanf("%i", &n);

    if(n%2 == 0){
      par++;
    }
    else{
      impar++;
    }
  }

  printf("\nTotal de ímpares: %i\n", impar);
  printf("Total de pares: %i", par);
  
  return 0;
}