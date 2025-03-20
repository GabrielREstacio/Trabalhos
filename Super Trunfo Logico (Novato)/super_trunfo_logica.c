#include <stdio.h>
#include <stdlib.h>

struct Carta { //Info Geral (Poderia ser melhor, mas funciona)
    int Populacao;
    float AreaEmKm;
    float Pib;
    float Densidade;
    float PibCapita;
};

int main() {
    struct Carta carta1; //info da carta 1
    printf("Digite a População: \n");
    scanf("%d", &carta1.Populacao);
    printf("Digite a Área em Km²: \n");
    scanf("%f", &carta1.AreaEmKm);
    printf("Digite o Pib: \n");
    scanf("%f", &carta1.Pib);
    carta1.Densidade = carta1.Populacao / carta1.AreaEmKm;
    carta1.PibCapita = carta1.Pib / carta1.Populacao;


    struct Carta carta2; //info da carta 2
    printf("Digite a População: \n");
    scanf("%d", &carta2.Populacao);
    printf("Digite a Área em Km²: \n");
    scanf("%f", &carta2.AreaEmKm);
    printf("Digite o Pib: \n");
    scanf("%f", &carta2.Pib);
    carta2.Densidade = carta2.Populacao / carta2.AreaEmKm;
    carta2.PibCapita = carta2.Pib / carta2.Populacao;

    printf("\n Comparando as Duas Cartas: \n"); //Comparação das cartas

    if(carta1.Populacao > carta2.Populacao) { //Comparação da População
        printf("Carta 1 tem população maior \n");
    } else if(carta1.Populacao < carta2.Populacao) {
        printf("Carta 2 tem população maior \n");
    } else {
        printf("As duas cartas têm a mesma população \n");
    }   

    if(carta1.AreaEmKm > carta2.AreaEmKm) { //Comparação da Área em Km²
        printf("Carta 1 tem Área em Km² maior \n");
    } else if(carta1.AreaEmKm < carta2.AreaEmKm) {
        printf("Carta 2 tem Área em Km² maior \n");
    } else {
        printf("As duas cartas têm a mesma área \n");
    }

    if(carta1.Pib > carta2.Pib) { //Comparação do PIB
        printf("Carta 1 tem PIB maior \n");
    } else if(carta1.Pib < carta2.Pib) {
        printf("Carta 2 tem PIB maior \n");
    } else {
        printf("As duas cartas têm o mesmo PIB \n");
    }

    if(carta1.Densidade > carta2.Densidade) { //Comparação da Densidade Populacional
        printf("Carta 1 tem Densidade Populacional maior \n");
    } else if(carta1.Densidade < carta2.Densidade) {
        printf("Carta 2 tem Densidade Populacional maior \n");
    } else {
        printf("As duas cartas têm a mesma Densidade Populacional \n");
    }

    if(carta1.PibCapita > carta2.PibCapita) { //Comparação do PIB per Capita
        printf("Carta 1 tem Pib per capita maior \n");
    } else if(carta1.PibCapita < carta2.PibCapita) {
        printf("Carta 2 tem Pib per capita maior \n");
    } else {
        printf("As duas cartas têm o mesmo Pib per capita");
    }

    return 0;
}