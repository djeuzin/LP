#include <stdio.h>

int main(void) {

  int r[10], s[10], x[10], y[10], soma=0;

  for(int i=0; i<10; i++){
    printf("N (r[%i]): ", i);
    scanf("%i", &r[i]);

    printf("N (s[%i]): ", i);
    scanf("%i", &s[i]);

    y[i] = s[i] * r[i];
    printf("Y[%i] = %i\n", i, y[i]);

    x[i] = s[i] + r[i];
    printf("x[%i] = %i\n\n", i, x[i]);
    
    soma += r[i] + s[i];
  }

  printf("Soma total: %i", soma);
  
  return 0;
}