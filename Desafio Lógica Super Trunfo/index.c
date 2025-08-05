#include <stdio.h>

int main() {
    // Dados Carta 1
    char cidade1[50], estado1[50], cod1[20];
    unsigned long int pop1;
    float area1, pib1, densidade1;
    int attr1, pontos1;

    // Dados Carta 2
    char cidade2[50], estado2[50], cod2[20];
    unsigned long int pop2;
    float area2, pib2, densidade2;
    int attr2, pontos2;
    
   
    // Entrada Carta 1
    printf("Carta 1\n");
    printf("Estado: ");
    scanf(" %[^\n]", estado1);
    printf("Código: ");
    scanf("%s", cod1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("População: ");
    scanf("%lu", &pop1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos1);
    densidade1 = pop1 / area1;

    // Entrada Carta 2
    printf("\nCarta 2\n");
    printf("Estado: ");
    scanf(" %[^\n]", estado2);
    printf("Código: ");
    scanf("%s", cod2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%lu", &pop2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos2);
    densidade2 = pop2 / area2;

    

    // Menu 1
    printf("\nEscolha o 1º atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Opção: ");
    scanf("%d", &attr1);

    // Validação
    if (attr1 < 1 || attr1 > 5) {
        printf("Opção inválida!\n");
        return 1;
    }

    // Menu 2
    printf("\nEscolha o 2º atributo (diferente do primeiro):\n");

    if (attr1 != 1) printf("1 - População\n");
    if (attr1 != 2) printf("2 - Área\n");
    if (attr1 != 3) printf("3 - PIB\n");
    if (attr1 != 4) printf("4 - Pontos turísticos\n");
    if (attr1 != 5) printf("5 - Densidade demográfica\n");

    printf("Opção: ");
    scanf("%d", &attr2);

    if (attr2 < 1 || attr2 > 5 || attr2 == attr1) {
        printf("Opção inválida!\n");
        return 1;
    }

    // Obter os valores para cada carta
    float v1_attr1 = 0, v2_attr1 = 0;
    float v1_attr2 = 0, v2_attr2 = 0;

    if (attr1 == 1) {
        v1_attr1 = pop1;
        v2_attr1 = pop2;
    } else if (attr1 == 2) {
        v1_attr1 = area1;
        v2_attr1 = area2;
    } else if (attr1 == 3) {
        v1_attr1 = pib1;
        v2_attr1 = pib2;
    } else if (attr1 == 4) {
        v1_attr1 = pontos1;
        v2_attr1 = pontos2;
    } else if (attr1 == 5) {
        v1_attr1 = densidade1;
        v2_attr1 = densidade2;
    }

    if (attr2 == 1) {
        v1_attr2 = pop1;
        v2_attr2 = pop2;
    } else if (attr2 == 2) {
        v1_attr2 = area1;
        v2_attr2 = area2;
    } else if (attr2 == 3) {
        v1_attr2 = pib1;
        v2_attr2 = pib2;
    } else if (attr2 == 4) {
        v1_attr2 = pontos1;
        v2_attr2 = pontos2;
    } else if (attr2 == 5) {
        v1_attr2 = densidade1;
        v2_attr2 = densidade2;
    }

    // Comparação individual
    int pontosCarta1 = 0, pontosCarta2 = 0;

    // Atributo 1
    if (attr1 == 5) {
        if (v1_attr1 < v2_attr1) pontosCarta1++;
        else if (v2_attr1 < v1_attr1) pontosCarta2++;
    } else {
        if (v1_attr1 > v2_attr1) pontosCarta1++;
        else if (v2_attr1 > v1_attr1) pontosCarta2++;
    }

    // Atributo 2
    if (attr2 == 5) {
        if (v1_attr2 < v2_attr2) pontosCarta1++;
        else if (v2_attr2 < v1_attr2) pontosCarta2++;
    } else {
        if (v1_attr2 > v2_attr2) pontosCarta1++;
        else if (v2_attr2 > v1_attr2) pontosCarta2++;
    }

    // Soma
    float soma1 = v1_attr1 + v1_attr2;
    float soma2 = v2_attr1 + v2_attr2;

    // Resultado
    printf("\n--- COMPARAÇÃO ---\n");
    printf("%s vs %s\n", cidade1, cidade2);

    // Atributo 1
    printf("Atributo 1: ");
    switch(attr1) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos turísticos\n"); break;
        case 5: printf("Densidade demográfica\n"); break;
    }
    printf("  %s: %.2f\n", cidade1, v1_attr1);
    printf("  %s: %.2f\n", cidade2, v2_attr1);

    // Atributo 2
    printf("Atributo 2: ");
    switch(attr2) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos turísticos\n"); break;
        case 5: printf("Densidade demográfica\n"); break;
    }
    printf("  %s: %.2f\n", cidade1, v1_attr2);
    printf("  %s: %.2f\n", cidade2, v2_attr2);

    // Soma
    printf("\nSoma dos dois atributos:\n");
    printf("  %s: %.2f\n", cidade1, soma1);
    printf("  %s: %.2f\n", cidade2, soma2);

    if (soma1 > soma2)
        printf("\nVENCEDOR: %s\n", cidade1);
    else if (soma2 > soma1)
        printf("\nVENCEDOR: %s\n", cidade2);
    else
        printf("\nEmpate!\n");

    return 0;
}
