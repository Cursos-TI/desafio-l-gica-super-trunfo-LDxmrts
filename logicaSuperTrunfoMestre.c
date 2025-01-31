#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//JOGO SUPER TRUNFO MESTRE

int main ()
{

    //Declaração de variáveis
    char estado1[30], estado2[30];
    char codigoCarta1[3], codigoCarta2[3];
    char nomeCidade1[30], nomeCidade2[30];
    unsigned long int populacao1, populacao2;
    float area1, area2, comparaArea;
    float pib1, pib2, comparaPib;
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
        printf ("Você selecionou o atributo População!\n");
        //Aninhamento para verificar se os números são diferentes
        if (populacao1 != populacao2){
            //Operação ternária para verificar qual atributo é maior e declarar o vencedor
            (populacao1 > populacao2) ? printf ("A primeira carta venceu com a população de %lu habitantes!\n", populacao1) : printf ("A segunda carta venceu com a população de %lu habitantes!\n", populacao2);
        
        }else{
            //Caso os números sejam iguais o else vai declarar empate e nenhum vencedor
            printf ("Empate! Ninguém venceu nessa rodada!\n");

        }
        break;
        case 2:
        printf ("Você selecionou o atributo Área!\n");
        //Aninhamento para verificar se os números são diferentes
        if (area1 != area2){
            //Operação ternária para verificar qual atributo é maior e declarar o vencedor
            (area1 > area2) ? printf ("A primeira carta venceu com a área de %.2f km²!\n", area1) : printf ("A segunda carta venceu com a área de %.2f km²!\n", area2);

        }else{
            //Caso os números sejam iguais o else vai declarar empate e nenhum vencedor
            printf ("Empate! Ninguém venceu nessa rodada!\n");

        } 
        break; 
        case 3:
        printf ("Você selecionou o atributo PIB!\n");
        //Aninhamento para verificar se os números são diferentes
        if (pib1 != pib2){
            //Operação ternária para verificar qual atributo é maior e declarar o vencedor
            (pib1 > pib2) ? printf ("A primeira carta venceu com pib de %.2f!\n", pib1) : printf ("A segunda carta venceu com pib de %.2f!\n", pib2);

        }else{
            //Caso os números sejam iguais o else vai declarar empate e nenhum vencedor
            printf ("Empate! Ninguém venceu nessa rodada!\n");

        }
        break;
        case 4:
        printf ("Você selecionou o atributo Pontos Turísticos!\n");
        //Aninhamento para verificar se os números são diferentes
        if (pontosTuristicos1 != pontosTuristicos2){
            //Operação ternária para verificar qual atributo é maior e declarar o vencedor
            (pontosTuristicos1 > pontosTuristicos2) ? printf ("A primeira carta venceu com %d pontos turísticos!\n", pontosTuristicos1) : printf ("A segunda carta venceu com %d pontos turísticos!\n", pontosTuristicos2);

        }else{
            //Caso os números sejam iguais o else vai declarar empate e nenhum vencedor
            printf ("Empate! Ninguém venceu nessa rodada!\n");

        }
        break;
        case 5:
        printf ("Você selecionou o atributo Densidade Populacional!\n");
        //Aninhamento para verificar se os números são diferentes
        if (densidadePopulacional1 != densidadePopulacional2){
            //Operação ternária para verificar qual atributo é maior e declarar o vencedor
            (densidadePopulacional1 < densidadePopulacional2) ? printf ("A primeira carta venceu com densidade populacional de: %.2f!\n", densidadePopulacional1) : printf ("A segunda carta venceu com densidade populacional de: %.2f!\n", densidadePopulacional2);

        }else{
            //Caso os números sejam iguais o else vai declarar empate e nenhum vencedor
            printf ("Empate! Ninguém venceu nessa rodada!\n");

        }
        break;
        case 6:
        printf ("Você selecionou o atributo PIB Per Capita!\n");
        //Aninhamento para verificar se os números são diferentes
        if (pibPerCapita1 != pibPerCapita2){
            //Operação ternária para verificar qual atributo é maior e declarar o vencedor
            (pibPerCapita1 > pibPerCapita2) ? printf ("A primeira carta venceu com PIB Per Capita de: %f\n", pibPerCapita1) : printf ("A segunda carta venceu com com PIB Per Capita de: %f\n", pibPerCapita2);

        }else{
            //Caso os números sejam iguais o else vai declarar empate e nenhum vencedor
            printf ("Empate! Ninguém venceu nessa rodada!\n");

        }
        break;
        //Ação padrão em caso do número ser inválido e não estar listado
        default:

        printf ("Opção inválida!\n");

    }
}