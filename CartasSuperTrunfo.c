#include <stdio.h>

int main() {
    char nome[50];
    char nome2[50];
    char estado[50];
    char estado2[50];
    int populacao, populacao2;
    float area, area2;
    int pontos, pontos2;
    float pib, pib2;

    printf("Digite a Letra que representa o Estado: ");
    scanf("%s", &estado);

    printf("Digite o nome da primeira Cidade: ");
    scanf("%s", &nome);

    printf("Digite a população de sua Cidade: ");
    scanf("%d", &populacao);

    printf("Digite a Área de sua Cidade: ");
    scanf("%f", &area);

    printf("Digite o número de pontos turísticos de sua Cidade: ");
    scanf("%d", &pontos);

    printf("Digite o valor do PIB de sua Cidade: ");
    scanf("%f", &pib);

    printf("Digite a Letra que representa o segundo Estado: ");
    scanf("%s", &estado2);

    printf("Agora digite o nome da segunda Cidade: ");
    scanf("%s", &nome2);

    printf("Digite a população de sua Cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a Área de sua Cidade: ");
    scanf("%f", &area2);

    printf("Digite o número de pontos turísticos de sua Cidade: ");
    scanf("%d", &pontos2);

    printf("Digite o valor do PIB de sua Cidade: ");
    scanf("%f", &pib2);

    printf("\nCARTA 1: \n");
    printf("Estado: %s \n", estado);
    printf("Código da Carta: %s01 \n", estado);
    printf("Nome da Cidade: %s \n", nome);
    printf("População da Cidade: %d \n", populacao);
    printf("Área da Cidade: %f km² \n", area);
    printf("Número de Pontos Turísticos da Cidade: %d \n", pontos);
    printf("Valor do PIB da Cidade: %f bilhões de reais \n \n \n", pib); 

    printf("CARTA 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código da Carta: %s02 \n", estado2);
    printf("Nome da Cidade: %s \n", nome2);
    printf("População da Cidade: %d \n", populacao2);
    printf("Área da Cidade: %f km² \n", area2);
    printf("Número de Pontos Turísticos da Cidade: %d \n", pontos2);
    printf("Valor do PIB da Cidade: %f bilhões de reais \n \n \n", pib2);



    return 0;
}
