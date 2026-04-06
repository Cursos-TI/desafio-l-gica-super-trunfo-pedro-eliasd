#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estadoCarta1, estadoCarta2;
    char codigoCarta1[4], codigoCarta2[4], nomeCarta1[50], nomeCarta2[50];
    int pontoTuristicoCarta1, pontoTuristicoCarta2, populacaoCarta1, populacaoCarta2;
    float areaCarta1, areaCarta2, pibCarta1, pibCarta2, densidadePopCarta1, densidadePopCarta2, PibPerCaptaCarta1, PibPerCaptaCarta2, superPoderCarta1, superPoderCarta2;

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    printf("Olá seja bem vindo ao cadastro de cartas do Super Trunfo\nVamos começar cadastrando os dados da Carta 1\n");

    //carta 1
    printf("Digite o estado da carta 1(Letra de A a H):\n");
    scanf(" %c", &estadoCarta1);
    printf("Digite o código da carta 1(Letra do estado + numero de 01 a 04):\n");
    scanf("%s", codigoCarta1);
    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", nomeCarta1);
    printf("Digite o número de habitantes da cidade:\n");
    scanf("%d", &populacaoCarta1);
    printf("Digite a área da cidade (km²):\n");
    scanf("%f", &areaCarta1);
    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pibCarta1);
    printf("Digite o número de pontos turisticos da cidade:\n");
    scanf("%d", &pontoTuristicoCarta1);

    //Carta 2
    printf("Agora vamos cadastrar a segunda carta:\n");
    printf("Digite o estado da carta 2(Letra de A a H):\n");
    scanf(" %c", &estadoCarta2);
    printf("Digite o código da carta 2(Letra do estado + numero de 01 a 04):\n");
    scanf("%s", codigoCarta2);
    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", nomeCarta2);
    printf("Digite o número de habitantes da cidade:\n");
    scanf("%d", &populacaoCarta2);
    printf("Digite a área da cidade (km²):\n");
    scanf("%f", &areaCarta2);
    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pibCarta2);
    printf("Digite o número de pontos turisticos da cidade:\n");
    scanf("%d", &pontoTuristicoCarta2);

    /*
    //cartas ja cadastradas para testes
    //carta 1
    populacaoCarta1 = 1000;
    pibCarta1 = 600;
    areaCarta1= 450;
    pontoTuristicoCarta1 = 4;
    //carta2
    populacaoCarta2 = 1000;
    pibCarta2 = 600;
    areaCarta2 = 5000;
    pontoTuristicoCarta2 = 13;
    */

    //Area para o calculo das informações
    //carta 1
    densidadePopCarta1 = populacaoCarta1 / areaCarta1;
    PibPerCaptaCarta1 = pibCarta1 / populacaoCarta1;

    //carta 2
    densidadePopCarta2 = populacaoCarta2 / areaCarta2;
    PibPerCaptaCarta2 = pibCarta2 / populacaoCarta2;

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
        //Menu interativo com Switch
    int opcaoUser1, resultado1;
    printf("Agora você deve escolher o primeiro atributo que sera usado para comparar as duas cartas:\n");
    printf("Opção 1 - População\n");
    printf("Opção 2 - Area\n");
    printf("Opção 3 - PIB\n");
    printf("Opção 4 - Número de pontos turisticos\n");
    printf("Opção 5 - Densidade demográfica\n");
    printf("Digite o número da opção escolhida: ");
    scanf("%d", &opcaoUser1);

    switch (opcaoUser1)
    {
    case 1:
        resultado1 = populacaoCarta1 > populacaoCarta2 ? 1 : 0;
        break;
    case 2:
        resultado1 = areaCarta1 > areaCarta2 ? 1 : 0;
        break;
    case 3:
        resultado1 = pibCarta1 > pibCarta2 ? 1 : 0;
        break;
    case 4:
        resultado1 = pontoTuristicoCarta1 > pontoTuristicoCarta2 ? 1 : 0;
        break;
    case 5:
        resultado1 = densidadePopCarta1 < densidadePopCarta2 ? 1 : 0;
        break;
    default:
        printf("Opção inválida.\n");
        break;
    }

    int opcaoUser2, resultado2;
    printf("Escolha o segundo atributo que sera usado para comparar as duas cartas:\n");
    printf("Opção 1 - População\n");
    printf("Opção 2 - Area\n");
    printf("Opção 3 - PIB\n");
    printf("Opção 4 - Número de pontos turisticos\n");
    printf("Opção 5 - Densidade demográfica\n");
    printf("Digite o número da opção escolhida: ");
    scanf("%d", &opcaoUser2);

    if (opcaoUser1 == opcaoUser2) {
        printf("O mesmo atributo não pode ser selecionado duas vezes.\n");
    } else {
        switch (opcaoUser2)
        {
        case 1:
            resultado2 = populacaoCarta1 > populacaoCarta2 ? 1 : 0;
            break;
        case 2:
            resultado2 = areaCarta1 > areaCarta2 ? 1 : 0;
            break;
        case 3:
            resultado2 = pibCarta1 > pibCarta2 ? 1 : 0;
            break;
        case 4:
            resultado2 = pontoTuristicoCarta1 > pontoTuristicoCarta2 ? 1 : 0;
            break;
        case 5:
            resultado2 = densidadePopCarta1 < densidadePopCarta2 ? 1 : 0;
            break;
        default:
            printf("Opção inválida.\n");
            break;
        }
    }

    return 0;
}
