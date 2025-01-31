#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//JOGO SUPER TRUNFO AVENTUREIRO


int main ()
{
    //Declaração de variáveis
    char estado1[30], estado2[30];
    char codigoCarta1[3], codigoCarta2[3];
    char nomeCidade1[30], nomeCidade2[30];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    int selecaoEscolha;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    


    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.

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


    //Informar ao usuário que ele deve escolher um atributo de comparação e mostrar as opções disponíveis
    printf ("##### Selecione o atributo que deseja comparar em cada carta respectivamente #####\n");
    printf ("1. Atributo População\n");
    printf ("2. Atributo Área\n");
    printf ("3. Atributo PIB\n");
    printf ("4. Atributo Número de Pontos Turísticos\n");
    printf ("5. Atributo Densidade Populacional\n");
    printf ("6. Atributo PIB Per Capita\n");
    scanf ("%d", &selecaoEscolha);


    //Estrutura switch para comparação e lógica de escolha do atributo vencedor

    switch (selecaoEscolha)
    {
        case 1:
        if (populacao1 > populacao2){

            printf ("A primeira carta venceu com a população de %lu habitantes\n", populacao1);

        } else if (populacao2 > populacao1){

            printf ("A segunda carta venceu com a população de %lu habitantes\n", populacao2);

        } else{

            printf ("As populações são iguais ninguém venceu nessa rodada!\n");

        }
        break;

        case 2:
        if (area1 > area2){

            printf ("A primeira carta venceu com a área de %f km²\n", area1);

        } else if (area2 > area1){

            printf ("A segunda carta venceu com a área de %f km²\n", area2);

        } else{

            printf ("As áreas são iguais ninguém venceu nessa rodada!\n");

        }
        break;

        case 3:
        if (pib1 > pib2){

            printf ("A primeira carta venceu com PIB de %.2f\n", pib1);

        } else if (pib2 > pib1){

            printf ("A segunda carta venceu com PIB de %.2f\n", pib2);

        } else{

            printf ("Os PIBs são iguais ninguém venceu nessa rodada!\n");

        }
        break;

        case 4:
        if (pontosTuristicos1 > pontosTuristicos2){

            printf ("A primeira carta venceu com %d pontos turísticos\n", pontosTuristicos1);

        } else if (pontosTuristicos2 > pontosTuristicos1){

            printf ("A segunda carta venceu com %d pontos turísticos\n", pontosTuristicos2);

        } else{

            printf ("O n° de pontos turísticos é igual, ninguém venceu nessa rodada!\n");

        }
        break;

        case 5:
        if (densidadePopulacional1 < densidadePopulacional2){

            printf ("A primeira carta venceu com densidade populacional de %f\n", densidadePopulacional1);

        } else if (densidadePopulacional2 < densidadePopulacional1){

            printf ("A segunda carta venceu com densidade populacional de %f\n", densidadePopulacional2);

        } else{

            printf ("As densidades populacionais são iguais ninguém venceu nessa rodada!\n");

        }
        break;

        case 6:
        if (pibPerCapita1 > pibPerCapita2){

            printf ("A primeira carta venceu com pib de %f\n", pibPerCapita1);

        } else if (pibPerCapita2 > pibPerCapita1){

            printf ("A segunda carta venceu com pib de %f\n", pibPerCapita2);

        } else{

            printf ("Os PIB per capita são iguais ninguém venceu nessa rodada!\n");

        }
        break;

        default:

        printf ("Valor inválido!\n");

    }
}