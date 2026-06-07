#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char Estado[50],Codigo[50],Cidade[50];
      int Populacao,Pontos;
        float Area,PIB;
          // Área para entrada de dados
          printf("CADASTRE SUA CARTA\n");
           printf("Digite o Estado da sua carta:\n");
            scanf("%s", Estado);

             printf("Digite o código da sua carta:\n");
              scanf("%s", Codigo);

               printf("Digite o nome da cidade da sua carta:\n");
                scanf("%s", Cidade);

                 printf("Digite a população da sua carta:\n");
                 scanf("%d", &Populacao);

                  printf("Digite os pontos da sua carta:\n");
                   scanf("%d", &Pontos);

                    printf("Digite a área da sua carta:\n");
                     scanf("%f", &Area);
                      
                       printf("Digite a PIB da sua carta:\n");
                       scanf("%f",&PIB);
                         // Área para exibição dos dados da cidade
                         printf("CADASTRO COM SUCESSO\n");
                         printf("Estado:%s\n", Estado);
                         printf("Código:%s\n",Codigo);
                         printf("Cidade:%s\n",Cidade);
                         printf("População:%d\n",Populacao);
                         printf("Pontos:%d\n",Pontos);
                         printf("Área:%2.f\n",Area);
                         printf("PIB:%2.f\n",PIB);
                         return 0;
                         } 