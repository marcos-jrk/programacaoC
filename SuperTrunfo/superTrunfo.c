#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // ###Área para definição das variáveis para armazenar as propriedades das cidades###

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


  //variaveis tem os mesmos nomes, só um numero no final para diferenciar a primeira e segunda carta

  // ###Área para entrada de dados###

printf("***Sistema de cadastro de cartas***\n");
//banner principal do sistema, irá se repetir durante as telas

//entradas de dados para a primeira carta, como as linhas se mantem na tela só irá pedir as informações especificamente da primera carta
    printf("Digite os dados da primeira carta:\n");
    
        printf("Estado: \n");
        scanf(" %c", &estado1);
        
        printf("Codigo da carta: \n");
        scanf("%s", codCarta1);

        printf("Nome da cidade: \n");
        scanf("%s", cidade1);
        
        printf("População: \n");
        scanf("%d", &populacao1);
        
        printf("Area em km²: \n");
        scanf("%f", &area1);
        
        printf("PIB: \n");
        scanf("%f", &PIB1);
        
        printf("Numero de pontos turisticos: \n");
        scanf("%d", &turismo1);

//agora recolhendo os dados para a segunda carta, novamente as informações ficam na tela então as linhas de printf só pedem o dado especifico

    printf("***Sistema de cadastro de cartas***\n");
//banner principal do sistema, irá se repetir durante as telas

    printf("Digite os dados da segunda carta:\n");
    
        printf("Estado: \n");
        scanf(" %c", &estado2);

        printf("Codigo da carta: \n");
        scanf("%s", codCarta2);

        printf("Nome da cidade: \n");
        scanf("%s", cidade2);

       printf("População: \n");
       scanf("%d", &populacao2);
       
       printf("Area em km²: \n");
       scanf("%f", &area2);
       
       printf("PIB: \n");
       scanf("%f", &PIB2);
       
       printf("Numero de pontos turisticos: \n");
       scanf("%d", &turismo2);


  // ###Área para calculo das variaveis de PIB per capita e densidade populacional e super poder###

    densPopulacional1 = populacao1 / area1;
    densPopulacional2 = populacao2 / area2;
    PIBperCapita1 = PIB1 / populacao1;
    PIBperCapita2 = PIB2 / populacao2;
    SuperPoder1 =(float)populacao1 + area1 + PIB1 + turismo1 + PIBperCapita1 + (densPopulacional1 * -1);
    SuperPoder2 =(float)populacao2 + area2 + PIB2 + turismo2 + PIBperCapita2 + (densPopulacional2 * -1);


  // ###Área para exibição dos dados da cidade###

printf("***Sistema de cadastro de cartas***\n");
//banner principal do sistema, irá se repetir durante as telas

    printf("Cadastro completo, seguem os dados abaixo. \n");

    printf("Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codCarta1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km² \n", area1);
    printf("PIB: R$ %.2f\n", PIB1);
    printf("Numero de pontos turisticos: %d\n", turismo1);
    printf("Densidade Populacional: %.2f hab/km² \n", densPopulacional1);
    printf("PIB per Capita: %.2f reais \n", PIBperCapita1);
    printf("*Super Poder*: %.2f \n", SuperPoder1);

    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codCarta2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área em Km²: %.3f\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Numero de pontos turisticos: %d\n", turismo2);
    printf("Densidade Populacional: %.2f hab/km² \n", densPopulacional2);
    printf("PIB per Capita: %.2f reais \n", PIBperCapita2);
    printf("*Super Poder*: %.2f \n", SuperPoder2);


//###Área de exibição da carta que ganhou###

    printf("A carta da cidade de %s venceu no super poder?: %d\n", cidade1, SuperPoder1 > SuperPoder2);
    printf("A carta da cidade de %s venceu na população?: %d\n", cidade1, populacao1 > populacao2);
    printf("A carta da cidade de %s venceu em área?: %d\n", cidade1, area1 > area2);
    printf("A carta da cidade de %s venceu em pontos turisticos?: %d\n", cidade1, turismo1 > turismo2);
    printf("A carta da cidade de %s venceu em densidade populacional?: %d\n", cidade1, densPopulacional1 < densPopulacional2);
    printf("A carta da cidade de %s venceu em PIB por Capita?: %d\n", cidade1, PIBperCapita1 > PIBperCapita2);


return 0;
} 