#include <stdio.h>
#include <math.h>

int main(void) {

  int a[10], somaQ=0;

  for(int i=0; i<10; i++){
    printf("N%i: ", i+1);
    scanf("%i", &a[i]);

    somaQ += pow(a[i], 2);
  }

  printf("Soma dos quadrados do vetor a[10] = %i", somaQ);
  
  return 0;
}