#include <stdio.h>

int main(void) {

  int f=0, fib1=0, fib2=1;

  printf("%i\n", fib1);
  printf("%i\n", fib2);
  
   while(f<500){
      f = fib1 + fib2;
      fib1 = fib2;
      fib2 = f;
      printf("%i\n", f);
    }
  
  return 0;
}