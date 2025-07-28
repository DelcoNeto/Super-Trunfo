#include <stdio.h>

int main() {
    char Estado = 'C';
    char Carta[50] = "A01";
    char Cidade[50] = "Fortaleza";
    int Populacão = 13000;
    float Área = 150000; 
    float PIB = 250000;
    int Turismo = 51;

    
    
    printf("Digite o nome do Estado:");
    scanf("%c",&Estado);

    printf("Digite o código da carta:");
    scanf("%s",Carta);

    printf("Digite o nome da cidade:");
    scanf("%s",Cidade);

    printf("Digite a populacão:");
    scanf("%d",&Populacão);
    
    printf("Digite Área em km²:");
    scanf("%f",&Área);
   
    printf("Digite o PIB:");
    scanf("%f",&PIB);
 
    printf("Digite a quantidade de pontos turísticos:");
    scanf("%d",&Turismo);
    

    printf("Estado:%c\nCarta:%s\nNome da Cidade:%s\nPopulacão:%d\nÁrea:%.2f km²\nPIB:%.2f bilhões de reais\nNúmero de pontos turistico:%d\n",Estado,Carta,Cidade,Populacão,Área,PIB,Turismo);

     float densidade = (float) Populacão / Área;
    printf("Densidade populaional:%.2f hab/km²\n", densidade);

    float capita = (float) Populacão / PIB;
    printf("PIB per capita:%.2f reais", capita);



    
}
