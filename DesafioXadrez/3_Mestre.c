#include <stdio.h>

// Função recursiva para movimentar a Torre (5 casas para a Direita)
void moverTorre(int casa) {
    if (casa > 5) return;
    printf("%d Direita\n", casa);
    moverTorre(casa + 1);
}

// Função recursiva para movimentar a Rainha (8 casas para a Esquerda)
void moverRainha(int casa) {
    if (casa > 8) return;
    printf("%d Esquerda\n", casa);
    moverRainha(casa + 1);
}

// Função recursiva + loop aninhado para movimentar o Bispo (5 casas diagonais Cima, Direita)
void moverBispo(int vertical) {
    if (vertical > 5) return;

    for (int horizontal = 1; horizontal <= 1; horizontal++) {
        printf("%d Cima, Direita\n", vertical);
    }

    moverBispo(vertical + 1);
}

int main() {
    // Movimentação da Torre com recursão
    printf("Torre se move:\n");
    moverTorre(1);

    printf("\n");

    // Movimentação do Bispo com recursão e loop aninhado
    printf("Bispo se move:\n");
    moverBispo(1);

    printf("\n");

    // Movimentação da Rainha com recursão
    printf("Rainha se move:\n");
    moverRainha(1);

    printf("\n");

    // Movimentação do Cavalo com loops aninhados e controle com break/continue
    printf("Cavalo se move:\n");

    int movimentos = 1;
    for (int i = 1; i <= 2; i++) { // Duas casas para cima
        if (i == 2) continue; // Ignora o segundo movimento para exibir "1 Cima", "2 Cima" depois
        printf("%d Cima\n", movimentos++);
        printf("%d Cima\n", movimentos++);
    }

    int j = 1;
    while (j <= 1) { // Uma casa para a direita
        printf("%d Direita\n", movimentos++);
        j++;
    }

    return 0;
}