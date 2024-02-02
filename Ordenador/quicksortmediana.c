#include "ordena.h"

void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int medianaDeTres(int arr[], int low, int high, int *comparacoes, int *trocas) {
    int meio = (low + high) / 2;
    if (arr[low] > arr[meio]) {
        (*comparacoes)++;
        troca(&arr[low], &arr[meio]);
        (*trocas)++;
    }
    if (arr[low] > arr[high]) {
        (*comparacoes)++;
        troca(&arr[low], &arr[high]);
        (*trocas)++;
    }
    if (arr[meio] > arr[high]) {
        (*comparacoes)++;
        troca(&arr[meio], &arr[high]);
        (*trocas)++;
    }
    return meio;
}

void quickSortmediana(int arr[], int low, int high, int *comparacoes, int *trocas) {
    if (low < high) {
        int pivotIndex = medianaDeTres(arr, low, high, comparacoes, trocas);
        int pivot = arr[pivotIndex];

        troca(&arr[pivotIndex], &arr[high]);
        (*trocas)++;

        int i = low - 1;
        for (int j = low; j < high; j++) {
            (*comparacoes)++;
            if (arr[j] <= pivot) {
                i++;
                troca(&arr[i], &arr[j]);
                (*trocas)++;
            }
        }
        troca(&arr[i + 1], &arr[high]);
        (*trocas)++;
        int pivotIndexNew = i + 1;

        quickSortmediana(arr, low, pivotIndexNew - 1, comparacoes, trocas);
        quickSortmediana(arr, pivotIndexNew + 1, high, comparacoes, trocas);
    }
}