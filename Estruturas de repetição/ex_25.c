#include <stdio.h>

int main(void) {

  int p, idade, somaIdades=0;
  float media;

  do{
    printf("Quantas pessoas participarão da pesquisa? ");
    scanf("%i", &p);
    
    if(p<=0)
      printf("Digite um número válido.\n");
  }while(p<=0);

  for(int i=1; i<=p; i++){
    printf("Idade: ");
    scanf("%i", &idade);
    somaIdades = somaIdades + idade;
  }

  media = somaIdades/p;

  if(media<=25){
    printf("Grupo jovem.");
  }
  else{
    if(media<=60){
      printf("Grupo adulto.");
    }
    else{
      printf("Grupo idoso.");
    }
  }
  
  return 0;
}