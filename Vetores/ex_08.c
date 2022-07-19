#include <stdio.h>

int main(void) {

  int idade[5];
  float altura[5];

  for(int i=0; i<5; i++){
    printf("\nPessoa %i", i+1);
    printf("\nIdade: ");
    scanf("%i", &idade[i]);
    printf("Altura: ");
    scanf("%f", &altura[i]);
  }

  for(int i=4; i>=0; i--){
    printf("\nPessoa %i - Idade: %i. Altura: %.2f", i+1, idade[i], altura[i]);
  }
  
  return 0;
}