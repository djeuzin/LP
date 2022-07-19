#include <stdio.h>

int main(void) {

  int a, b;
  
  printf("Digite um número: ");
  scanf("%i", &a);
  printf("Digite outro número: ");
  scanf("%i", &b);

  if(a<b){
    for(int i=a; i<=b; i++){
      printf("%i\n", i);
    }
  }
  else{
     for(int i=b; i<=a; i++){
      printf("%i\n", i);
    }
  }
  
  return 0;
}