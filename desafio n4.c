#include <stdio.h>

int main() {
    int i;
    
    printf("=== MOVIMENTACAO DAS PECAS DE XADREZ ===\n\n");
    
    // 1. TORRE - 5 casas para Direita usando FOR
    printf("--- TORRE: 5 casas para Direita ---\n");
    for (i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    printf("\n");
    
    // 2. BISPO - 5 casas diagonal Cima + Direita usando WHILE
    printf("--- BISPO: 5 casas diagonal Cima-Direita ---\n");
    i = 0;
    while (i < 5) {
        printf("Cima, Direita\n");
        i++;
    }
    printf("\n");
    
    // 3. RAINHA - 8 casas para Esquerda usando DO-WHILE
    printf("--- RAINHA: 8 casas para Esquerda ---\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < 8);
    printf("\n");
    
    // 4. CAVALO - 2 Cima + 1 Direita em L usando FOR + WHILE ANINHADOS
    printf("--- CAVALO: Movimento em L ---\n");
    int j;
    
    // FOR externo: 2 casas verticais
    for (i = 0; i < 2; i++) {
        // WHILE interno: imprime cada "Cima"
        j = 0;
        while (j < 1) {
            printf("Cima\n");
            j++;
        }
    }
    // Movimento horizontal
    printf("Direita\n");
    printf("\n");
    
    return 0;
}
