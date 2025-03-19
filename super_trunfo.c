#include <stdio.h>
#include <stdlib.h>

struct super_trunfo //Informação Vazia da Carta
{
    char Estado[20];
    char CodigoDaCarta[20];
    char NomeDaCidade[20];
    int Populacao;
    float AreaEmKm;
    float Pib;
    int NumeroDePontosTuristicos;
};

struct super_trunfo* create_super_trunfo(void)
{
struct super_trunfo *new= malloc(sizeof(struct super_trunfo));
return new;

};

int main() {
    struct super_trunfo *trunfo = create_super_trunfo();
    printf("Nome do Estado \n");
    scanf(" %[^\n]", &trunfo->Estado); //%s não deu certo
    printf("Codigo da Carta \n");
    scanf(" %[^\n]", &trunfo->CodigoDaCarta);
    printf("Nome da Cidade \n");
    scanf(" %[^\n]", &trunfo->NomeDaCidade);
    printf("População \n");
    scanf("%d", &trunfo->Populacao);
    printf("Area em km² \n");
    scanf("%f", &trunfo->AreaEmKm);
    printf("Pib \n");
    scanf("%f", &trunfo->Pib);
    printf("Numero de Pontos Turisticos \n");
    scanf("%d", &trunfo->NumeroDePontosTuristicos);
    printf("\n Começa Carta 2 \n");

    struct super_trunfo *trunfo2 = create_super_trunfo();
    printf("Nome do Estado \n");
    scanf(" %[^\n]", &trunfo2->Estado); //%s não deu certo
    printf("Codigo da Carta \n");
    scanf(" %[^\n]", &trunfo2->CodigoDaCarta);
    printf("Nome da Cidade \n");
    scanf(" %[^\n]", &trunfo2->NomeDaCidade);
    printf("População \n");
    scanf("%d", &trunfo2->Populacao);
    printf("Area em km² \n");
    scanf("%f", &trunfo2->AreaEmKm);
    printf("Pib \n");
    scanf("%f", &trunfo2->Pib);
    printf("Numero de Pontos Turisticos \n");
    scanf("%d", &trunfo2->NumeroDePontosTuristicos);

    printf("Cartas Criadas \n");
    printf("\n Carta 1: \n Estado: %s \n Codigo da Carta: %s \n Nome da Cidade: %s \n População: %d \n Area em km²: %f \n Pib: %f \n Numero de Pontos Turisticos: %d \n "
    , &trunfo->Estado, &trunfo->CodigoDaCarta, &trunfo->NomeDaCidade, trunfo->Populacao, trunfo->AreaEmKm, trunfo->Pib, trunfo->NumeroDePontosTuristicos ); // & no População, Area em Km, Pib e Pontos Turisticos deram erros
    printf("\n Carta 2: \n Estado: %s \n Codigo da Carta: %s \n Nome da Cidade: %s \n População: %d \n Area em km²: %f \n Pib: %f \n Numero de Pontos Turisticos: %d \n "
        , &trunfo2->Estado, &trunfo2->CodigoDaCarta, &trunfo2->NomeDaCidade, trunfo2->Populacao, trunfo2->AreaEmKm, trunfo2->Pib, trunfo2->NumeroDePontosTuristicos );
    
}
