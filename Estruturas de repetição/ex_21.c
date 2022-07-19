#include <stdio.h>
#include <stdbool.h> 

bool testePrimo(int n){
  //Para contar quantas vezes o número consegue ser dividido por completo
  int divisores = 0;
  
  for(int i=n; i>=1; i--){
     if(n%i == 0)
       divisores++;
  }

  //se o valor do contador for 2 significa que o número possui apenas 2 divisores e portanto é um número primo
  if(divisores == 2)
    return true;
  else
    return false;
}

int main(void) {

  int n;

  printf("Veja se um número é primo (Digite 0 para encerrar)\n");
  
  do{
    do{
    printf("\nDigite um número: ");
    scanf("%i", &n);

    if(n<0)
      printf("ERRO: digite um número inteiro positivo.\n");
    }while(n<0);

    if(n == 0){
      printf("Adeus, Mundo.");
    }
    else{
      if(testePrimo(n))
        printf("%i é número primo\n", n);
      else
        printf("%i NÃO é número primo\n", n);
    }
  }while(n != 0);
  
  return 0;
}