#include "ordena.h"

void heapify(int arr[], int n, int i, int *comparacoes, int *trocas) {
    int maior = i;
    int esquerda = 2 * i + 1;
    int direita = 2 * i + 2;

    if (esquerda < n && arr[esquerda] > arr[maior]) {
        *comparacoes += 1;
        maior = esquerda;
    }

    if (direita < n && arr[direita] > arr[maior]) {
        *comparacoes += 1;
        maior = direita;
    }

    if (maior != i) {
        *trocas += 1;
        int temp = arr[i];
        arr[i] = arr[maior];
        arr[maior] = temp;

        heapify(arr, n, maior, comparacoes, trocas);
    }
}

void heapSort(int arr[], int n, int *comparacoes, int *trocas) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i, comparacoes, trocas);
    }

    for (int i = n - 1; i >= 0; i--) {
        *trocas += 1;
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        heapify(arr, i, 0, comparacoes, trocas);
    }
}