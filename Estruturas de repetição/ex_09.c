#include <stdio.h>

int main(void) {

  //primeira ideia que tive
  /*
  for(int i=1; i<=50; i++){
    if(i%2 != 0){
      printf("%i\n", i);
    }
  }
  */

  // versão mais simples
  for(int i=1; i<50; i=i+2){
    printf("%i\n", i);
  }

  return 0;
}