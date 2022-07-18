//Grupo: Rafael Freire, Gustavo, Giovana e Isaque 
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void exibe(int v[3][3]){

  system("clear");
  printf("Jogo da velha. Use o teclado numérico para jogar!\n\n");
  
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      switch (v[i][j]){
        case 0:
          printf("\t.\t");
        break;
        case 1:
          printf("\tX\t");
        break;
        case 2:
          printf("\tO\t");
        break;
        default:
        break;
      }
    }
    printf("\n\n\n\n");
  }
  
}

bool venceu(int v[3][3]){
        //colunas
       if(v[0][0] == v[0][1] && v[0][0] == v[0][2] && v[0][0] != 0)
          return true;
        else if(v[1][0] == v[1][1] && v[1][0] == v[1][2] && v[1][0] != 0)
          return true;
        else if(v[2][0] == v[2][1] && v[2][0] == v[2][2] && v[2][0] != 0)
          return true;
        //linhas
        else if(v[0][0] == v[1][0] && v[0][0] == v[2][0] && v[0][0] != 0)
          return true;
        else if(v[0][1] == v[1][1] && v[0][1] == v[2][1] && v[0][1] != 0)
          return true;
        else if(v[0][2] == v[1][2] && v[0][2] == v[2][2] && v[0][2] != 0)
          return true;
        //diagonais
        else if(v[0][0] == v[1][1] && v[0][0] == v[2][2]  && v[0][0]!= 0)
          return true;
        else if(v[0][2] == v[1][1] && v[0][2] == v[2][0] && v[0][2] != 0)
          return true;
        else
          return false;
}

int main(void) {

  int g[3][3]={0}, input;

  exibe(g);

  for(int r=0; r<=8; r++){

    if(r%2 == 0){
      printf("Vez do X: ");
      scanf("%i", &input);

      switch(input){
        case 7:
          if(g[0][0] == 0)
            g[0][0] = 1;
          else
            r--;
        break;
        case 8:
          if(g[0][1] == 0)
            g[0][1] = 1;
          else
            r--;
        break;
        case 9:
          if(g[0][2] == 0)
            g[0][2] = 1;
          else
            r--;
        break;
        case 4:
           if(g[1][0] == 0)
            g[1][0] = 1;
          else
            r--;
        break;
        case 5:
           if(g[1][1] == 0)
            g[1][1] = 1;
          else
            r--;
        break;
        case 6:
           if(g[1][2] == 0)
            g[1][2] = 1;
          else
            r--;
        break;
        case 1:
           if(g[2][0] == 0)
            g[2][0] = 1;
          else
            r--;
        break;
        case 2:
           if(g[2][1] == 0)
            g[2][1] = 1;
          else
            r--;
        break;
        case 3:
          if(g[2][2] == 0)
            g[2][2] = 1;
          else
            r--;
        break;
        default:
        break;
      }

    }
    else{
      printf("Vez do O: ");
      scanf("%i", &input);

      switch(input){
        case 7:
          if(g[0][0] == 0)
            g[0][0] = 2;
          else
            r--;
        break;
        case 8:
          if(g[0][1] == 0)
            g[0][1] = 2;
          else
            r--;
        break;
        case 9:
          if(g[0][2] == 0)
            g[0][2] = 2;
          else
            r--;
        break;
        case 4:
           if(g[1][0] == 0)
            g[1][0] = 2;
          else
            r--;
        break;
        case 5:
           if(g[1][1] == 0)
            g[1][1] = 2;
          else
            r--;
        break;
        case 6:
           if(g[1][2] == 0)
            g[1][2] = 2;
          else
            r--;
        break;
        case 1:
           if(g[2][0] == 0)
            g[2][0] = 2;
          else
            r--;
        break;
        case 2:
           if(g[2][1] == 0)
            g[2][1] = 2;
          else
            r--;
        break;
        case 3:
          if(g[2][2] == 0)
            g[2][2] = 2;
          else
            r--;
        break;
        default:
        break;
      }
    }

    exibe(g);
    if(venceu(g)){
      if(r%2 == 0)
        printf("X venceu!!");
      else
        printf("O venceu!!");
      r=9;
    }
  }

  if(!venceu(g))
    printf("Deu velha!!");
  
  return 0;
}