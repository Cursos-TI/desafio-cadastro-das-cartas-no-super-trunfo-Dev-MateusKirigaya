#include <stdio.h>

int main() {
    // --- Declarações da Carta 1 ---
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1; // em bilhões de reais
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    // --- Declarações da Carta 2 ---
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2; // em bilhões de reais
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    // --- Entrada de dados da Carta 1 ---
    printf("Cadastro da Carta 1:\n");
    printf("Informe o estado (letra de A a H): ");
    scanf(" %c", &estado1);
    printf("Informe o código da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade1);
    printf("Informe a população: ");
    scanf("%lu", &populacao1);
    printf("Informe a área em km²: ");
    scanf("%f", &area1);
    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // --- Cálculos da Carta 1 ---
    densidade1 = (float)populacao1 / area1; // habitantes por km²
    pibPerCapita1 = (pib1 * 1e9f) / (float)populacao1; // reais por pessoa
    superPoder1 = (float)populacao1          // população
                  + area1                   // área
                  + pib1                   // PIB em bilhões (mantido na mesma unidade para consistência relativa)
                  + (float)pontosTuristicos1 // pontos turísticos
                  + pibPerCapita1           // PIB per capita
                  + (1.0f / densidade1);    // inverso da densidade

    // --- Entrada de dados da Carta 2 ---
    printf("\nCadastro da Carta 2:\n");
    printf("Informe o estado (letra de A a H): ");
    scanf(" %c", &estado2);
    printf("Informe o código da carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade2);
    printf("Informe a população: ");
    scanf("%lu", &populacao2);
    printf("Informe a área em km²: ");
    scanf("%f", &area2);
    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // --- Cálculos da Carta 2 ---
    densidade2 = (float)populacao2 / area2; // habitantes por km²
    pibPerCapita2 = (pib2 * 1e9f) / (float)populacao2; // reais por pessoa
    superPoder2 = (float)populacao2
                  + area2
                  + pib2
                  + (float)pontosTuristicos2
                  + pibPerCapita2
                  + (1.0f / densidade2);

    // --- Exibição dos dados completos das cartas ---
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // --- Comparações ---
    int vence_populacao = (populacao1 > populacao2) ? 1 : 0;
    int vence_area = (area1 > area2) ? 1 : 0;
    int vence_pib = (pib1 > pib2) ? 1 : 0;
    int vence_pontos = (pontosTuristicos1 > pontosTuristicos2) ? 1 : 0;
    int vence_densidade = (densidade1 < densidade2) ? 1 : 0; // menor vence
    int vence_pibPerCapita = (pibPerCapita1 > pibPerCapita2) ? 1 : 0;
    int vence_superPoder = (superPoder1 > superPoder2) ? 1 : 0;

    // --- Exibição das comparações ---
    printf("\nComparação de Cartas:\n\n");
    printf("População: Carta %d venceu (%d)\n", vence_populacao ? 1 : 2, vence_populacao); 
    printf("Área: Carta %d venceu (%d)\n", vence_area ? 1 : 2, vence_area);
    printf("PIB: Carta %d venceu (%d)\n", vence_pib ? 1 : 2, vence_pib);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", vence_pontos ? 1 : 2, vence_pontos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", vence_densidade ? 1 : 2, vence_densidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", vence_pibPerCapita ? 1 : 2, vence_pibPerCapita);
    printf("Super Poder: Carta %d venceu (%d)\n", vence_superPoder ? 1 : 2, vence_superPoder);

    return 0;
}