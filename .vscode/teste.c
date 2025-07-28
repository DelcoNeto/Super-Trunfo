#include <stdio.h>

int main() {
    char Estado = 'A';
    char Carta[50] = "B02";
    char Cidade[50] = "Natal";
    int Populacão = 27000;
    float Área = 195000; 
    float PIB = 385000;
    int Turismo = 27;

    
    
    printf("Digite o nome do Estado:%c", Estado);

    printf("Digite o código da carta:%s", Carta);

    printf("Digite o nome da cidade:%s", Cidade);

    printf("Digite a populacão:%d", Populacão);
    
    printf("Digite Área em km²:%f", Área);
   
    printf("Digite o PIB:%f", PIB);
 
    printf("Digite a quantidade de pontos turísticos:%d", Turismo);

    printf("Estado:%c\nCarta:%s\nNome da Cidade:%s\nPopulacão:%d\nÁrea:%.2f km²\nPIB:%.2f bilhões de reais\nNúmero de pontos turistico:%d\n",Estado,Carta,Cidade,Populacão,Área,PIB,Turismo);

    float densidade = (float) Populacão / Área;
    printf("Densidade populaional:%.2f hab/km²\n", densidade);

    float capita = (float) Populacão / PIB;
    printf("Pib per capita:%.2f reais", capita);
