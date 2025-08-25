#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    //declaração das variáveis a serem utilizadas durante o código
    char estadocarta1, estadocarta2;              
    char codigocarta1[20], codigocarta2[20];
    char cidadecarta1[20], cidadecarta2[20];
    int populacaocarta1, populacaocarta2;
    float areacarta1, areacarta2;
    float pibcarta1, pibcarta2;
    int turisticoscarta1, turisticoscarta2;


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
    scanf("%d", &populacaocarta1);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &areacarta1);

    printf("Digite o PIB (Produto Interno Bruto): ");
    scanf("%f", &pibcarta1);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &turisticoscarta1);

    printf("\n** Agora vamos cadastrar a 2º carta **\n");   //informação do cadastramento da 2º carta

    //solicitação dos dados da 2º carta ao usuário

    printf("\nDigite uma letra para representar o estado: ");   
    scanf(" %c", &estadocarta2);

    printf("Digite o código da carta: ");
    scanf("%s", codigocarta2);

    printf ("Digite o nome da cidade: ");
    scanf("%s", cidadecarta2);

    printf("Digite a população total: ");
    scanf("%d", &populacaocarta2);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &areacarta2);

    printf("Digite o PIB (Produto Interno Bruto): ");
    scanf("%f", &pibcarta2);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &turisticoscarta2);

    printf("\n** AGORA VAMOS VER O RESULTADO DAS CARTAS CADASTRADAS **\n");     //mensagem de finalização do cadastramento

    //visualização das cartas cadastradas

    printf("\nCarta 1: \n");
    printf("Estado: %c \n", estadocarta1);
    printf("Código: %c%s \n", estadocarta1, codigocarta1);    //impressão da letra representativa do estado junto ao código da carta
    printf("Nome da cidade: %s \n", cidadecarta1);
    printf("População: %d \n", populacaocarta1);
    printf("Área: %.2f Km²\n", areacarta1);
    printf("PIB: %.2f bilhões de reais\n", pibcarta1);
    printf("Número de pontos turísticos: %d \n", turisticoscarta1);

    printf("\nCarta 2: \n");
    printf("Estado: %c \n", estadocarta2);
    printf("Código: %c%s \n", estadocarta2, codigocarta2);    //impressão da letra representativa do estado junto ao código da carta
    printf("Nome da cidade: %s \n", cidadecarta2);
    printf("População: %d \n", populacaocarta2);
    printf("Área: %.2f Km²\n", areacarta2);
    printf("PIB: %.2f bilhões de reais\n", pibcarta2);
    printf("Número de pontos turísticos: %d \n", turisticoscarta2);

    return 0;
}
