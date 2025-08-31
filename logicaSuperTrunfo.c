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

    // Variável escolha de opção no menu
    int escolhaAtributo1, escolhaAtributo2;

    // Instruções para o usuário - Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Informe o Estado (letra de A a H): ");
    scanf(" %c", &estado1);  
    printf("Informe o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
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
    pibpercapita1 = pib1 * 1000000000 / populacao1;

    densidadepopulacional2 = (float) populacao2 / area2;
    pibpercapita2 = pib2 * 1000000000 / populacao2;

    // Cálculo do Super Poder
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibpercapita1 + (1 / densidadepopulacional1);
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibpercapita2 + (1 / densidadepopulacional2);

    // Impressão do menu inicial
    printf("\n*** Super Trunfo - Comparação ***\n");
    printf("Escolha dois atributos para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");

    printf("Opção 1: ");
    scanf("%d", &escolhaAtributo1);

    // Menu dinâmico (não mostrar atributo repetido)
    printf("\nAgora escolha outro atributo (diferente de %d):\n", escolhaAtributo1);
    if (escolhaAtributo1 != 1) printf("1. População\n");
    if (escolhaAtributo1 != 2) printf("2. Área\n");
    if (escolhaAtributo1 != 3) printf("3. PIB\n");
    if (escolhaAtributo1 != 4) printf("4. Pontos Turísticos\n");
    if (escolhaAtributo1 != 5) printf("5. Densidade Demográfica\n");

    printf("Opção 2: ");
    scanf("%d", &escolhaAtributo2);

    if (escolhaAtributo1 == escolhaAtributo2) {
        printf("Erro: você não pode escolher o mesmo atributo duas vezes!\n");
        return 1;
    }

    printf("\nComparação entre %s e %s:\n", nomeCidade1, nomeCidade2);

    // Valores para soma
    float valor1A = 0, valor1B = 0;
    float valor2A = 0, valor2B = 0;

    // Comparação do primeiro atributo
    switch (escolhaAtributo1) {
        case 1:
            valor1A = populacao1; valor1B = populacao2;
            printf("Atributo: População\n");
            break;
        case 2:
            valor1A = area1; valor1B = area2;
            printf("Atributo: Área\n");
            break;
        case 3:
            valor1A = pib1; valor1B = pib2;
            printf("Atributo: PIB\n");
            break;
        case 4:
            valor1A = pontosTuristicos1; valor1B = pontosTuristicos2;
            printf("Atributo: Pontos Turísticos\n");
            break;
        case 5:
            valor1A = densidadepopulacional1; valor1B = densidadepopulacional2;
            printf("Atributo: Densidade Demográfica (menor vence)\n");
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    printf("%s: %.2f\n", nomeCidade1, valor1A);
    printf("%s: %.2f\n", nomeCidade2, valor1B);

    // Comparação do segundo atributo
    switch (escolhaAtributo2) {
        case 1:
            valor2A = populacao1; valor2B = populacao2;
            printf("Atributo: População\n");
            break;
        case 2:
            valor2A = area1; valor2B = area2;
            printf("Atributo: Área\n");
            break;
        case 3:
            valor2A = pib1; valor2B = pib2;
            printf("Atributo: PIB\n");
            break;
        case 4:
            valor2A = pontosTuristicos1; valor2B = pontosTuristicos2;
            printf("Atributo: Pontos Turísticos\n");
            break;
        case 5:
            valor2A = densidadepopulacional1; valor2B = densidadepopulacional2;
            printf("Atributo: Densidade Demográfica (menor vence)\n");
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    printf("%s: %.2f\n", nomeCidade1, valor2A);
    printf("%s: %.2f\n", nomeCidade2, valor2B);

    // Soma dos atributos
    float soma1 = valor1A + valor2A;
    float soma2 = valor1B + valor2B;

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", nomeCidade1, soma1);
    printf("%s: %.2f\n", nomeCidade2, soma2);

    // Resultado final com operador ternário
    char *resultado = (soma1 > soma2) ? nomeCidade1 : 
                      (soma2 > soma1) ? nomeCidade2 : "Empate!";

    printf("\nVencedor: %s\n", resultado);

    return 0;
}
