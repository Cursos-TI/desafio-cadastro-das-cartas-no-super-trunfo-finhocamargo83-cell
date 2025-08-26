#include <stdio.h>

int main() {
    // --- Declaração de variáveis para a Carta 1 ---
    char estado1;
    char codigo1[5]; // Espaço para A01 e o caractere nulo ('\0')
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // --- Declaração de variáveis para a Carta 2 ---
    char estado2;
    char codigo2[5];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // ------------------------------------------
    // --- Entrada de dados para a PRIMEIRA Carta ---
    // ------------------------------------------
    printf("--- Cadastro da PRIMEIRA Carta ---\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1); // O espaço antes de %c ignora o 'enter' do input anterior.

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // ------------------------------------------
    // --- Entrada de dados para a SEGUNDA Carta ---
    // ------------------------------------------
    printf("\n--- Cadastro da SEGUNDA Carta ---\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // ------------------------------------------
    // --- Exibição das informações cadastradas ---
    // ------------------------------------------
    printf("\n========================================\n");
    printf("--- Cartas Cadastradas ---\n");

    // Exibe os dados da primeira carta
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1); // %.2f exibe 2 casas decimais
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibe os dados da segunda carta
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0; // O programa terminou com sucesso
}
