#include <stdio.h>

int main() {
    char estado[3], codigoDaCarta[20], nomeDaCidade[50];
    int populacao, numeroPontoTuristico;
    float area, pib;

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

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigoDaCarta);
    printf("Nome da Cidade: %s\n", nomeDaCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numeroPontoTuristico);


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

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigoDaCarta);
    printf("Nome da Cidade: %s\n", nomeDaCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numeroPontoTuristico);
    return 0;
}
