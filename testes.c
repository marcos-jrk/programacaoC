#include <stdio.h>

int main(){

int populacao1, populacao2;
float area1, area2;
float PIB1, PIB2;
float desPopulacional1, denPopulacional2;
float PIBperCapita1, PIBperCapita2;



    printf("População: \n");
    scanf("%d", &populacao1);
        
    printf("Area em km²: \n");
    scanf("%f", &area1);
        
    printf("PIB: \n");
    scanf("%f", &PIB1);

    desPopulacional1 = populacao1 / area1;
    PIBperCapita1 = PIB1 / populacao1;

    printf("Densidade Populacional: %.2f hab/km² \n", desPopulacional1);
    printf("PIB per Capita: %2.f reais \n", PIBperCapita1);

return 0;

}