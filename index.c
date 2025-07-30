#include <stdio.h>

int main()
{
 char estado[10], codigoDaCarta[20], nomeDaCidade[50];
    int populacao, numeroPontoTuristico;
    float area, pib;
    float dArea, pibCap;

    printf("Carta 1\n");

    printf("Digite o estado: ");
    scanf("%s", estado);

    printf("Digite o código: ");
    scanf("%s", codigoDaCarta);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeDaCidade);

    printf("Digite o tamanho da população: ");
    scanf("%d", &populacao);

    printf("Digite o tamanho da área: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numeroPontoTuristico);

    dArea = populacao / area;
    pibCap = (pib * 1000000000) / (float)populacao;

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigoDaCarta);
    printf("Nome da Cidade: %s\n", nomeDaCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numeroPontoTuristico);
    printf("Densidade Populacional: %.2f hab/km²\n", dArea);
    printf("PIB per Capita: %.2f reais\n", pibCap);

    printf("\nCarta 2\n");

    printf("Digite o estado: ");
    scanf("%s", estado);

    printf("Digite o código: ");
    scanf("%s", codigoDaCarta);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeDaCidade);

    printf("Digite o tamanho da população: ");
    scanf("%d", &populacao);

    printf("Digite o tamanho da área: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numeroPontoTuristico);

    dArea = populacao / area;
   pibCap = (pib * 1000000000) / (float)populacao;

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigoDaCarta);
    printf("Nome da Cidade: %s\n", nomeDaCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numeroPontoTuristico);
    printf("Densidade Populacional: %.2f hab/km²\n", dArea);
    printf("PIB per Capita: %.2f reais\n", pibCap);
    return 0;
}
