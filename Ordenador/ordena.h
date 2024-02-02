#ifndef ORDENA_H
#define ORDENA_H

void bubbleSort(int arr[], int n, int *comparacoes, int *trocas);
void insertionSort(int arr[], int n, int *comparacoes, int *trocas);
void binaryInsertionSort(int arr[], int n, int *comparacoes, int *trocas);
void shellSort(int arr[], int n, int *comparacoes, int *trocas);
void selecaoDireta(int arr[], int n, int *comparacoes, int *trocas);
void heapSort(int arr[], int n, int *comparacoes, int *trocas);
void mergeSort(int arr[], int left, int right, int *comparacoes, int *trocas);
void radixSort(int arr[], int n, int *comparacoes, int *trocas);
void bucketSort(int arr[], int n, int *comparacoes, int *trocas);
void quickSortini(int arr[], int low, int high, int *comparacoes, int *trocas);
void quickSortcentro(int arr[], int low, int high, int *comparacoes, int *trocas);
void quickSortmediana(int arr[], int low, int high, int *comparacoes, int *trocas);

#endif