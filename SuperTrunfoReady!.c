#include <stdio.h>

int main(){
 // Declarando varias da duas cartas
    char estado1[50], estado2[50];
    char codigo1[10], codigo2[10];
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontoTuristicos1, pontosTuristicos2;
    float densidade1, densidade2;
    float PibPerCapita1, PibPerCapita2;
    float superPoder1, superPoder2;

    // CARTA 1 //
    printf("Digite o estado da primeira cidade: \n");
    scanf("%s", estado1);
    printf("Digite o codigo da cidade: \n");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: \n");
    scanf("%s", nome1);
    printf("Digite a populacao: \n");
    scanf("%d", &populacao1);
    printf("Digite a área (km²):\n");
    scanf("%f", area1);
    printf("Digite o PIB (em bilhões):\n");
    scanf("%f", pib1);
    printf("Digite a quantidade ponto turisticos: \n");
    scanf("%d", &pontoTuristicos1);
    
    
    // CARTA 2 //
    printf("Digite o estado da segunda cidade: \n");
    scanf("%s", estado2);
    printf("Digite o codigo da cidade: \n");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", nome2);
    printf("Digite a populacao: \n");
    scanf("%d", &populacao2);
    printf("Digite a área (km²):\n");
    scanf("%f", area2);
    printf("Digite o PIB (em bilhões):\n");
    scanf("%f", pib2);
    printf("Digite a quantidade ponto turisticos: \n");
    scanf("%d", &pontosTuristicos2);


    // Calculos das propriedades
    
    densidade1 = (float)populacao1 / area1;
    PibPerCapita1 = (float)pib1 / populacao1;
    superPoder1 = (float)populacao1, area1, pib1, pontoTuristicos1, PibPerCapita1 + (1 / densidade1);

    densidade2 = (float)populacao2 / area2;
    PibPerCapita2 = (float)pib2 / populacao2;
    superPoder2 = (float)populacao2, area2, pib2, pontosTuristicos2, PibPerCapita2 + (1 / densidade2);


    // Comparação de Atributos
    printf("\nComparação de Cartas:\n");

    // Comparando População
    printf("População: Carta 1 venceu (%d)\n", (populacao1 > populacao2) ? 1 : 0);

    // Comparando Área
    printf("Área: Carta 1 venceu (%d)\n", (area1 > area2) ? 1 : 0);

    // Comparando PIB
    printf("PIB: Carta 1 venceu (%d)\n", (pib1 > pib2) ? 1 : 0);

    // Comparando Pontos Turísticos
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", (pontoTuristicos1 > pontosTuristicos2) ? 1 : 0);

    // Comparando Densidade Populacional
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", (densidade1 > densidade2) ? 0 : 1);

    // Comparando PIB per Capita
    printf("PIB per Capita: Carta 1 venceu (%d)\n", (PibPerCapita1 > PibPerCapita2) ? 1 : 0);

    // Comparando Super Poder
    printf("Super Poder: Carta 1 venceu (%d)\n", (superPoder1 > superPoder2) ? 1 : 0);

return 0;
}