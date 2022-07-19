#include <stdio.h>

int fatorial(int n){
  
  int f = 1;

  for(int i=n; i>=1; i--){
    f = i * f;
  }

  return f;
}

int main(void) {
  
  int n;

  do{
    printf("Digite um número: ");
    scanf("%i", &n);

    if(n<0)
      printf("Digite um número inteiro positivo.\n");
  }while(n<0);

  printf("%i! = %i", n, fatorial(n));
  
  return 0;
}