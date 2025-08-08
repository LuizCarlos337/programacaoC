#include <stdio.h>

// Torre
void moverTorre(int casas) {
    if (casas <= 0) return; 
    printf("Direita\n");
    moverTorre(casas - 1); 
}

// Rainha
   
void moverRainha(int casas) {
    if (casas <= 0) return; 
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Bispo  
void moverBispo(int casas) {
    if (casas <= 0) return; 

    for (int v = 0; v < 1; v++) {
        
        for (int h = 0; h < 1; h++) {
            printf("Cima Direita\n");
        }
    }

    moverBispo(casas - 1);
}

// Cavalo      
void moverCavalo() {
    int movCima = 2;   
    int movDireita = 1;  

    printf("Movimento do Cavalo (duas para cima, uma para a direita):\n");

    for (int i = 1, j = movDireita; i <= movCima || j <= movDireita; ) {
        
        if (i <= movCima) {
            printf("Cima\n");
            i++;
            continue; 
        }
     
        if (j <= movDireita) {
            printf("Direita\n");
            j++;
        }
        
        if (i > movCima && j > movDireita) break;
    }
}

int main() {
    // ==================== TORRE ====================
    printf("Movimento da Torre:\n");
    moverTorre(5);
    printf("\n");

    // ==================== BISPO ====================
    printf("Movimento do Bispo:\n");
    moverBispo(5);
    printf("\n");

    // ==================== RAINHA ====================
    printf("Movimento da Rainha:\n");
    moverRainha(8);
    printf("\n");

    // ==================== CAVALO ====================
    moverCavalo();

    return 0;
}
