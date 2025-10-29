#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Declaração das variáveis da Carta 1
    char estado1;
    char codigo1[10];
    char nomeCidade1[50];
    float populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibpercap1;

    // Declaração das variáveis da Carta 2
    char estado2;
    char codigo2[10];
    char nomeCidade2[50];
    float populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibpercap2;

  // Área para entrada de dados

  // Entrada de dados da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o Estado (letra): ");
    scanf(" %c", &estado1);

    printf("Digite o Código: ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %s", nomeCidade1);

    printf("Digite a População: ");
    scanf("%f", &populacao1);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);


    // Entrada de dados da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o Estado (letra): ");
    scanf(" %c", &estado2);

    printf("Digite o Código: ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %s", nomeCidade2);

    printf("Digite a População: ");
    scanf("%f", &populacao2);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

  // Área para exibição dos dados da cidade

    //Cálculo da densidade e do PIB per capita

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibpercap1 = pib1 / populacao1;
    pibpercap2 = pib2 / populacao2;

   // Impressão dos dados formatados
    printf("\n\n=== Dados das Cartas ===\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %.2f\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("A densidade populacional é: %.2f \n", densidade1);
    printf("O valor PIB per capita é: %.2f \n", pibpercap1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %f\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("A densidade populacional é: %.2f \n", densidade2);
    printf("O valor PIB per capita é: %.2f \n", pibpercap2);

return 0;
} 
