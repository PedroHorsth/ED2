#include "ordena.h"

void binaryInsertionSort(int arr[], int n, int *comparacoes, int *trocas) {
    for (int i = 1; i < n; i++) {
        int chave = arr[i];
        int esquerda = 0;
        int direita = i - 1;
        int meio, j;
        (*comparacoes)++;
        while (esquerda <= direita) {
            meio = (esquerda + direita) / 2;

            (*comparacoes)++;
            if (arr[meio] > chave) {
                direita = meio - 1;
            } else {
                esquerda = meio + 1;
            }
        }
        for (j = i - 1; j >= esquerda; j--) {
            arr[j + 1] = arr[j];
            (*trocas)++;
        }
        arr[esquerda] = chave;
    }
}