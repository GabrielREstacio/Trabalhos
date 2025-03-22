#include <stdio.h>
#include <stdlib.h>
#define SIZE 8

char tabuleiro[SIZE][SIZE] ;

void iniciarTabuleiro() {
for (int i = 0; i < SIZE; i++ ) {
    for (int j = 0; j < SIZE; j++ ) {
        tabuleiro[i][j]='.';
    }

}


    char PecasPretas[] = {'T', 'C', 'B', 'D', 'R', 'B', 'C', 'T'};
    char PecasBrancas[] = {'t', 'c', 'b', 'd', 'r', 'b', 'c', 't'};
    for (int i = 0; i < SIZE; i++ ) {
        tabuleiro[0][i]=PecasPretas[i];
        tabuleiro[1][i]='P';
    }
    for (int i = 0; i < SIZE; i++ ) {
        tabuleiro[7][i]=PecasBrancas[i];
        tabuleiro[6][i]='p';
    }
}
void imprimirTabuleiro() { //Criando o Tabuleiro
    printf("  1 2 3 4 5 6 7 8 \n");
    for (int i = 0; i < 8; i++) { //loop para mover nas linhas
        printf("%d ", i + 1);
        for (int j = 0; j < 8; j++) { // loop para mover nas colunas
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}
int regratorre(int origemLinha, int origemColuna, int destinoLinha, int destinoColuna){
    if (origemLinha != destinoLinha && origemColuna != destinoColuna) {
        printf("Movimento invalido para a torre");
        return 0;
    }
    return 1;
}
int regrabispo(int origemLinha, int origemColuna, int destinoLinha, int destinoColuna){
    if (abs(destinoLinha - origemLinha)!= abs(destinoColuna - origemColuna)) {
        printf("Movimento invalido para o bispo");
        return 0;
    }
    return 1;
}
int regrarainha(int origemLinha, int origemColuna, int destinoLinha, int destinoColuna){
    if (destinoLinha == origemLinha || destinoColuna == origemColuna || 
        abs(destinoLinha - origemLinha)== abs(destinoColuna - origemColuna)) {
            return 1;
        } else {
            printf("Movimento invalido para a rainha");
            return 0;
        }
}
void removerPeca(int origemLinha, int origemColuna) {
    tabuleiro[origemColuna][origemLinha] = '.';
}

void adicionarPeca(int destinoLinha, int destinoColuna, char Peca) {
    tabuleiro[destinoColuna][destinoLinha] = Peca;
}

char consultaPeca(int Linha, int Coluna) {
    return tabuleiro[Coluna][Linha];
}

void moverPeca() { //movendo a peça
    int origemLinha, origemColuna, destinoLinha, destinoColuna;
    printf("Digite a posição de origem: \n");
    scanf("%d %d", &origemLinha, &origemColuna);
    printf("Digite a posição de destino: \n");
    scanf("%d %d", &destinoLinha, &destinoColuna);
    origemLinha--;
    origemColuna--;
    destinoLinha--;
    destinoColuna--;

    //Verificando Posição
    if (origemLinha < 0 || origemLinha >= 8 || origemColuna < 0 || origemColuna >= 8 || destinoLinha < 0 || destinoLinha >= 8 || destinoColuna < 0 || destinoColuna >= 8 ) {
        printf("Movimento invalido. As posições devem estar entre 0 e 7. \n");
    } else {
        char peca = consultaPeca(origemLinha, origemColuna);
        if (peca=='t' || peca=='T'){
            if(regratorre(origemLinha, origemColuna, destinoLinha, destinoColuna)==1) {
                removerPeca(origemLinha, origemColuna);
                adicionarPeca(destinoLinha, destinoColuna, peca);
                printf("Movendo peça de [%d, %d] para [%d, %d] ... \n", origemLinha, origemColuna, destinoLinha, destinoColuna);
            }
        } else if (peca=='b' || peca=='B'){
            if(regrabispo(origemLinha, origemColuna, destinoLinha, destinoColuna)==1) {
                removerPeca(origemLinha, origemColuna);
                adicionarPeca(destinoLinha, destinoColuna, peca);
                printf("Movendo peça de [%d, %d] para [%d, %d] ... \n", origemLinha, origemColuna, destinoLinha, destinoColuna);
            } } else if (peca=='r' || peca=='R'){
                if(regrarainha(origemLinha, origemColuna, destinoLinha, destinoColuna)==1) {
                    removerPeca(origemLinha, origemColuna);
                    adicionarPeca(destinoLinha, destinoColuna, peca);
                    printf("Movendo peça de [%d, %d] para [%d, %d] ... \n", origemLinha, origemColuna, destinoLinha, destinoColuna); }
                }
 else {
    removerPeca(origemLinha, origemColuna);
    adicionarPeca(destinoLinha, destinoColuna, peca);
    printf("Movendo peça de [%d, %d] para [%d, %d] ... \n", origemLinha, origemColuna, destinoLinha, destinoColuna);
 } 
        
    }
}

int main() {
    int opcao;

iniciarTabuleiro();

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