#include <stdio.h>

/* =========================================================
   FUNÇÕES RECURSIVAS
   ========================================================= */

/* TORRE — movimento para a direita */
void moverTorre(int casas) {
    if (casas == 0) {
        return;
    }
    printf("Direita\n");
    moverTorre(casas - 1);
}

/* BISPO — recursividade + loops aninhados */
void moverBispo(int casas) {
    if (casas == 0) {
        return;
    }

    int vertical;
    int horizontal;

    /* Loop externo: vertical */
    for (vertical = 1; vertical <= 1; vertical++) {

        /* Loop interno: horizontal */
        for (horizontal = 1; horizontal <= 1; horizontal++) {
            printf("Cima Direita\n");
        }
    }

    moverBispo(casas - 1);
}

/* RAINHA — movimento para a esquerda */
void moverRainha(int casas) {
    if (casas == 0) {
        return;
    }
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

int main() {

    /* ============================
       TORRE — RECURSIVIDADE
       ============================ */
    int casasTorre = 5;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");


    /* ============================
       BISPO — RECURSIVIDADE + LOOPS
       ============================ */
    int casasBispo = 5;

    printf("Movimento do Bispo:\n");
    moverBispo(casasBispo);
    printf("\n");


    /* ============================
       RAINHA — RECURSIVIDADE
       ============================ */
    int casasRainha = 8;

    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");


    /* ============================
       CAVALO — LOOPS COMPLEXOS
       Movimento em L:
       2 para cima, 1 para a direita
       ============================ */

    int i, j;

    printf("Movimento do Cavalo:\n");

    for (i = 1; i <= 2; i++) {
        printf("Cima\n");

        for (j = 1; j <= 1; j++) {
            if (i < 2) {
                continue;
            }
            printf("Direita\n");
        }
    }

    return 0;
}
