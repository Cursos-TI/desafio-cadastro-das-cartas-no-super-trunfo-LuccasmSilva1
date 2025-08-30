#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado;
    char codigo_da_carta[4];
    int populaçao;
    float area;
    float pib;
    int numero_de_pontos_turisticos;

    printf("Digite um estado:");
    scanf("%s", &estado);
    
    printf("digite o cogigo da carta:");
    scanf("%s", codigo_da_carta);

    printf("digite a população:");
    scanf("%d", &populaçao);

    printf("digite a area:%e");
    scanf("%f", &area);

    printf("digite o pib:%f");
    scanf("%f", &pib);

    print("digite o numero de pontos turisticos:%d", &numero_de_pontos_turisticos);
    scanf("%d", &numero_de_pontos_turisticos);
///carta 1
    printf("carta 1:/n -- estado:%d/n -- codigo da carta:%s/n", estado , codigo_da_carta );
    printf("população:%d/n -- area%e/n", populaçao, area );
    printf("pib:%f/n == numero de pontos turisticos:%d/n",pib ,numero_de_pontos_turisticos);


    return 0;
}
