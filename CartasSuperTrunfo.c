#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado;
    char codigo_da_carta[4];
    int populacao;
    float area;
    float pib;
    int numero_de_pontos_turisticos;

    printf("Digite um estado:");
    scanf("%s", &estado);
    
    printf("digite o cogigo da carta:");
    scanf("%s", &codigo_da_carta);

    printf("digite a população:");
    scanf("%d", &populacao);

    printf("digite a area:");
    scanf("%f", &area);

    printf("digite o pib:");
    scanf("%f", &pib);

    printf("digite o numero de pontos turisticos");
    scanf("%d", &numero_de_pontos_turisticos);

    printf("estado: %d\n -- codigo da carta: %s\n", estado, codigo_da_carta);
    printf("população: %d\n -- area: %e\n", populacao, area);
    printf("pib: %f\n -- numero de pontos turisticos: %d\n", pib, numero_de_pontos_turisticos);


    return 0;
}
