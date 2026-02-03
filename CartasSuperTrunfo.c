#include <stdio.h>

int main() {

    printf("Super Trunfo de Países\n\n");

    // -------- CARTA 1 --------
    char estado1;
    char codigo1[30];
    char cidade1[30];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int npt1;

    float densidade1, pibpercapita1;

    printf("Preencha os dados da Carta 1:\n");

    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Código: ");
    scanf("%s", codigo1);

    printf("Cidade: ");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &npt1);

    // Cálculos
    densidade1 = (float)populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;

    // -------- CARTA 2 --------
    char estado2;
    char codigo2[30];
    char cidade2[30];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int npt2;

    float densidade2, pibpercapita2;

    printf("\n=============================\n");
    printf("Preencha os dados da Carta 2:\n");

    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Código: ");
    scanf("%s", codigo2);

    printf("Cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &npt2);

    // Cálculos
    densidade2 = (float)populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

    // -------- MENU INTERATIVO --------
    int opcao;

    printf("\n===== MENU DE COMPARAÇÃO =====\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Escolha o atributo para comparação: ");
    scanf("%d", &opcao);

    printf("\n===== Resultado da Comparação =====\n");

    switch (opcao) {

        case 1: // População
            printf("Atributo: População\n");
            printf("Carta 1 - %s (%c): %lu\n", cidade1, estado1, populacao1);
            printf("Carta 2 - %s (%c): %lu\n", cidade2, estado2, populacao2);

            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 venceu!\n");
            } else if (populacao2 > populacao1) {
                printf("Resultado: Carta 2 venceu!\n");
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2: // Área
            printf("Atributo: Área\n");
            printf("Carta 1 - %s (%c): %.2f\n", cidade1, estado1, area1);
            printf("Carta 2 - %s (%c): %.2f\n", cidade2, estado2, area2);

            if (area1 > area2) {
                printf("Resultado: Carta 1 venceu!\n");
            } else if (area2 > area1) {
                printf("Resultado: Carta 2 venceu!\n");
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("Carta 1 - %s (%c): %.2f\n", cidade1, estado1, pib1);
            printf("Carta 2 - %s (%c): %.2f\n", cidade2, estado2, pib2);

            if (pib1 > pib2) {
                printf("Resultado: Carta 1 venceu!\n");
            } else if (pib2 > pib1) {
                printf("Resultado: Carta 2 venceu!\n");
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4: // Pontos Turísticos
            printf("Atributo: Pontos Turísticos\n");
            printf("Carta 1 - %s (%c): %d\n", cidade1, estado1, npt1);
            printf("Carta 2 - %s (%c): %d\n", cidade2, estado2, npt2);

            if (npt1 > npt2) {
                printf("Resultado: Carta 1 venceu!\n");
            } else if (npt2 > npt1) {
                printf("Resultado: Carta 2 venceu!\n");
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5: // Densidade (menor vence)
            printf("Atributo: Densidade Demográfica\n");
            printf("Carta 1 - %s (%c): %.2f\n", cidade1, estado1, densidade1);
            printf("Carta 2 - %s (%c): %.2f\n", cidade2, estado2, densidade2);

            if (densidade1 < densidade2) {
                printf("Resultado: Carta 1 venceu!\n");
            } else if (densidade2 < densidade1) {
                printf("Resultado: Carta 2 venceu!\n");
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Execute o programa novamente.\n");
    }

    return 0;
}
