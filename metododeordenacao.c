#include <stdio.h>

void copiarVetor(int origem[], int destino[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        destino[i] = origem[i];
    }
}

void imprimirVetor(int v[], int tamanho) {
    printf("[ ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", v[i]);
    }
    printf("]\n");
}

// 1. Bubble Sort
int bubbleSort(int v[], int tamanho) {
    int comparacoes = 0, trocas = 0;
    printf("\n--- BUBBLE SORT ---\n");
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            comparacoes++;
            if (v[j] > v[j + 1]) {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
                trocas++;
            }
        }
        printf("Iteracao %d: ", i + 1);
        imprimirVetor(v, tamanho);
    }
    printf("Total -> Comparacoes: %d | Trocas: %d\n", comparacoes, trocas);
    return comparacoes + trocas; // Custo total para o ranking
}

// 2. Selection Sort
int selectionSort(int v[], int tamanho) {
    int comparacoes = 0, trocas = 0;
    printf("\n--- SELECTION SORT ---\n");
    for (int i = 0; i < tamanho - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < tamanho; j++) {
            comparacoes++;
            if (v[j] < v[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = v[i];
            v[i] = v[minIndex];
            v[minIndex] = temp;
            trocas++;
        }
        printf("Iteracao %d: ", i + 1);
        imprimirVetor(v, tamanho);
    }
    printf("Total -> Comparacoes: %d | Trocas: %d\n", comparacoes, trocas);
    return comparacoes + trocas;
}

// 3. Insertion Sort
int insertionSort(int v[], int tamanho) {
    int comparacoes = 0, trocas = 0;
    printf("\n--- INSERTION SORT ---\n");
    for (int i = 1; i < tamanho; i++) {
        int chave = v[i];
        int j = i - 1;
        while (j >= 0) {
            comparacoes++;
            if (v[j] > chave) {
                v[j + 1] = v[j];
                trocas++;
                j--;
            } else {
                break;
            }
        }
        v[j + 1] = chave;
        printf("Iteracao %d: ", i);
        imprimirVetor(v, tamanho);
    }
    printf("Total -> Comparacoes: %d | Trocas: %d\n", comparacoes, trocas);
    return comparacoes + trocas;
}

// 4. Quick Sort (Funções auxiliares)
static int q_comparacoes = 0;
static int q_trocas = 0;

int particionar(int v[], int baixo, int alto) {
    int pivo = v[alto];
    int i = (baixo - 1);
    for (int j = baixo; j <= alto - 1; j++) {
        q_comparacoes++;
        if (v[j] <= pivo) {
            i++;
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            q_trocas++;
        }
    }
    int temp = v[i + 1];
    v[i + 1] = v[alto];
    v[alto] = temp;
    q_trocas++;
    return (i + 1);
}

void quickSortRecursivo(int v[], int baixo, int alto, int tamanho) {
    if (baixo < alto) {
        int pi = particionar(v, baixo, alto);
        printf("Particao (pivô em %d): ", v[pi]);
        imprimirVetor(v, tamanho);
        quickSortRecursivo(v, baixo, pi - 1, tamanho);
        quickSortRecursivo(v, pi + 1, alto, tamanho);
    }
}

int quickSort(int v[], int tamanho) {
    q_comparacoes = 0;
    q_trocas = 0;
    printf("\n--- QUICK SORT ---\n");
    quickSortRecursivo(v, 0, tamanho - 1, tamanho);
    printf("Total -> Comparacoes: %d | Trocas: %d\n", q_comparacoes, q_trocas);
    return q_comparacoes + q_trocas;
}

int main() {
    int original[10] = {29, 10, 14, 37, 13, 9, 21, 42, 5, 19};
    int trabalho[10];

    printf("Vetor Original:\n");
    imprimirVetor(original, 10);

    copiarVetor(original, trabalho, 10);
    int custoBubble = bubbleSort(trabalho, 10);

    copiarVetor(original, trabalho, 10);
    int custoSelection = selectionSort(trabalho, 10);

    copiarVetor(original, trabalho, 10);
    int custoInsertion = insertionSort(trabalho, 10);

    copiarVetor(original, trabalho, 10);
    int custoQuick = quickSort(trabalho, 10);

    printf("\n========================================\n");
    printf("          RANKING DE EFICACIA          \n");
    printf("========================================\n");
    printf("1. Quick Sort     (Custo Total: %d)\n", custoQuick);
    printf("2. Insertion Sort (Custo Total: %d)\n", custoInsertion);
    printf("3. Selection Sort (Custo Total: %d)\n", custoSelection);
    printf("4. Bubble Sort    (Custo Total: %d)\n", custoBubble);
    printf("========================================\n");

    return 0;
}
