#include <stdio.h>

int main() {
    // Variáveis para a primeira carta
    char carta1[10] = "Carta 1";
    char estado1;
    char codigo1[4];
    char nomeCidade1[100];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidadepopulacional1, pibpercapita1, superPoder1;

    // Variáveis para a segunda carta
    char carta2[10] = "Carta 2";
    char estado2;
    char codigo2[4];
    char nomeCidade2[100];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidadepopulacional2, pibpercapita2, superPoder2;

    // Variáveis de comparação
    int compPopulacao, compArea, compPib, compTurismo, compDensidade, compPibpercapita, compSuperPoder;

    // Instruções para o usuário - Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Informe o Estado (letra de A a H): ");
    scanf(" %c", &estado1);  

    printf("Informe o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);  // Lê a linha inteira com espaços

    printf("Informe a População: ");
    scanf("%lu", &populacao1);

    printf("Informe a Área (em km²): ");
    scanf("%f", &area1);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cadastro da segunda carta
    printf("\nCadastro da Carta 2:\n");
    printf("Informe o Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Informe o Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Informe a População: ");
    scanf("%lu", &populacao2);

    printf("Informe a Área (em km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo de densidade populacional e PIB per capita
    densidadepopulacional1 = (float) populacao1 / area1;
    pibpercapita1 = pib1 * 1000000000 / populacao1;  // PIB em bilhões → dividir por pessoa

    densidadepopulacional2 = (float) populacao2 / area2;
    pibpercapita2 = pib2 * 1000000000 / populacao2;

    // Cálculo do Super Poder
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibpercapita1 + (1 / densidadepopulacional1);
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibpercapita2 + (1 / densidadepopulacional2);

    
    // Exibição das informações
    printf("\nInformações das Cartas Cadastradas\n");

    printf("\n%s:\n", carta1);
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n%s:\n", carta2);
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    //Exibição da comparação de um dos atributos das cartas e definição do vencedor
    printf("\nComparação de cartas (Atributo População):\n");
    printf("\nCarta 1 - %s (%c): %lu\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %lu\n", nomeCidade2, estado2, populacao2);

    if(populacao1 > populacao2){
        printf("Resultado: Carta 1 (%s) venceu!", nomeCidade1);

    } else {
        printf("Resultado: Carta 2 (%s) venceu!", nomeCidade2);

    }

    
    return 0;
}
