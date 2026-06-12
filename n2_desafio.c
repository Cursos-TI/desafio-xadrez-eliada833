#include <stdio.h>

int main() {
    // Mover o Bispo 5 casas na diagonal Cima-Direita usando WHILE
    int i = 0; // Contador inicia em 0
    
    while (i < 5) { // Enquanto i for menor que 5, repete
        printf("Cima, Direita\n"); // Imprime as duas direções da diagonal
        i++; // Incrementa o contador - MUITO IMPORTANTE pra não dar loop infinito
    }
    
    return 0;
}
