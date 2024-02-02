#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "gera.h"

void geraAleatorio(int n) {
    srand(time(NULL));
    FILE *file = fopen("entrada.txt", "w");
    if (file == NULL) {
        printf("Erro.\n");
        exit(1);
    }
    for (int i = 0; i < n; i++) {
        int num = rand() % n;
        fprintf(file, "%d\n", num);
    }
    fclose(file);
}

void geraCrescente(int n) {
    FILE *file = fopen("entrada.txt", "w");
    if (file == NULL) {
        printf("Erro.\n");
        exit(1);
    }
    for (int i = 1; i <= n; i++) {
        fprintf(file, "%d\n", i);
    }
    fclose(file);
}

void geraDecrescente(int n) {
    FILE *file = fopen("entrada.txt", "w");
    if (file == NULL) {
        printf("Erro.\n");
        exit(1);
    }
    for (int i = n; i >= 1; i--) {
        fprintf(file, "%d\n", i);
    }
    fclose(file);
}