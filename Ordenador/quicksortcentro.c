#include "ordena.h"

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int particionar(int arr[], int low, int high, int *comparacoes, int *trocas) {
    int meio = low + (high - low) / 2;
    int pivot = arr[meio];
    int i = low - 1;
    int j = high + 1;

    while (1) {
        do {
            i++;
            (*comparacoes)++;
        }
        while (arr[i] < pivot);

        do {
            j--;
            (*comparacoes)++;
        }
        while (arr[j] > pivot);

        if (i >= j) {
            return j;
        }

        trocar(&arr[i], &arr[j]);
        (*trocas)++;
    }
}

void quickSortcentro(int arr[], int low, int high, int *comparacoes, int *trocas) {
    if (low < high) {
        int pi = particionar(arr, low, high, comparacoes, trocas);
        quickSortcentro(arr, low, pi, comparacoes, trocas);
        quickSortcentro(arr, pi + 1, high, comparacoes, trocas);
    }
}
