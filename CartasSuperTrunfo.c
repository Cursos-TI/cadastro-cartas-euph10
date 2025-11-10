#include <stdio.h>

int main(){
    printf("Super Trunfo de Países\n");

    char Estado;
    char Codigo[30];
    char Cidade[30];
    float Populacao;
    float Area;
    float Pib;
    int NPT;
    float densidade, pibpercapita;


    printf("Preencha os dados da carta\n");

    printf("Estado: \n");
    scanf("%c", &Estado);

    printf("Codigo: \n");
    scanf("%s", &Codigo);

    printf("Cidade: \n");
    scanf("%s", &Cidade);

    printf("População: \n");
    scanf("%f", &Populacao);

    printf("Área: \n");
    scanf("%f", &Area);

    printf("Pib: \n");
    scanf("%f", &Pib);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &NPT);

    densidade = (Populacao / Area);

    printf("Densidade populacinal: %2.f\n",densidade);

    pibpercapita = (Pib / Populacao);

    printf("Pib per capita: %2.f\n", pibpercapita);



    printf("Carta 1: \n");
    printf("Estado: %c\n",Estado);
    printf("Código da carta: %s\n",Codigo);
    printf("Cidade: %s\n",Cidade);
    printf("População: %d\n",Populacao);
    printf("Área: %2.f\n",Area);
    printf("Pib: %.2f\n",Pib);
    printf("Números de pontos turísticos: %d\n",NPT);
    
    char estado[10];
    char codigo[30];
    char cidade[30];
    float populacao;
    float area;
    float pib;
    int nPT;
    float Densidade, Pibpercapita;

    printf("Preencha os dados da carta\n");

    printf("Estado: \n");
    scanf("%c", &estado);

    printf("Codigo: \n");
    scanf("%s", &codigo);

    printf("Cidade: \n");
    scanf("%s", &cidade);

    printf("População: \n");
    scanf("%F", &populacao);

    printf("Área: \n");
    scanf("%f", &area);

    printf("Pib: \n");
    scanf("%f", &pib);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &nPT);
    
    Densidade = (populacao / area);

    printf("Densidade populacinal: %2.f\n",Densidade);

    Pibpercapita = (pib / populacao);

    printf("Pib per capita: %2.f\n", Pibpercapita);

    printf("Carta 2: \n");
    printf("Estado: %c\n",estado);
    printf("Código da carta: %s\n",codigo);
    printf("Cidade: %s\n",cidade);
    printf("População: %d\n",populacao);
    printf("Área: %2.f\n",area);
    printf("Pib: %.2f\n",pib);
    printf("Números de pontos turísticos: %d\n",nPT);



    
   return 0;



} 
