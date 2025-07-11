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

int main() {
    // Torre andando 5 casas para cima

    printf("========== Torre ==========\n");

    int i = 1;

    while (i <= 5) {
        printf("Cima\n");
        i++;
    }

    printf("\n");

    // Bispo andando 5 casas para cima e esquerda

    printf("========== Bispo ==========\n");

    int j = 1;
    do {
        
        printf("Cima, Esquerda\n");
        j++;
    } while (j <= 5);

    printf("\n");

    // Rainha andando 8 casas para a esquerda

    printf("========== Rainha ==========\n");
    
    for (int i = 1; i <= 8; i++) {
        printf("Esquerda\n");
    }

    printf("\n");


    

    return 0;
}
