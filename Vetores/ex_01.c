#include <stdio.h>

int main(void) {

  int n[5];

  for(int i=0; i<5; i++){
    printf("Digite um número: ");
    scanf("%i", &n[i]);

    printf("n[%i] = %i\n\n", i, n[i]);
  }
  
  return 0;
}