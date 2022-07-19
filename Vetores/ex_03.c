#include <stdio.h>

int main(void) {

  float nota[4], soma=0, media;

  for(int i=0; i<4; i++){
    printf("Digite a %i nota: ", i+1);
    scanf("%f", &nota[i]);
    soma += nota[i];
  }

  media = soma/4;

  for(int i=0; i<4; i++){
    printf("\nNota %i: %.2f ", i+1, nota[i]);
  }
  
  printf("\n\nA média é: %.2f", media);
  
  return 0;
}