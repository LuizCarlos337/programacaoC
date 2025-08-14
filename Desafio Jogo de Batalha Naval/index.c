#include <stdio.h>

#define TAM 10   // tamanho do tabuleiro
#define NAVIO 3  // tamanho fixo dos navios

// Função para verificar se um navio pode ser colocado sem sair do tabuleiro
int podeColocar(int tabuleiro[TAM][TAM], int linha, int coluna, int dx, int dy) {
    for (int k = 0; k < NAVIO; k++) {
        int x = linha + dx * k;
        int y = coluna + dy * k;
       
        if (x < 0 || x >= TAM || y < 0 || y >= TAM) return 0;
        if (tabuleiro[x][y] != 0) return 0;
    }
    return 1;
}

// Função para colocar navio no tabuleiro
void colocaNavio(int tabuleiro[TAM][TAM], int linha, int coluna, int dx, int dy) {
    for (int k = 0; k < NAVIO; k++) {
        int x = linha + dx * k;
        int y = coluna + dy * k;
        tabuleiro[x][y] = 3;
    }
}

int main() {
    int tabuleiro[TAM][TAM];

    // Inicializa o tabuleiro com água
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // === NAVIO 1 ===
    if (podeColocar(tabuleiro, 2, 4, 0, 1)) {
        colocaNavio(tabuleiro, 2, 4, 0, 1);
    }

    // === NAVIO 2 ===
    if (podeColocar(tabuleiro, 5, 7, 1, 0)) {
        colocaNavio(tabuleiro, 5, 7, 1, 0);
    }

    // === NAVIO 3 ↘ ===
    if (podeColocar(tabuleiro, 0, 0, 1, 1)) {
        colocaNavio(tabuleiro, 0, 0, 1, 1);
    }

    // === NAVIO 4 ↙ ===
    if (podeColocar(tabuleiro, 0, 9, 1, -1)) {
        colocaNavio(tabuleiro, 0, 9, 1, -1);
    }

     // Letras no topo
    printf("    ");
    for (int j = 0; j < TAM; j++) {
        printf(" %c ", 'A' + j);
    }
    printf("\n");
    // Números na lateral
    for (int i = 0; i < TAM; i++) {
        printf("%2d  ", i + 1);
        for (int j = 0; j < TAM; j++) {
            printf("%2d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
