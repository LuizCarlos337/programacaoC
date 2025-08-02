#include <stdio.h>

int main() {
    // Dados da Carta 1
    char estado[10], codigoDaCarta[20], nomeDaCidade[50];
    unsigned long int populacao;
    int numeroPontoTuristico;
    float area, pib;
    float dArea, pibCap, superPoder;

    // Dados da Carta 2
    char estado2[10], codigoDaCarta2[20], nomeDaCidade2[50];
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

    // Exibição dos dados
    printf("\n--- Carta 1 ---\n");
    printf("População: %lu\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n", numeroPontoTuristico);
    printf("Densidade Populacional: %.2f\n", dArea);
    printf("PIB per Capita: %.2f\n", pibCap);
    printf("Super Poder: %.2f\n", superPoder);

    printf("\n--- Carta 2 ---\n");
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", numeroPontoTuristico2);
    printf("Densidade Populacional: %.2f\n", dArea2);
    printf("PIB per Capita: %.2f\n", pibCap2);
    printf("Super Poder: %.2f\n", superPoder2);
    
    // Variaveis de Comparações
    int resultadoPopulacao = populacao > populacao2;
    int resultadoArea = area > area2;
    int resultadoPib = pib > pib2;
    int resultadoPontoTuristico = numeroPontoTuristico > numeroPontoTuristico2;
    int resultadoDenArea = dArea < dArea2;
    int resultadoPibCap = pibCap > pibCap2;
    int resultadoSuperPoder = superPoder > superPoder2;

    // Comparações
    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", resultadoPopulacao);
    printf("Área: Carta 1 venceu (%d)\n", resultadoArea);
    printf("PIB: Carta 1 venceu (%d)\n", resultadoPib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", resultadoPontoTuristico);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", resultadoDenArea);  
    printf("PIB per Capita: Carta 1 venceu (%d)\n", resultadoPibCap);
    printf("Super Poder: Carta 1 venceu (%d)\n", resultadoSuperPoder);

    return 0;
}
