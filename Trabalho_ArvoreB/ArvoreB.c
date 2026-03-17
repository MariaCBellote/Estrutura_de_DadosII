#include "ArvoreB.h"
#include <stdlib.h>
#include <stdio.h>

No *criarNo() {
    No *novo = (No*) malloc(sizeof(No));

    novo->n = 0;
    novo->folha = 1;

    for (int i = 0; i < F; i++)
        novo->filhos[i] = NULL;

    return novo;
}