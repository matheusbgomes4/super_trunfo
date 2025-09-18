#include <stdio.h>

int main() {
    // --- Variáveis da Carta 1 ---
    char estado1;
    char codigoCarta1[5];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // --- Variáveis da Carta 2 ---
    char estado2;
    char codigoCarta2[5];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    
    // --- Entrada de Dados da Carta 1 ---
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", codigoCarta1);
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a Area (em km2): ");
    scanf("%f", &area1);
    printf("Digite o PIB em bilhoes (ex: 12.5): ");
    scanf("%f", &pib1);
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // --- Entrada de Dados da Carta 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o Codigo da Carta (ex: B02): ");
    scanf("%s", codigoCarta2);
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);
    printf("Digite a Area (em km2): ");
    scanf("%f", &area2);
    printf("Digite o PIB em bilhoes (ex: 12.5): ");
    scanf("%f", &pib2);
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // --- Exibição dos Dados Cadastrados ---
    printf("\n\n======================================\n");
    printf("   DADOS DAS CARTAS CADASTRADAS\n");
    printf("======================================\n");

    printf("\n--- CARTA 1: %s ---\n", nomeCidade1);
    printf("Codigo: %s\n", codigoCarta1);
    printf("Populacao: %d habitantes\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: R$ %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    
    printf("\n--- CARTA 2: %s ---\n", nomeCidade2);
    printf("Codigo: %s\n", codigoCarta2);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: R$ %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}