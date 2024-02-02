#include "ordena.h"

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int arr[], int low, int high, int *comparacoes, int *trocas) {
    int pivot = arr[low];
    int left = low + 1;
    int right = high;
    while (1) {
        while (left <= right && arr[left] <= pivot) {
            left++;
            (*comparacoes)++;
        }
        while (arr[right] >= pivot && right >= left) {
            right--;
            (*comparacoes)++;
        }
        if (right < left) {
            break;
        }
        else {
            swap(&arr[left], &arr[right]);
            (*trocas)++;
        }
    }
    swap(&arr[low], &arr[right]);
    (*trocas)++;
    return right;
}
void quickSortini(int arr[], int low, int high, int *comparacoes, int *trocas) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high, comparacoes, trocas);
        quickSortini(arr, low, pivotIndex - 1, comparacoes, trocas);
        quickSortini(arr, pivotIndex + 1, high, comparacoes, trocas);
    }
}
