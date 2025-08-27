#include <stdio.h>

int main() {
    // --- Declaração de variáveis para a Carta 1 ---
    char estado1;
    char codigo1[5]; 
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1; // Variável para armazenar o cálculo
    float pibPercapita1;          // Variável para armazenar o cálculo

    // --- Declaração de variáveis para a Carta 2 ---
    char estado2;
    char codigo2[5];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPercapita2;

    // ------------------------------------------
    // --- Entrada de dados para a PRIMEIRA Carta ---
    // ------------------------------------------
    printf("--- Cadastro da PRIMEIRA Carta ---\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1); 

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // -- Operacao de Calculo de Densidade Populacional e Renda Per Capita --
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPercapita1 = pib1 / populacao1;


    // ------------------------------------------
    // --- Entrada de dados para a SEGUNDA Carta ---
    // ------------------------------------------
    printf("\n--- Cadastro da SEGUNDA Carta ---\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // -- Operacao de Calculo de Densidade Populacional e Renda Per Capita --
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPercapita2 = pib2 / populacao2;


    // ------------------------------------------
    // --- Exibicao das informacoes cadastradas ---
    // ------------------------------------------
    printf("\n========================================\n");
    printf("--- Cartas Cadastradas ---\n");

    // Exibe os dados da primeira carta
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f\n", pibPercapita1);

    // Exibe os dados da segunda carta
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f\n", pibPercapita2);


    return 0; // O programa terminou com sucesso
}
