#include <stdio.h>


int main() {
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int numero_de_pontos_turisticos1, numero_de_pontos_turisticos2;
    float densidade_Populacional1, densidade_populacional2;
    float PIB_per_Capita1, PIB_per_Capita2;
    float Super_Poder1 , Super_Poder2 ;

    // Dados da carta 1
    printf("Carta 1 :\n");

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite a área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos1);

    // Dados da carta 2
    printf("\nCarta 2 :\n");

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos2);

    // novos dados
    densidade_Populacional1 = populacao1 / area1;
    densidade_populacional2 = populacao2 / area2;
    PIB_per_Capita1 = (pib1 * 1000000000)/populacao1;
    PIB_per_Capita2 = (pib2 * 1000000000)/populacao2;
    float densidade1 = 1/densidade_Populacional1;
    float densidade2 = 1/densidade_populacional2;
    Super_Poder1 = populacao1 + area1 + pib1 + numero_de_pontos_turisticos1 + densidade1 + PIB_per_Capita1;
    Super_Poder2 = populacao2 + area2 + pib2 + numero_de_pontos_turisticos2 + densidade2 + PIB_per_Capita2;
    
    //dados da carta 1
    printf("\nCarta 1 :\n");
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_Populacional1);
    printf("PIB per capita: %.2f reais\n", PIB_per_Capita1);
    printf("Super Poder: %.2f\n" , Super_Poder1);

    //dados da carta 2
    printf("\nCarta 2 :\n");
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per capita: %.2f reais\n", PIB_per_Capita2);
    printf("Super Poder: %.2f \n" , Super_Poder2 );

    //comparaçao das cartas
    int resultado1 = populacao1 > populacao2 ;
    int resultado2 = area1 > area2 ;
    int resultado3 = pib1 > pib2 ;
    int resultado4 = numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2 ;
    int resultado5 = densidade1 > densidade2;
    int resultado6 = PIB_per_Capita1 > PIB_per_Capita2 ;
    int resultado7 = Super_Poder1 > Super_Poder2 ;

    printf("\nComparação\n");

    printf("População: Carta 1 venceu (%d)\n" , resultado1);
    printf("Área: Carta 1 venceu (%d)\n" , resultado2);
    printf("PIB: Carta 1 venceu (%d)\n" , resultado3);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", resultado4);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", resultado5);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", resultado6);
    printf("Super Poder: Carta 1 venceu (%d)\n", resultado7);

    return 0;
}