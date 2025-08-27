#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta
    char estado1[50], codigo1[10], nome1[50];
    unsigned long int populacao1;
    long int pib1;
    float area1;
    int pontos_turisticos1;
    float densidade1, pib_per_capita1, super_poder1;

    // Declaração das variáveis para a segunda carta
    char estado2[50], codigo2[10], nome2[50];
    unsigned long int populacao2;
    long int pib2;
    float area2;
    int pontos_turisticos2;
    float densidade2, pib_per_capita2, super_poder2;

    // --- Leitura dos dados da Carta 1 ---
    printf("--- Insira os dados da Carta 1 ---\n");
    printf("Estado: ");
    scanf(" %[^\n]", estado1);
    printf("Codigo: ");
    scanf(" %[^\n]", codigo1);
    printf("Nome: ");
    scanf(" %[^\n]", nome1);
    printf("Populacao: ");
    scanf("%lu", &populacao1);
    printf("Area (km2): ");
    scanf("%f", &area1);
    printf("PIB (milhoes de R$): ");
    scanf("%ld", &pib1);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // --- Leitura dos dados da Carta 2 ---
    printf("\n--- Insira os dados da Carta 2 ---\n");
    printf("Estado: ");
    scanf(" %[^\n]", estado2);
    printf("Codigo: ");
    scanf(" %[^\n]", codigo2);
    printf("Nome: ");
    scanf(" %[^\n]", nome2);
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area (km2): ");
    scanf("%f", &area2);
    printf("PIB (milhoes de R$): ");
    scanf("%ld", &pib2);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // --- Cálculo dos atributos derivados para a Carta 1 ---
    densidade1 = (float)populacao1 / area1;
    pib_per_capita1 = (float)pib1 / populacao1;

    // --- Cálculo dos atributos derivados para a Carta 2 ---
    densidade2 = (float)populacao2 / area2;
    pib_per_capita2 = (float)pib2 / populacao2;
    
    // --- Cálculo do Super Poder para a Carta 1 ---
    // A soma dos atributos deve ser convertida para float.
    // O inverso da densidade populacional é 1.0 / densidade1.
    // O tipo unsigned long int (populacao) e long int (pib) devem ser
    // convertidos explicitamente para float para evitar erros de cálculo.
    super_poder1 = (float)populacao1 + area1 + (float)pib1 + (float)pontos_turisticos1 + pib_per_capita1 + (1.0 / densidade1);

    // --- Cálculo do Super Poder para a Carta 2 ---
    super_poder2 = (float)populacao2 + area2 + (float)pib2 + (float)pontos_turisticos2 + pib_per_capita2 + (1.0 / densidade2);


    // --- Exibição e comparação de resultados ---
    printf("\n--- Comparacao de Cartas ---\n");

    // Comparação de População (maior valor vence)
    // O operador ternário (?:) é usado para exibir o vencedor e o resultado booleano (1 ou 0).
    printf("Populacao: Carta %d venceu (%d)\n", populacao1 > populacao2 ? 1 : 2, populacao1 > populacao2 ? 1 : 0);

    // Comparação de Área (maior valor vence)
    printf("Area: Carta %d venceu (%d)\n", area1 > area2 ? 1 : 2, area1 > area2 ? 1 : 0);

    // Comparação de PIB (maior valor vence)
    printf("PIB: Carta %d venceu (%d)\n", pib1 > pib2 ? 1 : 2, pib1 > pib2 ? 1 : 0);

    // Comparação de Pontos Turísticos (maior valor vence)
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", pontos_turisticos1 > pontos_turisticos2 ? 1 : 2, pontos_turisticos1 > pontos_turisticos2 ? 1 : 0);

    // Comparação de Densidade Populacional (menor valor vence)
    printf("Densidade Populacional: Carta %d venceu (%d)\n", densidade1 < densidade2 ? 1 : 2, densidade1 < densidade2 ? 1 : 0);

    // Comparação de PIB per Capita (maior valor vence)
    printf("PIB per Capita: Carta %d venceu (%d)\n", pib_per_capita1 > pib_per_capita2 ? 1 : 2, pib_per_capita1 > pib_per_capita2 ? 1 : 0);

    // Comparação de Super Poder (maior valor vence)
    printf("Super Poder: Carta %d venceu (%d)\n", super_poder1 > super_poder2 ? 1 : 2, super_poder1 > super_poder2 ? 1 : 0);

    return 0;
}