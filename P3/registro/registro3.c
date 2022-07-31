//Crie um tipo de registro HM que contenha os seguintes campos: numeroHoras e numeroMinutos. Escreva uma função que receba um número inteiro que representa um intervalo de tempo medido em minutos e devolva o correspondente número de horas e minutos (por exemplo, converte 131 minutos em 2 horas e 11 minutos).

#include <stdio.h>

struct HM{
  int numeroHoras, numeroMinutos;
};

void conversor(struct HM a, int h){
  if(h>=60){
    a.numeroHoras=h/60;
    a.numeroMinutos=h%60;
  }
  else{
    a.numeroHoras=0;
    a.numeroMinutos=h;
  }

  printf("\nEquivalente à %i horas e %i minutos", a.numeroHoras, a.numeroMinutos);
}

int main(){

  struct HM x;
  int min;

  printf("Digite a quantidade de minutos que quer converter: ");
  scanf("%i", &min);

  conversor(x, min);

  return 0;
}