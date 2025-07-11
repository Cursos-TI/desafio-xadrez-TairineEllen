#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

void moverTorre(int casas) {
    if (casas > 0) {
        printf("Cima\n");
        moverTorre(casas - 1);
    }
}

void moverBispo(int casas) {
    if(casas > 0) {
        for(int i = 1; i <= 1; i++) {
            for(int j = 1; j <= 1; j++) {
                printf("Cima, ");
            }
            printf("Direita\n");
        }
        moverBispo(casas - 1);
    }
}


void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverTorre(casas - 1);
    }
}

void moverCavalo(int horizontal, int vertical, int opcao) {
        for(int j = 1, k = 1; j <= horizontal || k <= vertical; j++, k++) {
        printf("Cima\n");
        
        if(k == vertical) {
            switch(opcao) {
                case 1:
                    printf("Esquerda\n");
                    break;
                case 2:
                    printf("Direita\n");
                    break;
                default:
                    printf("Opcao invalida\n");
                    break;
            } 
        }
    }
}

int main() {
    // Torre andando 5 casas para cima

    printf("========== Torre ==========\n");
    moverTorre(5);
    printf("\n");

    // Bispo andando 5 casas para cima e esquerda

    printf("========== Bispo ==========\n");
    moverBispo(5);
    printf("\n");

    // Rainha andando 8 casas para a esquerda

    printf("========== Rainha ==========\n");    
    moverRainha(8);
    printf("\n");

    printf("========== Cavalo ==========\n");

    int cavaloHorizontal = 1, cavaloVertical = 2, opcao;
    printf("### Selecione se o cavalo deve ir para a esquerda ou direita:\n");
    printf("1. Esquerda\n");
    printf("2. Direita\n");
    scanf("%d", &opcao);
    printf("\n");

    moverCavalo(cavaloHorizontal, cavaloVertical, opcao);


    return 0;
}
