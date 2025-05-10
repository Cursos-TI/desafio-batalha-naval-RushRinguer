#include <stdio.h>

#define LINHA 10
#define COLUNA 10

int main() {
    int tabuleiro[LINHA][COLUNA] = {0};  
    char letras[LINHA] = {'A','B','C','D','E','F','G','H','I','J'};

    
    for (int i = 0; i < 3; i++) {
        tabuleiro[i][4] = 3;
    }

    
    for (int j = 0; j < 3; j++) {
        tabuleiro[5][j] = 3;
    }

    for (int i = 0; i < 3; i++) {
        tabuleiro[i][i] = 3;
    }

   
    printf("  ");
    for (int j = 0; j < COLUNA; j++) {
        printf("%2d ", j + 1);
    }
    printf("\n");

   
    for (int i = 0; i < LINHA; i++) {
        printf("%c ", letras[i]);
        for (int j = 0; j < COLUNA; j++) {
            if (tabuleiro[i][j] == 3)
                printf(" 3 ");
            else
                printf(" 0 ");
        }
        printf("\n");
    }

    return 0;
}
