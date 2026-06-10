#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
    // Área para definição das variáveis para armazenar as propriedades das cidades

    // Variaveis para a Carta 1
    char Estado1[50], Codigo1[50], Cidade1[50];
    int Populacao1, Pontos1;
    float Area1, PIB1, PIBper1, Densidade1;

    // Variaveis para a Carta 2
    char Estado2[50], Codigo2[50], Cidade2[50];
    int Populacao2, Pontos2;
    float Area2, PIB2, PIBper2, Densidade2;

    // Área para exibição do título do desafio
    printf("DESAFIO SUPER TRUNFO - PAÍSES\n");
    printf("TEMA 1 - CADASTRO DAS CARTAS\n");

    // Área para entrada de dados da Carta 1

    printf("===== CADASTRE A CARTA 1 =====\n");
    printf("Digite o Estado da sua carta:\n");
    scanf("%s", Estado1);

    printf("Digite o código da sua carta:\n");
    scanf("%s", Codigo1);

    printf("Digite o nome da cidade da sua carta:\n");
    scanf("%s", Cidade1);

    printf("Digite a população da sua carta:\n");
    scanf("%d", &Populacao1);

    printf("Digite o número de pontos turísticos da sua carta:\n");
    scanf("%d", &Pontos1);

    printf("Digite a área da sua carta:\n");
    scanf("%f", &Area1);

    printf("Digite a PIB da sua carta:\n");
    scanf("%f", &PIB1);

    // Área de calculo do PIB per capita e da densidade demográfica da Carta 1
    Densidade1 = (float)Populacao1 / Area1;
    PIBper1 = (float)PIB1 * 1000000000 / Populacao1;

    // Área para entrada de dados da Carta 2

    printf("===== CADASTRE A CARTA 2 =====\n");
    printf("Digite o Estado da sua carta:\n");
    scanf("%s", Estado2);

    printf("Digite o código da sua carta:\n");
    scanf("%s", Codigo2);

    printf("Digite o nome da cidade da sua carta:\n");
    scanf("%s", Cidade2);

    printf("Digite a população da sua carta:\n");
    scanf("%d", &Populacao2);

    printf("Digite o número de pontos turísticos da sua carta:\n");
    scanf("%d", &Pontos2);

    printf("Digite a área da sua carta:\n");
    scanf("%f", &Area2);

    printf("Digite a PIB da sua carta:\n");
    scanf("%f", &PIB2);

    // Área de calculo do PIB per capita e da densidade demográfica da Carta 2

    Densidade2 = (float)Populacao2 / Area2;
    PIBper2 = (float)PIB2 * 1000000000 / Populacao2;

    // Área para exibição dos dados da cidade

    printf("\n===== DADOS DAS CARTAS CADASTRADAS COM SUCESSO =====\n");

    printf("===== CADASTRO COM SUCESSO DA CARTA 1 =====\n");
    printf("Estado:%s\n", Estado1);
    printf("Código:%s\n", Codigo1);
    printf("Cidade:%s\n", Cidade1);
    printf("População:%d\n", Populacao1);
    printf("Pontos Turísticos:%d\n", Pontos1);
    printf("Área:%.2f km²\n", Area1);
    printf("PIB:%.2f bilhões de reais\n", PIB1);
    printf("Densidade Populacional:%.2f hab/km²\n", Densidade1);
    printf("PIB Per Capita:%.2f reais\n", PIBper1);

    printf("===== CADASTRO COM SUCESSO DA CARTA 2 =====\n");

    printf("Estado:%s\n", Estado2);
    printf("Código:%s\n", Codigo2);
    printf("Cidade:%s\n", Cidade2);
    printf("População:%d\n", Populacao2);
    printf("Pontos Turísticos:%d\n", Pontos2);
    printf("Área:%.2f km²\n", Area2);
    printf("PIB:%.2f bilhões de reais\n", PIB2);
    printf("Densidade Populacional:%.2f hab/km²\n", Densidade2);
    printf("PIB Per Capita:%.2f reais\n", PIBper2);
    return 0;
}