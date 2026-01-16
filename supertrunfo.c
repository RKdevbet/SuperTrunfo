#include <stdio.h>
#include <string.h>

int main() {
    //apresentação do jogo
    printf("Seja bem-vindo ao   Super Trunfo!\n");
    //declaração das variáveis de nome do jogador
    char nome[50];
    //linha em branco para melhor visualização
    printf("\n");

    // Solicita o nome do jogador
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    printf("\033[A\33[2K\r"); // Limpa a linha anterior])

    printf("Olá, %s! Vamos começar o jogo.\n", nome);

    //linha em branco para melhor visualização
    printf("\n");
    // Apresenta as cartas disponíveis
    printf("Aqui estão as cartas disponíveis:\n");

    //linha em branco para melhor visualização
    printf("\n");

    // Declaração das variáveis para armazenar os dados das cartas
    char Estado[][20] = {"Pernambuco", "Amazonas"};
    char Codigo_da_carta[][5] = {"A01", "A02"};
    char Nome_da_cidade[][20] = {"Recife", "Manaus"};
    int Populacao[] = { 1653461, 2184653 };
    float Area[] = { 218.43, 114.97 };
    float PIB[] = {30000000, 25000000 };
    int Numeros_de_pontos_turisticos[] = { 15, 20 };

    // Exibindo os dados da carta A01
    printf("Carta A01:\n");
    printf("Estado: %s\n", Estado[0]);
    printf("Codigo da carta: %s\n", Codigo_da_carta[0]);
    printf("Nome da cidade: %s\n", Nome_da_cidade[0]);
    printf("Populacao: %d\n", Populacao[0]);
    printf("Area: %.2f km²\n", Area[0]);
    printf("PIB: R$ %.2f\n", PIB[0]);
    printf("Numeros de pontos turisticos: %d\n", Numeros_de_pontos_turisticos[0]);
    printf("\n");
    //barra de separação entre as cartas
    printf("--------------------------------------------------\n");
    printf("\n");

    // Exibindo os dados da segunda carta A02
    //cor verde para destacar as attributos da carta
    printf("\033[0;32m");
    printf("Carta A02:\n");
    printf("Estado: %s\n", Estado[1]);
    printf("Codigo da carta: %s\n", Codigo_da_carta[1]);
    printf("Nome da cidade: %s\n", Nome_da_cidade[1]);
    printf("Populacao: %d\n", Populacao[1]);
    printf("Area: %.2f km²\n", Area[1]);
    printf("PIB: R$ %.2f\n", PIB[1]);
    printf("Numeros de pontos turisticos: %d\n", Numeros_de_pontos_turisticos[1]);
    printf("\n");
    //Informação final ao jogador na cor branca
    printf("\033[0m");
    printf("\nBoa sorte no jogo, %s!\n", nome);
    return 0;
    
}
    