#include <stdio.h>

int main(){
    int populacao1, populacao2; 
    int numero_de_pontos_turisticos1, numero_de_pontos_turisticos2;
    float area_em_sqkm1, area_em_sqkm2;
    float PIB1, PIB2;
    char Estado1, Estado2;                           // Guarda a primeira letra exemplo: 'A', 'B', 'C', etc.
    char Codigo_Carta1[4], Codigo_Carta2[4];        // Recebe a letra + 2 dígitos + '\0' (ex: "A01")
    char Nome_da_Cidade1[50], Nome_da_Cidade2[50]; // Guarda o nome da cidade.
  
    //CARTA 1
    printf("Carta 1\n");
    
    // 1. Leitura do Estado
    printf("Digite a letra do Estado (A a H):\n");
    scanf(" %c", &Estado1);
    
    // 2. Leitura do Código da Carta
    printf("Digite o Codigo da Carta (ex: A01, B03):\n");
    scanf("%s", Codigo_Carta1);

    // 3. Leitura do Nome da Cidade
    printf("Digite o Nome da Cidade:\n");
    scanf("%s", Nome_da_Cidade1);

    // 4. Leitura da População
    printf("Digite o numero de habitantes:\n");
    scanf("%d",&populacao1);

    // 5. Leitura da area em km²
    printf("Digite a area da cidade em km quadrados:\n");
    scanf("%f", &area_em_sqkm1);

    // 6. Leitura do PIB
    printf("Digite o PIB da Cidade:\n");
    scanf("%f", &PIB1);

    // 7. Leitura do Numero de Pontos Turisticos
    printf("Digite o numero de pontos turisticos da cidade:\n");
    scanf("%d", &numero_de_pontos_turisticos1);
    
    //CARTA 2
    printf("Carta 2\n");
    
    // 1. Leitura do Estado
    printf("Digite a letra do Estado (A a H):\n");
    scanf(" %c", &Estado2);
    
    // 2. Leitura do Código da Carta
    printf("Digite o Codigo da Carta (ex: A01, B03):\n");
    scanf("%s", Codigo_Carta2);

    // 3. Leitura do Nome da Cidade
    printf("Digite o Nome da Cidade:\n");
    scanf("%s", Nome_da_Cidade2);

    // 4. Leitura da População
    printf("Digite o numero de habitantes:\n");
    scanf("%d",&populacao2);

    // 5. Leitura da area em km²
    printf("Digite a area da cidade em km quadrados:\n");
    scanf("%f", &area_em_sqkm2);

    // 6. Leitura do PIB
    printf("Digite o PIB da Cidade:\n");
    scanf("%f", &PIB2);

    // 7. Leitura do Numero de Pontos Turisticos
    printf("Digite o numero de pontos turisticos da cidade:\n");
    scanf("%d", &numero_de_pontos_turisticos2);

    // Retorno ao usuario
    printf( "Carta 1\n" 
            "Estado: %c\n" 
            "Codigo: %s\n" 
            "Nome da Cidade: %s\n", 
            Estado1, Codigo_Carta1, Nome_da_Cidade1);
    printf( "Populacao: %d\n" 
            "Area: %.2f km quadrados\n" 
            "PIB: %.2f bilhoes de reais\n"
            "Numero de Pontos Turisticos: %d\n",
            populacao1, area_em_sqkm1, PIB1,numero_de_pontos_turisticos1);
            
    printf( "Carta 2\n" 
            "Estado: %c\n" 
            "Codigo: %s\n" 
            "Nome da Cidade: %s\n", 
            Estado2, Codigo_Carta2, Nome_da_Cidade2);
    printf( "Populacao: %d\n" 
            "Area: %.2f km quadrados\n" 
            "PIB: %.2f bilhoes de reais\n"
            "Numero de Pontos Turisticos: %d\n",
            populacao2, area_em_sqkm2, PIB2,numero_de_pontos_turisticos2);
    
    return 0;

}