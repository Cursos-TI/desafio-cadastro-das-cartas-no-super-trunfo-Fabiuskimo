#include <stdio.h>

int main() {
    char nome[50];
    int populacao;
    float area;
    int pontos;
    float PIB;

    printf("Digite o nome de sua Cidade")
    scanf("%s", &nome);

    printf("Digite a população de sua Cidade")
    scanf("%d", &populacao);

    printf("Digite a Área de sua Cidade")
    scanf("%f", &area);

    printf("Digite o número de pontos turísticos de sua Cidade")
    scanf("%d", &pontos);

    printf("Digite o valor do PIB de sua Cidade")
    scanf("%f", &PIB);
    

    return 0;
}
