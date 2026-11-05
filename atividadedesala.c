
#include <stdio.h>

// Função recursiva para imprimir as posições do vetor
void imprimirNomes(char nomes[5][50], int indice) {
    // 1. CASO BASE: quando o índice atinge o tamanho máximo (5), a recursão para
    if (indice == 5) {
        return;
    }

    // Ação: imprime o nome da posição atual
    printf("Posicao %d: %s\n", indice, nomes[indice]);

    // 2. CASO RECURSIVO: chama a si mesma avançando para o próximo índice (indice + 1)
    imprimirNomes(nomes, indice + 1);
}

int main() {
    // Matriz de caracteres para armazenar 5 nomes (até 49 caracteres cada)
    char nomes[5][50];
    int i;

    // Leitura das 5 posições usando scanf
    printf("--- Leitura dos Nomes ---\n");
    for (i = 0; i < 5; i++) {
        printf("Digite o nome para a posicao %d: ", i);
        scanf("%s", nomes[i]);
    }

    printf("\n--- Exibicao Recursiva dos Nomes ---\n");
    // Chamada inicial da função recursiva começando da posição 0
    imprimirNomes(nomes, 0);

    return 0;
}

