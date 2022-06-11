#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define X 5000
int main ()
{
    int freq[60];
    int jogo[X][6], jogo1[X][6], i, a, b, k, tam, aux;
    char ja_consta;
    char jogador1[20], jogador2[20], jogador3[20];
    int cpf1, cpf2, cpf3, r, s, t;
    int aposta1[r][6], aposta2[s][6], aposta3[t][6];
    int zero = 0;

    for (i=0; i<60; i++)
        freq[i] = 0;
    srand (time(NULL));
    
    for (i=0; i<X; i++){
        for (a=0; a<6; a++){
            do{
                jogo[i][a] = rand() % 60 + 1;
                ja_consta = 'X';
                for (b=0; b<a; b++)
                    if (jogo[i][a] == jogo[i][b])
                        ja_consta = 'S';
            }while (ja_consta == 'S');
            jogo1[i][a] = jogo[i][a];
            freq[jogo[i][a]-1]++;
        }
    }


    for(i=0;i<X;i++){
        for(a=0;a<6;a++){
            for(b=a; b<6; b++){
                if(jogo1[i][b]<jogo1[i][a]){
                    aux = jogo1[i][a];
                    jogo1[i][a] = jogo1[i][b];
                    jogo1[i][b] = aux;
                }
            }
        }
    }

    printf("Jogos sorteados\n");
    for(i=0;i<X;i++){
        printf("\nJogo %02d:    ", i+1);
        for(a=0;a<6;a++)
            printf("%02d ", jogo[i][a]);
            
        printf(" || ");    
        for(a=0;a<6;a++)
            printf("%02d ", jogo1[i][a]);
    }
   
    printf("\n");

    printf("\nFrequência de cada número\n");
    for (i=0; i<60; i++)
    {
        printf("\t%02d: %02d ||", i+1, freq[i]);
        if ((i+1) % 5 == 0)
            printf("\n");
    }

  printf("\n");

  printf("\t\t\t\t\tVamos jogar?\n");

  printf("\n  ---------------------------------------------------------------------");
  printf("\n |                                                                     |");
  printf("\n |                                Ajuda                                |");
  printf("\n |                                                                     |");
  printf("\n |            Programa que simula um sorteio de 6 dezenas de           |");
  printf("\n |               numeração aleatória para três jogadores.              |");
  printf("\n |                                                                     |");
  printf("\n |        Ao final comparamos o seu jogo com algum dos 5000 jogos      |");
  printf("\n |                      que foram sorteados.                           |");
  printf("\n |                                                                     |");
  printf("\n |                              Boa sorte!                             |");
  printf("\n  ---------------------------------------------------------------------");

  printf("\nPrecisamos de três jogadores para brincar.\n");

  printf("\n");
  printf("\n");
  
  printf("Digite seu nome: ");
  scanf("%s", jogador1);
  printf("Informe também somente os números de seu CPF: ");
  scanf("%d", &cpf1);

  printf("\n");

  printf("Digite seu nome: ");
  scanf("%s", jogador2);
  printf("Informe também somente os números de seu CPF: ");
  scanf("%d", &cpf2);

  printf("\n");

  printf("Digite seu nome: ");
  scanf("%s", jogador3);
  printf("Informe também somente os números de seu CPF: ");
  scanf("%d", &cpf3);

  printf("\nVamos começar?\n");
            printf("%s escolha 6 números de 01 à 60: ", jogador1);
             scanf("%d", aposta1[r]);

  printf("\n");
            printf("%s escolha 6 números de 01 à 60: ", jogador2);
             scanf("%d", aposta2[s]);

  printf("\n");
            printf("%s escolha 6 números de 01 à 60: ", jogador3);
             scanf("%d", aposta3[t]);
    

    return 0;
}
