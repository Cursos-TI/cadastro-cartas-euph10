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

    float densidade1, pibpercapita1, superpoder1;

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

    superpoder1 = (float)populacao1 + area1 + pib1 + (float)npt1 + pibpercapita1 + (1.0f / densidade1);


    // -------- CARTA 2 --------
    char estado2;
    char codigo2[30];
    char cidade2[30];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int npt2;

    float densidade2, pibpercapita2, superpoder2;

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

    superpoder2 = (float)populacao2 + area2 + pib2 + (float)npt2 + pibpercapita2 + (1.0f / densidade2);


    // -------- COMPARAÇÕES --------
    printf("\n\n===== Comparação das Cartas =====\n");

    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", npt1 > npt2);
    printf("Densidade Populacional (menor vence): Carta 1 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpercapita1 > pibpercapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);

    return 0;
}
