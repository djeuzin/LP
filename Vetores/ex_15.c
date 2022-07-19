#include <stdio.h>
#include <stdlib.h>

//Quebrei a cabeça pois nunca tinha usado essas funções (malloc e realloc) muito menos ponteiros mas foi legal conseguir fazer

int main(void){

  int total=0, abaixoSete=0, acimaMedia=0, i=0, n=1;
  float nota, soma, media;
  float *vetorNota;

  vetorNota = (float*) malloc(n*sizeof(float));

  printf("Digite as notas (-1 para parar)\n\n");
  
  do{
      do{
        printf("Nota: ");
        scanf("%f", &nota);
        
        if((nota<0 || nota>10) && nota!=-1){
          printf("Digite uma nota válida.\n");
        }      
      }while((nota<0 || nota>10) && nota!=-1);

      if(nota!=-1){
        n++;
        vetorNota = realloc(vetorNota, n*sizeof(float));
        vetorNota[i] = nota;
        total++;
        soma+=vetorNota[i];

        if(vetorNota[i]<7)
          abaixoSete++;
      }
    i++;
  }while(nota != -1);

  media = soma/total;

  //a)
  printf("\na) Foram lidas %i notas\n\n", total);

  //b
  printf("b) Valores armazenados na ordem de entrada:\n");
  for(int i=0; i<total; i++){
    printf("%.2f, ", vetorNota[i]);

    //Aproveitei o loop de exibição para calcular os valores acima da média calculada.
    if(vetorNota[i]>=media)
      acimaMedia++;
  }
  
  //c
  printf("\n\nc) Valores armazenados na ordem inversa de entrada:\n");
  for(int i=total-1; i>=0; i--){
    printf("%.2f\n", vetorNota[i]);
  }
  
  //d
  printf("\nd) A soma das notas é %.2f\n", soma);

  //e
  media = soma/total;
  printf("e) A média das notas é %.2f\n", media);

  //f
  printf("f) %i notas acima da média calculada\n", acimaMedia);
  
  //g
  printf("g) %i notas abaixo de 7\n\n", abaixoSete);

  //h
  printf("h) Obrigado por utilizar o meu programa :)");
  return 0;
}