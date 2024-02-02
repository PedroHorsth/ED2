#include "ordena.h"

void shellSort(int arr[], int n, int *comparacoes, int *trocas) {
    int i, j, gap, temp;
    for (gap = n/2; gap > 0; gap /= 2) {
        for (i = gap; i < n; i++) {
            temp = arr[i];
            (*comparacoes)++;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                (*comparacoes)++;
                (*trocas)++;
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}