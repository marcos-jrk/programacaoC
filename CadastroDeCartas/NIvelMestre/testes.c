#include <stdio.h>

int main(){

    char estado1, estado2;
    char codCarta1[4], codCarta2[4];
    char cidade1[15], cidade2[15];
    int populacao1, populacao2;
    int turismo1, turismo2;
    float area1, area2;
    float PIB1, PIB2;
    float densPopulacional1, densPopulacional2;
    float PIBperCapita1, PIBperCapita2;
    float SuperPoder1, SuperPoder2;

//recolher os valores da carta 1

        printf("Carta 1: Estado: \n");
        scanf(" %c", &estado1);
        
        printf("Carta 1: Codigo da carta: \n");
        scanf("%s", codCarta1);

        printf("Carta 1: Nome da cidade: \n");
        scanf("%s", cidade1);
        
        printf("Carta 1: População: \n");
        scanf("%d", &populacao1);
        
        printf("Carta 1: Area em km²: \n");
        scanf("%f", &area1);
        
        printf("Carta 1: PIB: \n");
        scanf("%f", &PIB1);
        
        printf("Carta 1: Numero de pontos turisticos: \n");
        scanf("%d", &turismo1);

//recolher os valores da carta 2

        printf("Carta 2: Estado: \n");
        scanf(" %c", &estado2);
        
        printf("Carta 2: Codigo da carta: \n");
        scanf("%s", codCarta2);

        printf("Carta 2: Nome da cidade: \n");
        scanf("%s", cidade2);
        
        printf("Carta 2: População: \n");
        scanf("%d", &populacao2);
        
        printf("Carta 2: Area em km²: \n");
        scanf("%f", &area2);
        
        printf("Carta 2: PIB: \n");
        scanf("%f", &PIB2);
        
        printf("Carta 2: Numero de pontos turisticos: \n");
        scanf("%d", &turismo2);

//calcular densidade populacional e pib per capita

    densPopulacional1 = populacao1 / area1;
    densPopulacional2 = populacao2 / area2;
    PIBperCapita1 = PIB1 / populacao1;
    PIBperCapita2 = PIB2 / populacao2;

//calcular o super poder

    SuperPoder1 =(float)populacao1 + area1 + PIB1 + turismo1 + PIBperCapita1 + (densPopulacional1 * -1);

//printar o super poder

        printf("A densidade populacional é: %.2f\n", densPopulacional1);
        printf("O PIB per capita é: %.2f\n", PIBperCapita1);
        printf("O super poder da carta é: %.2f\n", SuperPoder1);
        
        printf("A carta de %s venceu?: %d\n", cidade1, SuperPoder1 > SuperPoder2);

return 0;

}