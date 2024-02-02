#include "ordena.h"

void bubbleSort(int arr[], int n, int *comparacoes, int *trocas) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            (*comparacoes)++;
            if (arr[j] > arr[j + 1]) {
                (*trocas)++;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}