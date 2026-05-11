#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int numeroDeCasas, i;

    printf("Digite o numero de casas para as peças se moverem: \n");
    scanf("%d", &numeroDeCasas);

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("----Bispo----\n");
    for(i = 1; i <= numeroDeCasas; i++){
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("Bispo chegou na casa!\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("----Torre----\n");
    for(i = 1; i <= numeroDeCasas; i++){
        printf("Direita\n");
    }
    printf("Torre chegou na casa!\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("----Rainha----\n");
    for(i = 1; i <= numeroDeCasas; i++){
        printf("Esquerda\n");
    }
    printf("Rainha chegou na casa!\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("----Cavalo----\n");
    for(i = 1; i <= 1; i++){
        for (int j = 0; j <= i; j++)
        {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
    }
    printf("Cavalo chegou na casa!\n");

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
