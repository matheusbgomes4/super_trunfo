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
    float densidade1;
    float pibPerCapita1;

    // --- Variáveis da Carta 2 ---
    char estado2;
    char codigoCarta2[5];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;
    
    // --- Entrada de Dados (Idêntica ao Nível Novato) ---
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

    // --- Cálculos ---
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / (float)populacao1;
    
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / (float)populacao2;

    // --- Exibição dos Dados ---
    printf("\n\n======================================\n");
    printf("   DADOS DAS CARTAS CADASTRADAS\n");
    printf("======================================\n");

    printf("\n--- CARTA 1: %s ---\n", nomeCidade1);
    printf("Codigo: %s\n", codigoCarta1);
    printf("Populacao: %d habitantes\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: R$ %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);
    
    printf("\n--- CARTA 2: %s ---\n", nomeCidade2);
    printf("Codigo: %s\n", codigoCarta2);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: R$ %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);

    return 0;
}