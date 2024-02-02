#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "ordena.h"


int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Uso: .\\ordena [algoritmo] n [entrada.txt]\n");
        return 1;
    }

    char *algoritmo = argv[1];
    int n = atoi(argv[2]);
    char *nomeArquivoEntrada = argv[3];
    char *nomeArquivoSaida = "saida.txt";

    int *arr = malloc(n * sizeof(int));
    int comparacoes = 0;
    int trocas = 0;
    int low=0;
    int high=n-1;

    FILE *arquivoEntrada = fopen(nomeArquivoEntrada, "r");
    if (arquivoEntrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        fscanf(arquivoEntrada, "%d", &arr[i]);
    }

    fclose(arquivoEntrada);

    clock_t inicio, fim;
    inicio = clock();
    if (strcmp(algoritmo, "bolha") == 0) {
        bubbleSort(arr, n, &comparacoes, &trocas);
    }
    else if (strcmp(algoritmo, "insercaoDireta") == 0) {
        insertionSort(arr, n, &comparacoes, &trocas);
    }
    else if (strcmp(algoritmo, "insercaoBinaria") == 0) {
        binaryInsertionSort(arr, n, &comparacoes, &trocas);
    }
    else if (strcmp(algoritmo, "shellSort") == 0) {
        shellSort(arr, n, &comparacoes, &trocas);
    }
    else if (strcmp(algoritmo, "selecaoDireta") == 0) {
        selecaoDireta(arr, n, &comparacoes, &trocas);
    }
    else if (strcmp(algoritmo, "heapSort") == 0) {
        heapSort(arr, n, &comparacoes, &trocas);
    }
    else if (strcmp(algoritmo, "mergeSort") == 0) {
        mergeSort(arr, 0, n - 1, &comparacoes, &trocas);
    }
    else if (strcmp(algoritmo, "radixSort") == 0) {
        radixSort(arr, n, &comparacoes, &trocas);
    }
    else if (strcmp(algoritmo, "bucketSort") == 0) {
        bucketSort(arr, n, &comparacoes, &trocas);
    }
    else if (strcmp(algoritmo, "quickSortini") == 0) {
        quickSortini(arr, low, high, &comparacoes, &trocas);
    }
    else if (strcmp(algoritmo, "quickSortcentro") == 0) {
        quickSortcentro(arr, low, high, &comparacoes, &trocas);
    }
    else if (strcmp(algoritmo, "quickSortmediana") == 0) {
        quickSortmediana(arr, low, high, &comparacoes, &trocas);
    }
    else {
        printf("Algoritmo inválido.\n");
        return 1;
    }
    fim = clock();

    FILE *arquivoSaida = fopen(nomeArquivoSaida, "w");
    if (arquivoSaida == NULL) {
        printf("Erro ao abrir o arquivo de saída.\n");
        return 1;
    }

    fprintf(arquivoSaida, "Número de comparações: %d\n", comparacoes);
    fprintf(arquivoSaida, "Número de trocas: %d\n", trocas);
    fprintf(arquivoSaida, "Tempo de execução: %f segundos\n", (double)(fim - inicio) / CLOCKS_PER_SEC);

    for (int i = 0; i < n; i++) {
        fprintf(arquivoSaida, "%d\n", arr[i]);
    }

    fclose(arquivoSaida);
    free(arr);

    return 0;
}
