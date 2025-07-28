#include <stdio.h>

int main() {
    char estado1 = 'A';
    char estado2 = 'B';
    char codigo1[20] = "A01";
    char codigo2[50] = "B02";
    char cidade1[50] = "Fortaleza";
    char cidade2[50] = "Natal";
    unsigned long int populacao1 = 13000;
    unsigned long int populacao2 = 21000;
    float area1 = 1200;
    float area2 = 2100;
    float pib1 = 250000;
    float pib2 = 355000;
    int turismo1 = 51;
    int turismo2 = 33;
    
    int resultado1, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7;

    printf("Digite o Estado da carta UM:\n" );
    scanf("%c", &estado1);

    printf("Digite o Estado da carta Dois:\n" );
    scanf(" %c",&estado2);

    printf("Digite o Código da carta um:\n" );
    scanf("%s",codigo1);
    
    printf("Digite o Código da carta Dois:\n");
    scanf("%s",codigo2);

    printf("Digite o nome da cidade da carta Um:\n");
    scanf("%s", cidade1);

    printf("Digite o nome da cidade da carta Dois:\n");
    scanf("%s", cidade2);
    
    printf("Digite a quantidade populacional da carta Um:\n");
    scanf("%u",&populacao1);

    printf("Digite a quantidade populacional da carta Dois:\n" );
    scanf("%u",&populacao2);
    
    printf("Digite o tamanho da Área em km² da carta Um:\n");
    scanf("%f",&area1);
    printf("Digite o tamanho da Área em km² da carta Dois:\n" );
    scanf("%f", &area2);
   
    printf("Digite o PIB da carta Um:\n");
    scanf("%f",&pib1);

    printf("Digite o PIB da carta Dois:\n");
    scanf("%f",&pib2);

    printf("Digite a quantidade de pontos turísticos da carta Um:\n");
    scanf("%d",&turismo1);

    printf("Digite a quantidade de pontos turísticos da carta Dois:\n");
    scanf("%d",&turismo2);

    printf("Carta UM:\nEstado: %c\nCódigo: %s\nCidade: %s\nPopulacão: %u\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de pontos turisticos: %d\n",estado1,codigo1,cidade1,populacao1,area1,pib1,turismo1);
    
    float densidade1 = (float) populacao1 / area1;
    printf("Densidade populacional:%.2f hab/km²\n", densidade1);

    float percapita1 = (float) populacao1 / pib1;
    printf("PIB per capita:%.2f reais\n", percapita1);

    float superPoder1 = (float) populacao1 + area1 + pib1 + turismo1 + percapita1 + (1 / densidade1);
    printf("Super Poder:%.2f\n\n", superPoder1);
     
    printf("Carta Dois:\nEstado: %c\nCódigo: %s\nCidade: %s\nPopulacão: %u\nÁrea: %.2f km²\nPIb: %.2f bilhões de reais\nNúmero de pontos turisticos: %d\n",estado2,codigo2,cidade2,populacao2,area2,pib2,turismo2);
   
    float densidade2 = (float) populacao2/ area2;
    printf("Densidade populacional:%.2f hab/km²\n", densidade2);

    float percapita2 = (float) populacao2 / pib2;
    printf("PIB per capita:%.2f reais\n", percapita2);

    float superPoder2 = (float) populacao2 + area2 + pib2 + turismo2 + percapita2 + (1 / densidade2);
    printf("Super Poder:%.2f\n\n", superPoder2);

    printf("***Resultado da Comparacão das Cartas***:\n\n");

    resultado1 = populacao1 > populacao2;
    printf("Populacão: Carta Dois venceu (%d)\n", resultado1);

    resultado2 = area1 > area2;
    printf("Área: Carta Dois venceu (%d)\n", resultado2);

    resultado3 = pib1 > pib2;
    printf("PIB: Carta Dois venceu  (%d)\n", resultado3);

    resultado4 = turismo1 > turismo2;
    printf("Pontos Turísticos: Carta Um venceu (%d)\n", resultado4);

    resultado5 = densidade1 < densidade2;
    printf("Densidade Populacional: Carta Dois venceu (%d)\n", resultado5);

    resultado6 = percapita1 > percapita2;
    printf("PIB per capita: Carta Dois venceu (%d)\n", resultado6);

    resultado7 = superPoder1 > superPoder2;
    printf("Super Poder: Carta Dois venceu (%d)\n", resultado7);

    





return 0;

}
