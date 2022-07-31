//Escreva uma função recursiva que calcule a potência x^y.

#include <stdio.h>

int pot(int x, int y){
  if(y==0)
    return 1;
  else if(y==1)
    return x;
  else
    return pot(x, y-1)*pot(x, 1);
}

int main(){

  int x, y;

  printf("x: ");
  scanf("%i", &x);
  printf("y: ");
  scanf("%i", &y);

  printf("\nx^y = %i", pot(x, y));
  
  return 0;
}