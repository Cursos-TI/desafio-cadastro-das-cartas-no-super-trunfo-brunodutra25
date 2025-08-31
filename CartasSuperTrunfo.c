#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {

    //declaração das variáveis a serem utilizadas durante o código
    char estadocarta1, estadocarta2;
    char codigocarta1[20], codigocarta2[20];
    char cidadecarta1[20], cidadecarta2[20];
    unsigned long int populacaocarta1, populacaocarta2;
    float areacarta1, areacarta2;
    float pibcarta1, pibcarta2;
    int turisticoscarta1, turisticoscarta2;
    float densidadecarta1, densidadecarta2;
    float percapita1, percapita2;
    float superpoder1, superpoder2;

    printf ("Bem-vindos ao jogo de Super Trunfo! \n");  //mensagem inicial do jogo
    printf("\n** Vamos cadastrar a 1º carta **\n");     //mensagem informando o início do cadastramento da 1º carta

    //solicitação dos dados da 1º carta ao usuário

    printf("\nDigite uma letra para representar o estado: ");
    scanf(" %c", &estadocarta1);

    printf("Digite o código da carta: ");
    scanf("%s", codigocarta1);

    printf ("Digite o nome da cidade: ");
    scanf("%s", cidadecarta1);

    printf("Digite a população total: ");
    scanf("%u", &populacaocarta1);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &areacarta1);

    printf("Digite o PIB (Produto Interno Bruto): ");
    scanf("%f", &pibcarta1);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &turisticoscarta1);

    densidadecarta1 =  populacaocarta1 / areacarta1;            //cálculo da densidade populacional
    percapita1 = (pibcarta1 * 1000000000) / populacaocarta1;    //cálculo do PIB per capita

    //Cálculo do Super Poder da carta 1

    superpoder1 = (float) populacaocarta1 + areacarta1 + pibcarta1 + percapita1 + (1/densidadecarta1) + (float) turisticoscarta1;

    printf("\n** Agora vamos cadastrar a 2º carta **\n");   //informação do cadastramento da 2º carta

    //solicitação dos dados da 2º carta ao usuário

    printf("\nDigite uma letra para representar o estado: ");
    scanf(" %c", &estadocarta2);

    printf("Digite o código da carta: ");
    scanf("%s", codigocarta2);

    printf ("Digite o nome da cidade: ");
    scanf("%s", cidadecarta2);

    printf("Digite a população total: ");
    scanf("%u", &populacaocarta2);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &areacarta2);

    printf("Digite o PIB (Produto Interno Bruto): ");
    scanf("%f", &pibcarta2);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &turisticoscarta2);

    densidadecarta2 = populacaocarta2 / areacarta2;             //cálculo da densidade populacional
    percapita2 = (pibcarta2 * 1000000000) / populacaocarta2;    //cálculo do PIB per capita

    //Cálculo do Super Poder da carta 2

    superpoder2 = (float) populacaocarta2 + areacarta2 + pibcarta2 + percapita2 + (1/densidadecarta2) + (float) turisticoscarta2;

    printf("\n** AGORA VAMOS VER O RESULTADO DAS CARTAS CADASTRADAS **\n");     //mensagem de finalização do cadastramento

    //visualização das cartas cadastradas

    printf("\nCarta 1: \n");
    printf("Estado: %c \n", estadocarta1);
    printf("Código: %c%s \n", estadocarta1, codigocarta1);    
    printf("Nome da cidade: %s \n", cidadecarta1);
    printf("População: %u \n", populacaocarta1);
    printf("Área: %.2f Km²\n", areacarta1);
    printf("PIB: %.2f bilhões de reais\n", pibcarta1);
    printf("Número de pontos turísticos: %d \n", turisticoscarta1);
    printf("Densidade populacional: %.2f hab/km² \n", densidadecarta1);
    printf("PIB per capita: %.2f reais \n", percapita1);
    printf("Super poder: %f \n", superpoder1);

    printf("\nCarta 2: \n");
    printf("Estado: %c \n", estadocarta2);
    printf("Código: %c%s \n", estadocarta2, codigocarta2);    
    printf("Nome da cidade: %s \n", cidadecarta2);
    printf("População: %u \n", populacaocarta2);
    printf("Área: %.2f Km²\n", areacarta2);
    printf("PIB: %.2f bilhões de reais\n", pibcarta2);
    printf("Número de pontos turísticos: %d \n", turisticoscarta2);
    printf("Densidade populacional: %.2f hab/km² \n", densidadecarta2);
    printf("PIB per capita: %.2f reais \n", percapita2);
    printf("Super poder: %f \n", superpoder2);

    //Comparação das duas cartas

    printf("\n** Comparação das Cartas **\n");
    printf("\nPopulação: Carta 1 venceu (%d)\n", populacaocarta1 > populacaocarta2);
    printf("Área: Carta 1 venceu (%d)\n", areacarta1 > areacarta2);
    printf("PIB: Carta 1 venceu (%d)\n", pibcarta1 > pibcarta2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", turisticoscarta1 > turisticoscarta2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadecarta1 < densidadecarta2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", percapita1 > percapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);

    return 0;
}