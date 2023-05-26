#include "no_bin.h"

no_binario * constroi_no (int i){
    no_binario * novo = (no_binario *) malloc (sizeof(no_binario));
    if (novo != NULL){
        novo->info = i;
        novo->dir = novo->esq = NULL;
    }
    return novo;
}