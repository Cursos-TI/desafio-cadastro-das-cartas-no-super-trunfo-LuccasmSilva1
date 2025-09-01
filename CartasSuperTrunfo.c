#include <stdio.h>


int main() {
    int populacao1 , populacao2;
    float area1 , area2;
    float pib1 , pib2;
    int numero_de_pontos_turisticos1 , numero_de_pontos_turisticos2;
//Carta 1 dados    
    printf("Carta 1 :\n");

    printf("digite a população: ");
    scanf("%d", &populacao1);

    printf("digite a area: ");
    scanf("%f",&area1);

    printf("digite o pib: ");
    scanf("%f",&pib1);

    printf("digite o numero de pontos turisticos: ");
    scanf("%d",&numero_de_pontos_turisticos1);

//carta 2 dados

    printf("Carta 2 :\n");

    printf("digite a população2: ");
    scanf("%d", &populacao2);

    printf("digite a area2: ");
    scanf("%f",&area2);

    printf("digite o pib2: ");
    scanf("%f",&pib2);

    printf("digite o numero de pontos turisticos2: ");
    scanf("%d",&numero_de_pontos_turisticos2);
    
//carta 1 pronta
    printf("Carta 1 :\n");
    printf("populaçao: %d\n",populacao1);
    printf("area: %f km²\n",area1);
    printf("pib :%f bilhões de reais\n",pib1);
    printf("numero de pontos turisticos: %d\n",numero_de_pontos_turisticos1);
//carta 2 pronta
    printf("Carta 2 :\n");
    printf("populaçao: %d\n",populacao2);
    printf("area: %f km²\n",area2);
    printf("pib :%f bilhões de reais\n",pib2);
    printf("numero de pontos turisticos: %d\n",numero_de_pontos_turisticos2);

    return 0;
}
