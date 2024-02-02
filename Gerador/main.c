#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "gera.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Uso: .\\gera (-a, -c ou -d) n\n");
        return 1;
    }

    int n = atoi(argv[2]);

    if (strcmp(argv[1], "-a") == 0) {
        geraAleatorio(n);
    }
    else if (strcmp(argv[1], "-c") == 0) {
        geraCrescente(n);
    }
    else if (strcmp(argv[1], "-d") == 0) {
        geraDecrescente(n);
    }
    else {
        printf("Opção invalida.\n");
        return 1;
    }

    return 0;

}
