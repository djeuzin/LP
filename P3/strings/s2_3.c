//2 - Faça um programa que leia o nome de 5 pessoas e mostre os nomes armazenados. Utilize um vetor de 5 strings.
//3 - Faça um programa que leia o nome de 5 pessoas. Utilize um vetor de 5 strings. Leia mais um nome, e verifique se este nome está no vetor. Se não estiver, imprimir "Nome não encontrado.".

#include <stdio.h>
#include <string.h>

int main(){

  char nomes[5][20], chave[20];
  int contador=0;

  for(int i=0; i<5; i++){
    printf("Nome: ");
    fgets(nomes[i], sizeof(nomes[i]), stdin);
    nomes[i][strlen(nomes[i])-1] = '\0';
  }

  printf("\n");
  
  /*
    ->Exercício 2
    for(int i=0; i<5; i++){
    printf("%s\n", nomes[i]);
  }*/

  //->Exercício 3

  printf("Digite o nome que deseja buscar: ");
  fgets(chave, sizeof(chave), stdin);
  chave[strlen(chave)-1]='\0';


  /*strcmp(str1, str2) retorna:
  -> valor 0 se str1 == str2
  -> valor -1 se str1<str2
  -> valor 1 se str1>str2
  */
  for(int i=0; i<5; i++){
    if(strcmp(chave, nomes[i]) == 0){
      printf("Nome encontrado na posição %i", i);
      contador++;
    }
  }

  if(contador == 0)
    printf("Nome não encontrado");
  
  return 0;
}