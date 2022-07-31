//(a) Crie um tipo de registro que contenha os seguintes campos: Nome, RA, notas (3 notas) e frequência. (b) Crie um vetor de variáveis deste registro. (c) Faça um programa que permita inserir, remover, visualizar e buscar elementos do registro pelo RA.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno{
  char nome[20];
  int ra;
  float notas[3], frequencia;
};

void menu(){
  printf("\n1 - Inserir aluno\n2 - Remover aluno\n3 - Listar\n4 - Buscar\n5 - Sair\nOpção: ");
}

void insereAluno(struct aluno turma[], int n){
  printf("\nNome: ");
  fgets(turma[n].nome, sizeof(turma[n].nome), stdin);
  turma[n].nome[strlen(turma[n].nome)-1] = '\0';
  printf("RA: ");
  scanf("%i", &turma[n].ra);
  for(int i=0; i<3; i++){
    printf("Nota %i: ", i+1);
    scanf("%f", &turma[n].notas[i]);
  }
  printf("Frequência: ");
  scanf("%f", &turma[n].frequencia);
}

void removeAluno(struct aluno turma[], int ra, int n){
   for(int i=0; i<n; i++){
    if(turma[i].ra == ra){
      for(int j=i;j<n;j++){
        strcpy(turma[j].nome, turma[j+1].nome);
        turma[j].ra = turma[j+1].ra;
        turma[j].notas[0] = turma[j+1].notas[0];
        turma[j].notas[1] = turma[j+1].notas[1];
        turma[j].notas[2] = turma[j+1].notas[2];
        turma[j].frequencia = turma[j+1].frequencia;
      }
    }
  }
}

void listaAlunos(struct aluno turma[], int n){
  for(int i=0; i<n; i++){
    printf("\nNome: %s", turma[i].nome);
    printf("\nRA: %i", turma[i].ra);
    for(int j=0; j<3; j++){
      printf("\nNota %i: %.2f", j+1, turma[i].notas[j]);
    }
    printf("\nFrequência: %.2f\n", turma[i].frequencia);
  }
}

int buscaAluno(struct aluno turma[], int ra, int n){
  int contador=0;
  
  for(int i=0; i<n; i++){
    if(turma[i].ra == ra){
      contador++;
      printf("\nNome: %s", turma[i].nome);
      printf("\nRA: %i", turma[i].ra);
      for(int j=0; j<3; j++){
        printf("\nNota %i: %.2f", j+1, turma[i].notas[j]);
      }
      printf("\nFrequência: %.2f\n", turma[i].frequencia);
      return 1;
    }
  }

  if(contador == 0){
    printf("Aluno não encontrado\n");
    return 0;
  }
}

int main(){

  struct aluno turma[50];
  int op=0, n=0, ra;

  while(op != 5){
    menu();
    scanf("%i", &op);
    getchar();

    switch(op){
      case 1:
        if(n==50)
          printf("Turma cheia.\n\n");
        else{
          insereAluno(turma, n);
          printf("Aluno inserido com sucesso!\n\n");
          n++;
        }
      break;
      case 2:
        if(n==0)
          printf("Turma vazia.\n\n");
        else{
          printf("Digite o RA do aluno: ");
          scanf("%i", &ra);

          if(buscaAluno(turma, ra, n)){
            removeAluno(turma, ra, n);
            printf("Aluno removido.\n\n");
            n--;
          }
          else
            printf("Aluno não encontrado.\n\n");
        }
      break;
      case 3:
        if(n==0)
          printf("Turma vazia.\n\n");
        else
          listaAlunos(turma, n);
      break;
      case 4:
        if(n==0)
          printf("Turma vazia.\n\n");
        else{
          printf("RA do aluno: ");
          scanf("%i", &ra);
          buscaAluno(turma, ra, n);
        }
      break;
      case 5:
        printf("Adeus.");
      break;
      default:
        system("clear");
        printf("Digite uma opção válida!\n\n");
      break;
    }
  }

  return 0;
}