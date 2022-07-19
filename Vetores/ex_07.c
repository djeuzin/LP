#include <stdio.h>

int main(void) {

  int n[5], soma=0, produto=1;

  for(int i=0; i<5; i++){
    printf("N: ");
    scanf("%i", &n[i]);

    soma += n[i];
    produto *= n[i];
  }

  for(int i=0; i<5; i++){
    printf("\nN%i: %i", i+1, n[i]);
  }

  printf("\n\nSoma total: %i. \nProduto dos termos: %i", soma, produto);
    
  return 0;
}