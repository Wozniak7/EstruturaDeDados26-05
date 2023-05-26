#include "abb.h"

void incializa_abb(abb * ab){
    ab->raiz = NULL;
}

void insere_rec (no_binario * novo, no_binario * atual){
    if (novo->info <= atual->info){
        if (atual->esq == NULL)
            atual->esq = novo;
        else
            insere_rec (novo, atual->esq);
    }
    else {
        if (atual->dir == NULL)
            atual->dir = novo;
        else
            insere_rec (novo, atual->dir);
        
    }
}

void insere (int i, abb * ab){
    no_binario * novo = constroi_no(i);
    if (ab->raiz == NULL)
        ab->raiz = novo;
    else
        insere_rec (novo, ab->raiz);
}
void em_ordem_rec (no_binario * atual){
    if (atual != NULL){
        em_ordem_rec(atual->esq);
        printf ("%d ", atual->info);
        em_ordem_rec(atual->dir);
    }
}
void em_ordem (abb *ab){
    if (ab->raiz == NULL)
        printf("arvore vazia");
    else    
        em_ordem_rec (ab->raiz);
}