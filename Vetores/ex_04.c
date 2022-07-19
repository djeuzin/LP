#include <stdio.h>

int main(void) {

  int contador=0;
  char letra[10];

  for(int i=0; i<10; i++){
    printf("Digite uma letra: ");
    scanf("  %c", &letra[i]);
    if(letra[i] != 'a' && letra[i] != 'e' && letra[i] != 'i' && letra[i] != 'o' && letra[i] != 'u')
    contador++;
  }

  printf("\nQuantidade de consoantes: %i\n", contador);
  
  for(int i=0; i<10; i++){
    if(letra[i] != 'a' && letra[i] != 'e' && letra[i] != 'i' && letra[i] != 'o' && letra[i] != 'u')
    printf("%c, ", letra[i]);
  } 
  
  return 0;
}