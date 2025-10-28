#include <stdio.h>

int main(){
    printf("Super Trunfo de Países\n");

    char Estado;
    char Código[30];
    char Cidade[30];
    int População;
    float Área;
    float Pib;
    int NPT;

    printf("Preencha os dados da carta\n");

    printf("Estado: \n");
    scanf("%c", &Estado);

    printf("Codigo: \n");
    scanf("%s", &Código);

    printf("Cidade: \n");
    scanf("%s", &Cidade);

    printf("População: \n");
    scanf("%d", &População);

    printf("Área: \n");
    scanf("%f", &Área);

    printf("Pib: \n");
    scanf("%f", &Pib);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &NPT);

    printf("Carta 1: \n");
    printf("Estado: %c\n",Estado);
    printf("Código da carta: %s\n",Código);
    printf("Cidade: %s\n",Cidade);
    printf("População: %d\n",População);
    printf("Área: %2.f\n",Área);
    printf("Pib: %.2f\n",Pib);
    printf("Números de pontos turísticos: %d\n",NPT);
    
    char estado;
    char código[30];
    char cidade[30];
    int população;
    float área;
    float pib;
    int nPT;

    printf("Preencha os dados da carta\n");

     printf("Estado: \n");
    scanf("%c", &estado);

    printf("Codigo: \n");
    scanf("%s", &código);

    printf("Cidade: \n");
    scanf("%s", &cidade);

    printf("População: \n");
    scanf("%d", &população);

    printf("Área: \n");
    scanf("%f", &área);

    printf("Pib: \n");
    scanf("%f", &pib);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &nPT);
    
    printf("Carta 2: \n");
    printf("Estado: %c\n",estado);
    printf("Código da carta: %s\n",código);
    printf("Cidade: %s\n",cidade);
    printf("População: %d\n",população);
    printf("Área: %2.f\n",área);
    printf("Pib: %.2f\n",pib);
    printf("Números de pontos turísticos: %d\n",nPT);




    
   return 0;



} 
