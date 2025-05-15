#include <stdio.h>

int main() {
    int torre = 1, bispo, rainha = 1, cavalo = 1;
    int i, passo = 1;

    // Movimento da Torre (5 casas para a direita com while)
    printf("\nTorre se move:\n");
    while (torre <= 5) {
        printf("%d Direita\n", torre);
        torre++;
    }

    // Movimento do Bispo (5 casas na diagonal com for)
    printf("\nBispo se move:\n");
    for (bispo = 1; bispo <= 5; bispo++) {
        printf("%d Cima, Direita\n", bispo);
    }

    // Movimento da Rainha (8 casas para a direita com do-while)
    printf("\nRainha se move:\n");
    do {
        printf("%d Direita\n", rainha);
        rainha++;
    } while (rainha <= 8);

    // Linha em branco separando os movimentos anteriores do Cavalo
    printf("\n");  
    // Movimento do Cavalo (2 para baixo e 1 para a esquerda)
    printf("\nCavalo se move:\n");

     // controle do do-while
    do {
        // Primeiro passo: 1 casa para a esquerda
        printf("%d Esquerda\n", passo);
        passo++;

        // Próximos dois passos: 2 casas para baixo
        for (i = 0; i < 2; i++) {
            printf("%d Baixo\n", passo);
            passo++;
        }

        cavalo--;
    } while (cavalo > 0);

    return 0;
}