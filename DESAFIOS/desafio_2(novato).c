#include <stdio.h>

int main() {
    // DESAFIO NÍVEL NOVATO

    // Dados da primeira carta
    char estado1[100], codigo1[100], cidade1[100];
    int populacao1, pontos1;
    double area1, pib1, densidade1, pib_per_capita1;

    // Dados da segunda carta
    char estado2[100], codigo2[100], cidade2[100];
    int populacao2, pontos2;
    double area2, pib2, densidade2, pib_per_capita2;

    // Cadastro da primeira carta
    printf("Digite os dados da Carta 1:\n");
    printf("Estado: "); scanf("%s", estado1);
    printf("Código: "); scanf("%s", codigo1);
    printf("Cidade: "); scanf("%s", cidade1);
    printf("População: "); scanf("%d", &populacao1);
    printf("Área em km²: "); scanf("%lf", &area1);
    printf("PIB Total (em milhões): "); scanf("%lf", &pib1);
    printf("Número de pontos turísticos: "); scanf("%d", &pontos1);

    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    // Cadastro da segunda carta
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado: "); scanf("%s", estado2);
    printf("Código: "); scanf("%s", codigo2);
    printf("Cidade: "); scanf("%s", cidade2);
    printf("População: "); scanf("%d", &populacao2);
    printf("Área em km²: "); scanf("%lf", &area2);
    printf("PIB Total (em milhões): "); scanf("%lf", &pib2);
    printf("Número de pontos turísticos: "); scanf("%d", &pontos2);

    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // Impressão dos dados
    printf("\n--- DADOS DAS CARTAS ---\n");

    printf("\nCarta 1:\n");
    printf("Cidade: %s (%s)\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f milhões\n", cidade1, estado1, populacao1, area1, pib1);
    printf("Densidade populacional: %.2f hab/km²\nPIB per capita: %.2f\n", densidade1, pib_per_capita1);
    printf("Pontos turísticos: %d\n", pontos1);

    printf("\nCarta 2:\n");
    printf("Cidade: %s (%s)\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f milhões\n", cidade2, estado2, populacao2, area2, pib2);
    printf("Densidade populacional: %.2f hab/km²\nPIB per capita: %.2f\n", densidade2, pib_per_capita2);
    printf("Pontos turísticos: %d\n", pontos2);

    // Comparação por POPULAÇÃO
    printf("\n--- COMPARAÇÃO DE CARTAS (Atributo: População) ---\n");
    printf("Carta 1 - %s: %d\n", cidade1, populacao1);
    printf("Carta 2 - %s: %d\n", cidade2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}