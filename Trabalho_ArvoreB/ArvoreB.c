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

ArvB criarArvore(){
    return criarNo();
}

int buscarNaArvore(ArvB B, int matricula){
    int i =0;

    while(i<B->n && matricula > B->chaves[i].matricula){
       i++;
    }

    if(i<B->n && matricula == B->chaves[i].matricula){
        return B->chaves[i].offset;
    }

    if(B->folha)
    {
        return -1;
    }

    return buscar(B->filhos[i], matricula);
}

void Pesquisar (ArvB B, int matricula){
    long posicao = buscarNaArvore(B,matricula);
    //buscar no arquivo

}

No buscarFolha(ArvB B,int matricula){
     int i =0;

    while(i<B->n && matricula > B->chaves[i].matricula){
       i++;
    }

    if(B->folha==1){
        return *B;
    }
    return buscarFolha(B->filhos[i], matricula);

}

void split (No pagina){
    

}

ArvB inserirArv(ArvB B, int matricula, int posicao){
    // Buscar folha
     No pagina = buscarFolha( B, matricula);
    if (pagina.n == M){
        //split
       
    }
}

