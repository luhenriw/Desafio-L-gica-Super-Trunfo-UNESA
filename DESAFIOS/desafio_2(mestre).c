#include <stdio.h>
#include <string.h>

// declaração da função fora do main
double getValor(int atributo, int pop, double area, double pib, int pontos, double densidade) {
    switch(atributo) {
        case 1: return (double)pop;
        case 2: return area;
        case 3: return pib;
        case 4: return (double)pontos;
        case 5: return densidade;
        default: return 0;
    }
}

int main() {
    // DESAFIO NÍVEL MESTRE

    // Dados da carta 1
    char pais1[100];
    int populacao1, pontos1;
    double area1, pib1, densidade1;

    // dados da carta 2
    char pais2[100];
    int populacao2, pontos2;
    double area2, pib2, densidade2;

    int escolha1, escolha2;
    double valor1_carta1 = 0, valor2_carta1 = 0;
    double valor1_carta2 = 0, valor2_carta2 = 0;

    // Entrada de dados para a Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Nome do país: "); scanf("%s", pais1);
    printf("População: "); scanf("%d", &populacao1);
    printf("Área (km²): "); scanf("%lf", &area1);
    printf("PIB (em milhões): "); scanf("%lf", &pib1);
    printf("Pontos turísticos: "); scanf("%d", &pontos1);
    densidade1 = populacao1 / area1;

    // Entrada de dados para a Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Nome do país: "); scanf("%s", pais2);
    printf("População: "); scanf("%d", &populacao2);
    printf("Área (km²): "); scanf("%lf", &area2);
    printf("PIB (em milhões): "); scanf("%lf", &pib2);
    printf("Pontos turísticos: "); scanf("%d", &pontos2);
    densidade2 = populacao2 / area2;

    // Primeiro menu de escolha
    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n5 - Densidade demográfica\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha1);

    // Segundo menu de escolha
    do {
        printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
        for (int i = 1; i <= 5; i++) {
            if (i == escolha1) continue;
            switch(i) {
                case 1: printf("%d - População\n", i); break;
                case 2: printf("%d - Área\n", i); break;
                case 3: printf("%d - PIB\n", i); break;
                case 4: printf("%d - Pontos turísticos\n", i); break;
                case 5: printf("%d - Densidade demográfica\n", i); break;
            }
        }
        printf("Digite sua escolha: ");
        scanf("%d", &escolha2);
    } while(escolha2 == escolha1 || escolha2 < 1 || escolha2 > 5);

    // Obtem os valores
    valor1_carta1 = getValor(escolha1, populacao1, area1, pib1, pontos1, densidade1);
    valor2_carta1 = getValor(escolha2, populacao1, area1, pib1, pontos1, densidade1);
    valor1_carta2 = getValor(escolha1, populacao2, area2, pib2, pontos2, densidade2);
    valor2_carta2 = getValor(escolha2, populacao2, area2, pib2, pontos2, densidade2);

    // soma
    double soma_carta1 = 0, soma_carta2 = 0;

    soma_carta1 += (escolha1 == 5) ? -valor1_carta1 : valor1_carta1;
    soma_carta2 += (escolha1 == 5) ? -valor1_carta2 : valor1_carta2;
    soma_carta1 += (escolha2 == 5) ? -valor2_carta1 : valor2_carta1;
    soma_carta2 += (escolha2 == 5) ? -valor2_carta2 : valor2_carta2;

    // Exibir valores
    char* atributos[] = {"", "População", "Área", "PIB", "Pontos turísticos", "Densidade demográfica"};

    printf("\n--- COMPARAÇÃO FINAL ---\n");
    printf("Carta 1 - %s\n", pais1);
    printf("%s: %.2f\n", atributos[escolha1], valor1_carta1);
    printf("%s: %.2f\n", atributos[escolha2], valor2_carta1);
    printf("Soma final (ajustada): %.2f\n\n", soma_carta1);

    printf("Carta 2 - %s\n", pais2);
    printf("%s: %.2f\n", atributos[escolha1], valor1_carta2);
    printf("%s: %.2f\n", atributos[escolha2], valor2_carta2);
    printf("Soma final (ajustada): %.2f\n\n", soma_carta2);

    // resultado
    printf("Resultado: ");
    if (soma_carta1 > soma_carta2)
        printf("%s venceu!\n", pais1);
    else if (soma_carta2 > soma_carta1)
        printf("%s venceu!\n", pais2);
    else
        printf("Empate!\n");

    return 0;
}