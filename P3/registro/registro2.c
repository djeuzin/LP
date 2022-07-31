//Crie um tipo de registro DATA que contenha os seguintes campos: dia, mês e ano. Escreva uma função que receba dois registros do tipo DATA, cada um representando uma data válida, e devolva o número de dias que decorreram entre as duas datas.

#include <stdio.h>

struct data{
  int dia, mes, ano;
};

int diasDecorridos(struct data a, struct data b){
  int dias=0;
  
  if(a.ano>=b.ano)
    dias += (a.ano-b.ano)*365;
  else
    dias += (b.ano-a.ano)*365;

  if(a.mes>=b.mes)
    dias += (a.mes-b.mes)*30;
  else
    dias += (b.mes-a.mes)*30;

  if(a.dia>=b.dia)
    dias += a.dia-b.dia;
  else
    dias += b.dia-a.dia;

  return dias;
}

int main(){

  struct data x; struct data y;

  printf("Data X\n");
  printf("Dia: ");
  scanf("%i", &x.dia);
  printf("Mês: ");
  scanf("%i", &x.mes);
  printf("Ano: ");
  scanf("%i", &x.ano);

  printf("\nData Y\n");
  printf("Dia: ");
  scanf("%i", &y.dia);
  printf("Mês: ");
  scanf("%i", &y.mes);
  printf("Ano: ");
  scanf("%i", &y.ano);

  printf("\n%i dias decorridos entre as datas", diasDecorridos(x, y));
  
  return 0;
}