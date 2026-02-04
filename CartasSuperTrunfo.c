#include <stdio.h>

int main() {

    printf("Super Trunfo de Países\n\n");

    // -------- CARTA 1 --------
    char estado1;
    char cidade1[30];
    unsigned long int populacao1;
    float area1, pib1;
    int npt1;
    float densidade1;

    printf("Preencha os dados da Carta 1:\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Cidade: ");
    scanf("%s", cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &npt1);

    densidade1 = (float)populacao1 / area1;

    // -------- CARTA 2 --------
    char estado2;
    char cidade2[30];
    unsigned long int populacao2;
    float area2, pib2;
    int npt2;
    float densidade2;

    printf("\nPreencha os dados da Carta 2:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Cidade: ");
    scanf("%s", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &npt2);

    densidade2 = (float)populacao2 / area2;

    // -------- ESCOLHA DOS ATRIBUTOS --------
    int ат1, ат2;
    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;

    printf("\n===== ESCOLHA DO 1º ATRIBUTO =====\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n");
    scanf("%d", &ат1);

    printf("\n===== ESCOLHA DO 2º ATRIBUTO =====\n");
    if (ат1 != 1) printf("1 - População\n");
    if (ат1 != 2) printf("2 - Área\n");
    if (ат1 != 3) printf("3 - PIB\n");
    if (ат1 != 4) printf("4 - Pontos Turísticos\n");
    if (ат1 != 5) printf("5 - Densidade Demográfica\n");
    scanf("%d", &ат2);

    // -------- ATRIBUTO 1 --------
    switch (ат1) {
        case 1: valor1_c1 = populacao1; valor1_c2 = populacao2; break;
        case 2: valor1_c1 = area1; valor1_c2 = area2; break;
        case 3: valor1_c1 = pib1; valor1_c2 = pib2; break;
        case 4: valor1_c1 = npt1; valor1_c2 = npt2; break;
        case 5: valor1_c1 = densidade1; valor1_c2 = densidade2; break;
    }

    // -------- ATRIBUTO 2 --------
    switch (ат2) {
        case 1: valor2_c1 = populacao1; valor2_c2 = populacao2; break;
        case 2: valor2_c1 = area1; valor2_c2 = area2; break;
        case 3: valor2_c1 = pib1; valor2_c2 = pib2; break;
        case 4: valor2_c1 = npt1; valor2_c2 = npt2; break;
        case 5: valor2_c1 = densidade1; valor2_c2 = densidade2; break;
    }

    // -------- AJUSTE DA DENSIDADE (menor vence) --------
    valor1_c1 = (ат1 == 5) ? -valor1_c1 : valor1_c1;
    valor1_c2 = (ат1 == 5) ? -valor1_c2 : valor1_c2;
    valor2_c1 = (ат2 == 5) ? -valor2_c1 : valor2_c1;
    valor2_c2 = (ат2 == 5) ? -valor2_c2 : valor2_c2;

    // -------- SOMA FINAL --------
    float soma1 = valor1_c1 + valor2_c1;
    float soma2 = valor1_c2 + valor2_c2;

    printf("\n===== RESULTADO FINAL =====\n");
    printf("%s (%c) - Soma: %.2f\n", cidade1, estado1, soma1);
    printf("%s (%c) - Soma: %.2f\n", cidade2, estado2, soma2);

    if (soma1 > soma2)
        printf("Resultado: Carta 1 venceu!\n");
    else if (soma2 > soma1)
        printf("Resultado: Carta 2 venceu!\n");
    else
        printf("Resultado: Empate!\n");

    return 0;
}
