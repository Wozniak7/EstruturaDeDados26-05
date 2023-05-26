#include <stdio.h>
#include <stdlib.h>

typedef struct no_bin {
    int info;
    struct no_bin * esq;
    struct no_bin * dir;

} no_binario;

no_bin * constroi_no (int);