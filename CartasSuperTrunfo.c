#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1[20] , estado2[20];
  char codigo1[5] , codigo2[5];
  char cidade1[20] , cidade2[20];
  int populacao1 , populacao2;
  float area1 , area2;
  float pib1 , pib2;
  int turista1 , turista2;
  float densidade1 , densidade2;
  float pib_per_capita1 , pib_per_capita2;

  // Área para entrada de dados
  // CARTA 1
  printf("     Super Trunfo\n\n");
  printf("Insira os dados da Carta 1\n");
  printf("Estado: ");
  scanf("%s", estado1);
  printf("Código: ");
  scanf("%s" , codigo1);
  printf("Cidade: ");
  scanf("%s" , cidade1);
  printf("População: ");
  scanf("%d" , &populacao1);
  printf("Área: ");
  scanf("%f" , &area1);
  printf("PIB: ");
  scanf("%f" , &pib1);
  printf("Pontos turísticos: ");
  scanf("%d" , &turista1);

  // Cálculo da densidade demográfica 1
  densidade1 = populacao1 / area1;

  // Cálculo do PIB per capita 1
  pib_per_capita1 = pib1 / populacao1;

  printf("\nDensidade Demográfica: %.2f habitantes por km²\n", densidade1);
  printf("PIB per capita: R$ %.2f\n", pib_per_capita1);

  // CARTA 2
  printf("\nInsira os dados da Carta 2\n");
  printf("Estado: ");
  scanf("%s", estado2);
  printf("Código: ");
  scanf("%s" , codigo2);
  printf("Cidade: ");
  scanf("%s" , cidade2);
  printf("População: ");
  scanf("%d" , &populacao2);
  printf("Área: ");
  scanf("%f" , &area2);
  printf("PIB: ");
  scanf("%f" , &pib2);
  printf("Pontos turísticos: ");
  scanf("%d" , &turista2);

// Cálculo da densidade demográfica 2
  densidade2 = populacao2 / area2;

  // Cálculo do PIB per capita 2
  pib_per_capita2 = pib2 / populacao2;

  printf("\nDensidade Demográfica: %.2f habitantes por km²\n", densidade2);
  printf("PIB per capita: R$ %.2f\n\n", pib_per_capita2);

  // Área para exibição dos dados da cidade
    printf("Comparação de cartas (Atributo: Área)\n\n");
    printf("Carta 1 - %s(%s): %.2f km²\n", estado1, codigo1, area1);
    printf("Carta 2 - %s(%s): %.2f km²\n", estado2, codigo2, area2);

    if (area1 > area2) {
        printf("Resultado:Carta 1 (%s) venceu.\n\n", estado1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu.\n\n", estado2);
    }

return 0;
} 
