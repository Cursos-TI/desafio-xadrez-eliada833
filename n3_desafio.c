#include <stdio.h>

int main() {
    // Mover a Rainha 8 casas para a Esquerda usando DO-WHILE
    int i = 0; // Contador inicia em 0
    
    do {
        printf("Esquerda\n"); // Executa primeiro, depois verifica
        i++; // Incrementa o contador
    } while (i < 8); // Condição verificada no final
    
    return 0;
}
