#include <stdio.h>

int main() {
    // DESAFIO NÍVEL AVENTUREIRO

    // dados da carta 1
    char pais1[100];
    int populacao1, pontos1;
    double area1, pib1, densidade1;

    // dados da carta 2
    char pais2[100];
    int populacao2, pontos2;
    double area2, pib2, densidade2;

    int escolha;

    // entrada de dados para a Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Nome do país: "); scanf("%s", pais1);
    printf("População: "); scanf("%d", &populacao1);
    printf("Área (km²): "); scanf("%lf", &area1);
    printf("PIB (em milhões): "); scanf("%lf", &pib1);
    printf("Número de pontos turísticos: "); scanf("%d", &pontos1);
    densidade1 = populacao1 / area1;

    // entrada de dados para a Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Nome do país: "); scanf("%s", pais2);
    printf("População: "); scanf("%d", &populacao2);
    printf("Área (km²): "); scanf("%lf", &area2);
    printf("PIB (em milhões): "); scanf("%lf", &pib2);
    printf("Número de pontos turísticos: "); scanf("%d", &pontos2);
    densidade2 = populacao2 / area2;

    // exibe menu interativo
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    printf("\n--- COMPARAÇÃO DE CARTAS ---\n");

    switch (escolha) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %d\n", pais1, populacao1);
            printf("%s: %d\n", pais2, populacao2);
            if (populacao1 > populacao2)
                printf("Resultado: %s venceu!\n", pais1);
            else if (populacao2 > populacao1)
                printf("Resultado: %s venceu!\n", pais2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", pais1, area1);
            printf("%s: %.2f km²\n", pais2, area2);
            if (area1 > area2)
                printf("Resultado: %s venceu!\n", pais1);
            else if (area2 > area1)
                printf("Resultado: %s venceu!\n", pais2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f milhões\n", pais1, pib1);
            printf("%s: %.2f milhões\n", pais2, pib2);
            if (pib1 > pib2)
                printf("Resultado: %s venceu!\n", pais1);
            else if (pib2 > pib1)
                printf("Resultado: %s venceu!\n", pais2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 4:
            printf("Atributo: Pontos turísticos\n");
            printf("%s: %d\n", pais1, pontos1);
            printf("%s: %d\n", pais2, pontos2);
            if (pontos1 > pontos2)
                printf("Resultado: %s venceu!\n", pais1);
            else if (pontos2 > pontos1)
                printf("Resultado: %s venceu!\n", pais2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 5:
            printf("Atributo: Densidade demográfica\n");
            printf("%s: %.2f hab/km²\n", pais1, densidade1);
            printf("%s: %.2f hab/km²\n", pais2, densidade2);
            if (densidade1 < densidade2)
                printf("Resultado: %s venceu!\n", pais1);
            else if (densidade2 < densidade1)
                printf("Resultado: %s venceu!\n", pais2);
            else
                printf("Resultado: Empate!\n");
            break;

        default:
            printf("Opção inválida. Tente novamente.\n");
    }

    return 0;
}