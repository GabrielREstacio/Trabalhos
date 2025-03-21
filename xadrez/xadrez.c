#include <stdio.h>
#include <stdlib.h>

void imprimirTabuleiro() { //Criando o Tabuleiro
    char tabuleiro[8][8] = {
        {'T', 'C', 'B', 'D', 'R', 'B', 'C', 'T'},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {'t', 'c', 'b', 'd', 'r', 'b', 'c', 't'}
    };

    for (int i = 0; i < 8; i++) { //loop para mover nas linhas
        for (int j = 0; j < 8; j++) { // loop para mover nas colunas
            printf("%c", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

void moverPeca() { //movendo a peça
    int origemLinha, origemColuna, destinoLinha, destinoColuna;
    printf("Digite a posição de origem: \n");
    scanf("%d %d", &origemLinha, &origemColuna);
    printf("Digite a posição de destino: \n");
    scanf("%d %d", &destinoLinha, &destinoColuna);

    //Verificando Posição
    if (origemLinha < 0 || origemLinha >= 8 || origemColuna < 0 || origemColuna >= 8 || destinoLinha < 0 || destinoLinha >= 8 || destinoColuna < 0 || destinoColuna >= 8 ) {
        printf("Movimento invalido. As posições devem estar entre 0 e 7. \n");
    } else {
        printf("Movendo peça de [%d, %d] para [%d, %d] ... \n", origemLinha, origemColuna, destinoLinha, destinoColuna);
    }
}

int main() {
    int opcao;

    do {
        printf("\n Jogo de Xadrez Edição em C \n");
        printf("1. imprimir Tabuleiro \n");
        printf("2. Mover Peça \n");
        printf("3. Sair \n");
        printf("Escolha uma opção: \n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                imprimirTabuleiro();
                break;
            case 2:
                moverPeca();
                break;
            case 3:
                printf("Saindo do jogo \n");
                default:
                printf("Opção invalida \n");
        }
    
    }while (opcao != 3); //loop continuar ate escolher a opção 3

    return 0;
}