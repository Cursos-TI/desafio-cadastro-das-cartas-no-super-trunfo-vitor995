#include <stdio.h>
int main () {

    printf("\nSeja bem vindo ao Desafio Super Trunfo\n");

    char nome1[50], nome2[50];
    char estado1[3], estado2[3]; // Sigla do estado (ex: SP, RJ, MG)
    char codigo1[4], codigo2[4]; // Codigo da cidade (ex: A01, B02, C03)
    int populacao1, populacao2; // uso do int para numeros inteiros
    float PIB1, PIB2, area1, area2; // uso do float para numeros decimais
    int pontos_turisticos1, pontos_turisticos2;
    int escolha; // armazena a escolha do usuario

   //entrada de dados da primeira cidade
    printf("\nCadastro da primeira carta\n");

    printf("Escolha uma letra entre 'A' e 'H' para representar um dos oito Estados: \n");
    scanf("%c", estado1);
    printf("Escolha entre 01 a 04 para definir o numero da carta. \n");
    scanf("%2s", codigo1);
    printf("Digite o nome do primeira cidade: \n");
    scanf("%s", nome1);
    printf("Digite o estado da primeira cidade: \n");
    scanf("%s", estado1);
    printf("Digite a populacao da primeira cidade: \n");
    scanf("%d", &populacao1);
    printf("Digite o PIB da primeira cidade: \n"); // em Bilhoes  
    scanf("%f", &PIB1);
    printf("Digite a area da primeira cidade: \n"); // em Km2
    scanf("%f", &area1);
    printf("Digite a quantidade de pontos turisticos da primeira cidade: \n");
    scanf("%d", &pontos_turisticos1);
    getchar();

    //Entrada de dados da segunda cidade
    printf("\nCadastro da segunda carta\n");

    printf("Escolha uma letra entre 'A' e 'H' para representar um dos oito Estados: \n");
    scanf("%c", estado2);
    printf("Escolha entre 01 a 04 para definir o numero da carta. \n");
    scanf("%2s", codigo2);
    printf("Digite o nome do segunda cidade: \n");
    scanf("%s", nome2);
    printf("Digite o estado da segunda cidade: \n");
    scanf("%s", estado2);
    printf("Digite a populacao da segunda cidade: \n");
    scanf("%d", &populacao2);
    printf("Digite o PIB da segunda cidade: \n");
    scanf("%f", &PIB2);
    printf("Digite a area da segunda cidade: \n");
    scanf("%f", &area2);
    printf("Digite a quantidade de pontos turisticos da segunda cidade: \n");
    scanf("%d", &pontos_turisticos2);
    getchar();

    ///Exibição dos dados
    printf("\nCarta 1\n");
    printf("Nome: %s\n", nome1);
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %d\n", populacao1);
    printf("PIB: %.2f\n", PIB1);
    printf("Area: %.2f\n", area1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);

    printf("\nCarta 2\n");
    printf("Nome: %s\n", nome2);
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %d\n", populacao2);
    printf("PIB: %.2f\n", PIB2);
    printf("Area: %.2f\n", area2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);

        return 0;
    }