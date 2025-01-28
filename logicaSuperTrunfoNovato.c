#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    char estado1[30], estado2[30];
    char codigoCarta1[3], codigoCarta2[3];
    char nomeCidade1[30], nomeCidade2[30];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;


    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    //Entrada de dados primeira carta
    printf ("Digite o estado da primeira carta:\n");
    scanf (" %s", &estado1);
    printf ("Digite o código da primeira carta: \n");
    scanf (" %s", &codigoCarta1);
    printf ("Digite o nome da cidade da primeira carta: \n");
    scanf (" %s", &nomeCidade1);
    printf ("Digite a população da primeira carta: \n");
    scanf ("%lu", &populacao1);
    printf ("Digite a área da primeira carta (em km²)\n");
    scanf ("%f", &area1);
    printf ("Digite o PIB para a primeira carta: \n");
    scanf ("%f", &pib1);
    printf ("Digite o número de pontos turísticos para a primeira carta: \n");
    scanf ("%d", &pontosTuristicos1);

    //Entrada de dados segunda carta
    printf ("Digite o estado da segunda carta:\n");
    scanf (" %s", &estado2);
    printf ("Digite o código da segunda carta: \n");
    scanf (" %s", &codigoCarta2);
    printf ("Digite o nome da cidade da segunda carta: \n");
    scanf (" %s", &nomeCidade2);
    printf ("Digite a população da segunda carta: \n");
    scanf ("%lu", &populacao2);
    printf ("Digite a área da segunda carta (em km²)\n");
    scanf ("%f", &area2);
    printf ("Digite o PIB para a segunda carta: \n");
    scanf ("%f", &pib2);
    printf ("Digite o número de pontos turísticos para a segunda carta: \n");
    scanf ("%d", &pontosTuristicos2);


    //Cálculo de Densidade Demográfica para a primeira e segunda cartas
    densidadePopulacional1 = (float) populacao1 / area1;
    densidadePopulacional2 = (float) populacao2 / area2;

    //Cáculo PIB per capita para a primeira e segunda cartas
    pibPerCapita1 = pib1 / (float)populacao1;
    pibPerCapita2 = pib2 / (float)populacao2;


    //Exibição dos valores digitados para população

    printf ("A população da primeira carta é:  %lu\n", populacao1);
    printf ("A população da segunda carta é:  %lu\n", populacao2);


    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    if (populacao1 > populacao2){

        printf ("A pripriedade população da primeira carta á maior, portanto, a primeira carta venceu!");

    } else {

        printf ("A propriedade população da segunda carta é maior, portanto, a segunda carta venceu!");

    }

    return 0;
}
