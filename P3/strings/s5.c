//Faça uma função que inverta uma string.

#include <stdio.h>
#include <string.h>

void inverteString(char p[]){
  char inverso[strlen(p)];
  
  for(int i=strlen(p)-1; i>=0; i--){
    inverso[strlen(p)-i-1] = p[i];
  }
  
  strcpy(p, inverso);
}

int main(){

  char p[20];

  printf("Palavra: ");
  fgets(p, sizeof(p), stdin);
  p[strlen(p)-1] = '\0';

  inverteString(p);

  printf("%s", p);
  
  return 0;
}