#include <stdio.h>

int main() {
    // Movimento do Cavalo: 2 casas para Baixo + 1 para Esquerda
    // Usando FOR + WHILE aninhados
    
    // Loop externo: movimento em L completo
    for (int l = 0; l < 1; l++) { // Repete o L 1 vez só
        
        // Parte 1 do L: 2 casas para Baixo usando WHILE
        int casas_baixo = 0;
        while (casas_baixo < 2) {
            printf("Baixo\n");
            casas_baixo++;
        }
        
        // Parte 2 do L: 1 casa para Esquerda usando FOR
        for (int casas_esquerda = 0; casas_esquerda < 1; casas_esquerda++) {
            printf("Esquerda\n");
        }
    }
    
    return 0;
}
