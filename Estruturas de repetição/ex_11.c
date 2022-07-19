#include <stdio.h>

int main(void) {
    
  int a, b, soma=0;
  
  printf("Digite um número: ");
  scanf("%i", &a);
  printf("Digite outro número: ");
  scanf("%i", &b);

  if(a<b){
    for(int i=a; i<=b; i++){
      soma = soma + i;
    }
  }
  else{
     for(int i=b; i<=a; i++){
      soma = soma + i;
    }
  }

  printf("A soma de todos os números nesse intervalo é %i", soma);
  
  return 0;
}