#include <stdio.h>
#define tamanhoTabuleiro 10
#define tamanhoNavio 3

void inicializarTabuleiro(int tabuleiro[tamanhoTabuleiro][tamanhoTabuleiro]) { // iniciando o tabuleiro com água (0)
    for (int i = 0; i < tamanhoTabuleiro; i++) {
        for (int j = 0; j < tamanhoTabuleiro; j++) {
            tabuleiro[i][j] = 0;
        }
    }
}

void imprimirTabuleiro(int tabuleiro[tamanhoTabuleiro][tamanhoTabuleiro]) { // imprimindo o tabuleiro
    printf("Tabuleiro de Batalha Naval:\n");
    printf("  ");
    for (int i = 0; i < tamanhoTabuleiro; i++) {
        printf("%2d ", i); 
    }
    printf("\n");
    for (int i = 0; i < tamanhoTabuleiro; i++) {
        printf("----");
    }
    printf("\n");

    for (int i = 0; i < tamanhoTabuleiro; i++) {
        printf("%2d| ", i);
        for (int j = 0; j < tamanhoTabuleiro; j++) {
            printf("%2d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

void posicionarNavioHorizontal(int tabuleiro[tamanhoTabuleiro][tamanhoTabuleiro], int linha, int coluna) { // posiciona um navio horizontalmente
    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro[linha][coluna + i] = 3;
    }
}

void posicionarNavioVertical(int tabuleiro[tamanhoTabuleiro][tamanhoTabuleiro], int linha, int coluna) { // posiciona um navio verticalmente
    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro[linha + i][coluna] = 3;
    }
}

int main() {
    int tabuleiro[tamanhoTabuleiro][tamanhoTabuleiro];
    inicializarTabuleiro(tabuleiro);
    posicionarNavioHorizontal(tabuleiro, 2, 3);
    posicionarNavioVertical(tabuleiro, 5, 6);
    imprimirTabuleiro(tabuleiro);

    return 0;
}
