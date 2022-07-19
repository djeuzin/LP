#include <stdio.h>

int main(void) {

  float n[10];

  for(int i=0; i<10; i++){
    printf("N: ");
    scanf("%f", &n[i]);
  }

  for(int i=9; i>=0; i--){
    printf("%.2f ", n[i]);
  }
  
  return 0;
}