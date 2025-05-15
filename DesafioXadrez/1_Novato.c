#include <stdio.h> 

int main() {
    // Declaração e inicialização das variáveis de controle
    int torre = 1, bispo, rainha = 1;
    
    // ===== Movimento da Torre (usando while) =====
    printf("\nTorre se move: \n");
    while (torre <= 5) // Enquanto a torre não tiver se movido 5 vezes
    {
        printf("%d Direita\n", torre); // Exibe o número do passo e a direção
        torre++; // Incrementa a contagem de casas movidas
    }
    
    // ===== Movimento do Bispo (usando for) =====
    printf("\nBispo se move: \n");
    for (bispo = 1; bispo <= 5; bispo++) // Laço de 1 a 5
    {
        printf("%d Cima, Direita\n", bispo); // Exibe o número do passo e a direção na diagonal
    }

    // ===== Movimento da Rainha (usando do-while) =====
    printf("\nRainha se move: \n");
    do
    {
        printf("%d Direita\n", rainha); // Exibe o número do passo e a direção
        rainha++; // Incrementa a contagem de casas movidas
    } while (rainha <= 8); // Repete até completar 8 casas

    // Fim do programa
    return 0;
}
