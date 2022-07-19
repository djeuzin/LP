#include <stdio.h>

int main(void) {

  int n;

  do{
    printf("Tabuada de: ");
    scanf("%i", &n);
    if(n<1 || n>10){
      printf("Digite um valor entre 1 e 10.\n");
    }
  }while(n<1 || n>10);
  
  for(int i=1; i<=10; i++){
    printf("%i x %i = %i\n", n, i, n*i);
  }
  
  return 0;
}