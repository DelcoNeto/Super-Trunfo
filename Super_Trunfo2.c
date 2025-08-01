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

    printf("Carta 1:\n");
    float densidade1 = (float) populacao1 / area1;
    printf("Densidade populacional:%.2f hab/km²\n", densidade1);

    float percapita1 = (float) populacao1 / pib1;
    printf("PIB per capita:%.2f reais\n", percapita1);

    float superPoder1 = (float) populacao1 + area1 + pib1 + turismo1 + percapita1 + (1 / densidade1);
    printf("Super Poder:%.2f\n\n", superPoder1);
    printf("Carta 2:\n");
    float densidade2 = (float) populacao2/ area2;
    printf("Densidade populacional:%.2f hab/km²\n", densidade2);

    float percapita2 = (float) populacao2 / pib2;
    printf("PIB per capita:%.2f reais\n", percapita2);

    float superPoder2 = (float) populacao2 + area2 + pib2 + turismo2 + percapita2 + (1 / densidade2);
    printf("Super Poder:%.2f\n\n", superPoder2);

        printf("Comparacão de Cartas(Atributo:Populacão)\n\n");
        printf("Carta 1 - Fortaleza (CE):%u\n", populacao1);
        printf("Carta 2 - Natal (RN):%u\n", populacao2);

    if (populacao1 > populacao2){
        printf("Resultado: Carta 1 (Fortaleza) perdeu.\n");
    } else {
        printf("Resultado: Carta 2 (Natal) venceu.\n\n");
    }
    
        printf("Comparacão de Cartas(Atributo:Área )\n\n");
        printf("Carta 1 - Fortaleza (CE):%.2f\n", area1);
        printf("Carta 2 - Natal (RN):%.2f\n", area2);
    

    if(area1 > area2){
        printf("Resultado: Carta 1 (Fortaleza) perdeu.\n");
    } else {
        printf("Resultado: Carta 2 (Natal) venceu.\n\n");
    }   

        printf("Comparacão de Cartas(Atributo:PIB)\n\n");
        printf("Carta 1 - Fortaleza (CE):%.2f\n", pib1);
        printf("Carta 2 - Natal (RN):%.2f\n", pib2);

    if(pib1 > pib2){
        printf("Resultado: Carta 1 (Fortaleza) perdeu.\n");
    } else{
        printf("Resultado: Carta 2 (Natal) venceu.");
    }
    



    
    
    
    
    
    }









