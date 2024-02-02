#include "ordena.h"

void insertionSort(int arr[], int n, int *comparacoes, int *trocas) {
    int i, chave, j;

    for (i = 1; i < n; i++) {
        chave = arr[i];
        j = i - 1;
        (*comparacoes)++;

        while (j >= 0 && arr[j] > chave) {
            arr[j + 1] = arr[j];
            (*trocas)++;
            j = j - 1;
            (*comparacoes)++;
        }
        arr[j + 1] = chave;
    }
}
