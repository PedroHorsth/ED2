#include "ordena.h"
#include <stdlib.h>

typedef struct {
    int *arr;
    int tam;
} Bucket;

void bucketSort(int arr[], int n, int *comparacoes, int *trocas) {

    int max_val = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }

    int num_baldes = 10;
    Bucket *buckets = malloc(num_baldes * sizeof(Bucket));

    for (int i = 0; i < num_baldes; i++) {
        buckets[i].arr = malloc(n * sizeof(int));
        buckets[i].tam = 0;
    }

    for (int i = 0; i < n; i++) {
        int index = (arr[i] * num_baldes) / (max_val + 1);
        buckets[index].arr[buckets[index].tam++] = arr[i];
    }

    for (int i = 0; i < num_baldes; i++) {
        insertionSort(buckets[i].arr, buckets[i].tam, comparacoes, trocas);
    }

    int index = 0;
    for (int i = 0; i < num_baldes; i++) {
        for (int j = 0; j < buckets[i].tam; j++) {
            arr[index++] = buckets[i].arr[j];
        }
    }

    for (int i = 0; i < num_baldes; i++) {
        free(buckets[i].arr);
    }
    free(buckets);
}
