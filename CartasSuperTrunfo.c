#include <stdio.h>

int main(){
    //===========================================
    //1. DECLARÇÃO DE VARIÁVEIS
    //===========================================
    
    //----- CARTA 1 -----
    int populacao1, pontos_turisticos1;
    float area_em_sqkm1, PIB1, Densidade_Populacional1, PIB_per_Capita1;
    char Estado1;                                    // Guarda a primeira letra exemplo: 'A', 'B', 'C', etc.
    char Codigo_Carta1[4], Nome_da_Cidade1[50];     // Recebe a letra + 2 dígitos + '\0' (ex: "A01") e Guarda o nome da cidade.

    //----- CARTA 2 -----

    int populacao2, pontos_turisticos2;
    float area_em_sqkm2, PIB2, Densidade_Populacional2, PIB_per_Capita2;
    char Estado2;                                    // Guarda a primeira letra exemplo: 'A', 'B', 'C', etc.
    char Codigo_Carta2[4], Nome_da_Cidade2[50];     // Recebe a letra + 2 dígitos + '\0' (ex: "A01") e Guarda o nome da cidade.

    //===========================================
    //2. ENTRADA DE DADOS E CALCULOS - CARTA 1
    //===========================================
    printf("Carta 1\n");
    
    // Leitura do Estado:
    printf("Digite a letra do Estado (A a H):\n");
    scanf(" %c", &Estado1);
    
    // Leitura do Código da Carta:
    printf("Digite o Codigo da Carta (ex: A01, B02):\n");
    scanf("%s", Codigo_Carta1);

    // Leitura do Nome da Cidade:
    printf("Digite o Nome da Cidade:\n");
    scanf("%s", Nome_da_Cidade1);

    // Leitura da População:
    printf("Digite o numero de habitantes:\n");
    scanf("%d",&populacao1);

    // Leitura da area em km²:
    printf("Digite a area da cidade em km quadrados:\n");
    scanf("%f", &area_em_sqkm1);

    // Leitura do PIB:
    printf("Digite o PIB da Cidade:\n");
    scanf("%f", &PIB1);

    // Leitura do Numero de Pontos Turisticos:
    printf("Digite o numero de pontos turisticos da cidade:\n");
    scanf("%d", &pontos_turisticos1);

    // Calculo da Media:
    Densidade_Populacional1 = (float) populacao1 / area_em_sqkm1;
    PIB_per_Capita1 = PIB1 * 1000000000.0 / (float) populacao1;

    //===========================================
    //3. ENTRADA DE DADOS E CALCULOS - CARTA 1
    //===========================================
    printf("Carta 2\n");
    
    // Leitura do Estado:
    printf("Digite a letra do Estado (A a H):\n");
    scanf(" %c", &Estado2);
    
    // Leitura do Código da Carta:
    printf("Digite o Codigo da Carta (ex: A01, B02):\n");
    scanf("%s", Codigo_Carta2);

    // Leitura do Nome da Cidade:
    printf("Digite o Nome da Cidade:\n");
    scanf("%s", Nome_da_Cidade2);

    // Leitura da População:
    printf("Digite o numero de habitantes:\n");
    scanf("%d",&populacao2);

    // Leitura da area em km²:
    printf("Digite a area da cidade em km quadrados:\n");
    scanf("%f", &area_em_sqkm2);

    // Leitura do PIB:
    printf("Digite o PIB da Cidade:\n");
    scanf("%f", &PIB2);

    // Leitura do Numero de Pontos Turisticos:
    printf("Digite o numero de pontos turisticos da cidade:\n");
    scanf("%d", &pontos_turisticos2);
    
    // Calculo da Media:
    Densidade_Populacional2 = (float) populacao2 / area_em_sqkm2;
    PIB_per_Capita2 = PIB2 * 1000000000.0 / (float) populacao2;
        
    //===========================================
    //4. RETORNO DE DADOS AO USUARIO
    //===========================================
    printf("--------------------------------------\n");
    printf("-------------Super Trunfo-------------\n");
    printf("--------------------------------------\n");

    printf( "Carta 1\n" 
            "Estado: %c\n" 
            "Codigo: %s\n" 
            "Nome da Cidade: %s\n" 
            "Populacao: %d\n" 
            "Area: %.2f km quadrados\n" 
            "PIB: %.2f bilhoes de reais\n"
            "Numero de Pontos Turisticos: %d\n"
            "Densidade Populacional: %.2f hab/km quadrado\n" //Media1
            "PIB per Capita: %.2f reais\n", //Media1
            Estado1, Codigo_Carta1, Nome_da_Cidade1, populacao1, area_em_sqkm1,
            PIB1, pontos_turisticos1, Densidade_Populacional1, PIB_per_Capita1);

    printf("---------------------------------------------------------\n");

    printf( "Carta 2\n" 
            "Estado: %c\n" 
            "Codigo: %s\n" 
            "Nome da Cidade: %s\n" 
            "Populacao: %d\n" 
            "Area: %.2f km quadrados\n" 
            "PIB: %.2f bilhoes de reais\n"
            "Numero de Pontos Turisticos: %d\n"
            "Densidade Populacional: %.2f hab/km quadrado\n"//Media2
            "PIB per Capita: %.2f reais\n", //Media2
            Estado2, Codigo_Carta2, Nome_da_Cidade2, populacao2, area_em_sqkm2,
            PIB2, pontos_turisticos2, Densidade_Populacional2, PIB_per_Capita2);
    
    return 0;

}