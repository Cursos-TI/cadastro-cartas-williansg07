#include <stdio.h>

int main(){
    //===========================================
    //1. DECLARÇÃO DE VARIÁVEIS
    //===========================================

    //----- CARTA 1 -----
    unsigned int populacao1; 
    int pontosTuristicos1; 
    float areaEmSqkm1, pib1, densidadePopulacional1, pibPerCapita1, superPoder1;
    char estado1;                                    // Guarda a primeira letra exemplo: 'A', 'B', 'C', etc.
    char codigoCarta1[4], nomeDaCidade1[50];     // Recebe a letra + 2 dígitos + '\0' (ex: "A01") e Guarda o nome da cidade.

    //----- CARTA 2 -----
    unsigned int populacao2; 
    int pontosTuristicos2, resultado2;
    float areaEmSqkm2, pib2, densidadePopulacional2, pibPerCapita2, superPoder2;
    char estado2;                                    // Guarda a primeira letra exemplo: 'A', 'B', 'C', etc.
    char codigoCarta2[4], nomeDaCidade2[50];     // Recebe a letra + 2 dígitos + '\0' (ex: "A01") e Guarda o nome da cidade.

    //----- COMBATE -----
    int resultadoPop, resultadoArea, resultadoPib, resultadoTuristico, resultadoDensidade, resultadoCapita, resultadoSuper;

    //===========================================
    //2. ENTRADA DE DADOS E CALCULOS - CARTA 1
    //===========================================
    printf("Carta 1\n");

    // Leitura do Estado:
    printf("Digite a letra do Estado (A a H):\n");
    scanf(" %c", &estado1);

    // Leitura do Código da Carta:
    printf("Digite o Codigo da Carta (ex: A01, B02):\n");
    scanf("%s", codigoCarta1);

    // Leitura do Nome da Cidade:
    printf("Digite o Nome da Cidade:\n");
    scanf("%s", nomeDaCidade1);

    // Leitura da População:
    printf("Digite o numero de habitantes:\n");
    scanf("%u",&populacao1);

    // Leitura da area em km²:
    printf("Digite a area da cidade em km quadrados:\n");
    scanf("%f", &areaEmSqkm1);

    // Leitura do PIB:
    printf("Digite o PIB da Cidade:\n");
    scanf("%f", &pib1);

    // Leitura do Numero de Pontos Turisticos:
    printf("Digite o numero de pontos turisticos da cidade:\n");
    scanf("%d", &pontosTuristicos1);

    // Calculo da Media:
    densidadePopulacional1 = (float) populacao1 / areaEmSqkm1;
    pibPerCapita1 = pib1 * 1000000000.0 / (float) populacao1;

    //Calculo do Super Poder:
    superPoder1 = (float) populacao1 + areaEmSqkm1 + (pib1 * 1000000000.0) + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidadePopulacional1);

    //===========================================
    //3. ENTRADA DE DADOS E CALCULOS - CARTA 1
    //===========================================
    printf("Carta 2\n");

    // Leitura do Estado:
    printf("Digite a letra do Estado (A a H):\n");
    scanf(" %c", &estado2);

    // Leitura do Código da Carta:
    printf("Digite o Codigo da Carta (ex: A01, B02):\n");
    scanf("%s", codigoCarta2);

    // Leitura do Nome da Cidade:
    printf("Digite o Nome da Cidade:\n");
    scanf("%s", nomeDaCidade2);

    // Leitura da População:
    printf("Digite o numero de habitantes:\n");
    scanf("%u",&populacao2);

    // Leitura da area em km²:
    printf("Digite a area da cidade em km quadrados:\n");
    scanf("%f", &areaEmSqkm2);

    // Leitura do PIB:
    printf("Digite o PIB da Cidade:\n");
    scanf("%f", &pib2);

    // Leitura do Numero de Pontos Turisticos:
    printf("Digite o numero de pontos turisticos da cidade:\n");
    scanf("%d", &pontosTuristicos2);

    // Calculo da Media:
    densidadePopulacional2 = (float) populacao2 / areaEmSqkm2;
    pibPerCapita2 = pib2 * 1000000000.0 / (float) populacao2;

    //Calculo do Super Poder:
    superPoder2 = (float) populacao2 + areaEmSqkm2 + (pib2 * 1000000000.0) + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidadePopulacional2);

    //===========================================
    //4. RETORNO DE DADOS AO USUARIO
    //===========================================
    printf("--------------------------------------\n"
           "-------------Super Trunfo-------------\n"
           "--------------------------------------\n");

    printf( "Carta 1\n"
            "Super Poder 1: %.2f\n"
            "Estado: %c\n" 
            "Codigo: %s\n" 
            "Nome da Cidade: %s\n" 
            "Populacao: %u\n" 
            "Area: %.2f km quadrados\n" 
            "PIB: %.2f bilhoes de reais\n"
            "Numero de Pontos Turisticos: %d\n"
            "Densidade Populacional: %.2f hab/km quadrado\n" //Media1
            "PIB per Capita: %.2f reais\n", //Media1
            superPoder1, estado1, codigoCarta1, nomeDaCidade1, populacao1, areaEmSqkm1,
            pib1, pontosTuristicos1, densidadePopulacional1, pibPerCapita1);

    printf("---------------------------------------------------------\n");

    printf( "Carta 2\n"
            "Super Poder 2: %.2f\n" 
            "Estado: %c\n" 
            "Codigo: %s\n" 
            "Nome da Cidade: %s\n" 
            "Populacao: %u\n" 
            "Area: %.2f km quadrados\n" 
            "PIB: %.2f bilhoes de reais\n"
            "Numero de Pontos Turisticos: %d\n"
            "Densidade Populacional: %.2f hab/km quadrado\n"//Media2
            "PIB per Capita: %.2f reais\n", //Media2
            superPoder2, estado2, codigoCarta2, nomeDaCidade2, populacao2, areaEmSqkm2,
            pib2, pontosTuristicos2, densidadePopulacional2, pibPerCapita2);

    //===========================================
    //5. CALCULO DO COMBATE
    //===========================================    
    resultadoPop = populacao1 > populacao2;
    resultadoArea = areaEmSqkm1 > areaEmSqkm2;
    resultadoPib = pib1 > pib2;
    resultadoTuristico = pontosTuristicos1 > pontosTuristicos2;
    resultadoDensidade = (1.0 / densidadePopulacional1) > (1.0 / densidadePopulacional2);
    resultadoCapita = pibPerCapita1 > pibPerCapita2;
    resultadoSuper = superPoder1 > superPoder2;

    //===========================================
    //6. COMBATE
    //===========================================
    printf("--------------------------------------\n"
           "---------------COMABTE----------------\n"
           "--------------------------------------\n");

    printf("Populacao: Carta 1 venceu (%d)\n"
           "Area: Carta 1 venceu (%d)\n"
           "PIB: Carta 1 venceu (%d)\n"
           "Pontos Turisticos: Carta 1 venceu (%d)\n"
           "Densidade Populacional: Carta 2 venceu (%d)\n"
           "PIB per Capita: Carta 1 venceu (%d)\n"
           "Super Poder: Carta 1 venceu (%d)\n",
           resultadoPop, resultadoArea, resultadoPib, resultadoTuristico,
           resultadoDensidade, resultadoCapita, resultadoSuper);

    printf("--------------VENCEDOR CARTA 1--------------\n");

    return 0;

}