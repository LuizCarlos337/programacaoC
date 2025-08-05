#include <stdio.h>

int main() {
    // Dados da Carta 1
    char estado[50], codigoDaCarta[20], nomeDaCidade[50];
    unsigned long int populacao;
    int numeroPontoTuristico;
    float area, pib;
    float dArea, pibCap, superPoder;

    // Dados da Carta 2
    char estado2[50], codigoDaCarta2[20], nomeDaCidade2[50];
    unsigned long int populacao2;
    int numeroPontoTuristico2;
    float area2, pib2;
    float dArea2, pibCap2, superPoder2;

    // Entrada Carta 1
    printf("Carta 1\n");
    printf("Digite o estado: ");
    scanf(" %[^\n]", estado);
    printf("Digite o código: ");
    scanf("%s", codigoDaCarta);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeDaCidade);
    printf("Digite o tamanho da população: ");
    scanf("%lu", &populacao);
    printf("Digite o tamanho da área: ");
    scanf("%f", &area);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numeroPontoTuristico);

    // Cálculos Carta 1
    dArea = populacao / area;
    pibCap = (pib * 1000000000.0) / (float)populacao;
    superPoder = populacao + area + pib + numeroPontoTuristico + pibCap + (1.0 / dArea);

    // Entrada Carta 2
    printf("\nCarta 2\n");
    printf("Digite o estado: ");
    scanf(" %[^\n]", estado2);
    printf("Digite o código: ");
    scanf("%s", codigoDaCarta2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeDaCidade2);
    printf("Digite o tamanho da população: ");
    scanf("%lu", &populacao2);
    printf("Digite o tamanho da área: ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numeroPontoTuristico2);

    // Cálculos Carta 2
    dArea2 = populacao2 / area2;
    pibCap2 = (pib2 * 1000000000.0) / (float)populacao2;
    superPoder2 = populacao2 + area2 + pib2 + numeroPontoTuristico2 + pibCap2 + (1.0 / dArea2);

    // Menu de comparação
    int opcao;
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Escolha uma opção (1 a 5): ");
    scanf("%d", &opcao);

    printf("\nComparando cartas...\n");

    switch(opcao) {
        case 1: 
            printf("Atributo: População\n");
            printf("%s: %lu\n", nomeDaCidade, populacao);
            printf("%s: %lu\n", nomeDaCidade2, populacao2);
            if (populacao > populacao2) {
                printf("Vencedor: %s\n", nomeDaCidade);
            } else if (populacao2 > populacao) {
                printf("Vencedor: %s\n", nomeDaCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: 
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", nomeDaCidade, area);
            printf("%s: %.2f km²\n", nomeDaCidade2, area2);
            if (area > area2) {
                printf("Vencedor: %s\n", nomeDaCidade);
            } else if (area2 > area) {
                printf("Vencedor: %s\n", nomeDaCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: 
            printf("Atributo: PIB\n");
            printf("%s: R$%.2f bilhões\n", nomeDaCidade, pib);
            printf("%s: R$%.2f bilhões\n", nomeDaCidade2, pib2);
            if (pib > pib2) {
                printf("Vencedor: %s\n", nomeDaCidade);
            } else if (pib2 > pib) {
                printf("Vencedor: %s\n", nomeDaCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: 
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d\n", nomeDaCidade, numeroPontoTuristico);
            printf("%s: %d\n", nomeDaCidade2, numeroPontoTuristico2);
            if (numeroPontoTuristico > numeroPontoTuristico2) {
                printf("Vencedor: %s\n", nomeDaCidade);
            } else if (numeroPontoTuristico2 > numeroPontoTuristico) {
                printf("Vencedor: %s\n", nomeDaCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: 
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", nomeDaCidade, dArea);
            printf("%s: %.2f hab/km²\n", nomeDaCidade2, dArea2);
            if (dArea < dArea2) {
                printf("Vencedor: %s\n", nomeDaCidade);
            } else if (dArea2 < dArea) {
                printf("Vencedor: %s\n", nomeDaCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Escolha um número de 1 a 5.\n");
            break;
    }

    return 0;
}
