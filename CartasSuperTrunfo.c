#include <stdio.h>
#include <string.h> //adicionei para usar a função de colocar o estado com espaçamento se a pessoa quiser

int main() {
    char estado, estadoo; //uma letra de 'A' a 'H' representando um dos 8 estados;
    char codigo[3], codigo1[3]; //a letra do estado e um numero  de 01 a 04;
    char cidade[25], cidade1[25]; //variavel para armazenar o nome da cidade;
    unsigned int populacao, populacao1; //numero de habitantes da cidade;
    float area, area1; //area em km2 da cidade;
    float pib, pib1; //produto interno bruto em reais da cidade;
    int pontos, pontos1; //quantidade de pontos turisticos da cidade;
    float densidade1; // densidade populacional
    float percapta1; // pib per capita
    float densidade2; 
    float percapta2;

    printf("Carta 1:\n");
    printf("Digite uma letra de 'A' a 'H' representando um dos oito estados: \n"); //comando para o usuario digitar uma letra;
    scanf("%c", &estado); //leitura da letra do estado;
    printf("Digite a letra anterior e um número de 01 a 04: \n");
    scanf("%s", codigo);
    getchar(); //limpa o \n do buffer
    printf("Digite o nome da cidade: \n");
    fgets(cidade, sizeof(cidade), stdin); //usando fgets para ler o nome da cidade mesmo com espaços;
    cidade[strcspn(cidade, "\n")] = 0; //removendo o caractere de nova linha;
    printf("Digite o número de habitantes da cidade: \n");
    scanf("%u", &populacao);
    printf("Digite a área em km2 da cidade: \n");
    scanf("%f", &area);
    // após inserir a populaçao e area é possivel calcular a densidade
      densidade1 = (float) populacao / area;
    printf("Digite o produto interno bruto em reais da cidade: \n");
    scanf("%f", &pib);
    //após inserir o pib é possivel calcular o pib per capita
        percapta1 = (float) pib / populacao;
    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &pontos);
      printf("\n\n"); //apenas para espaçar as cartas;
    printf("Carta 1:\n"); //imprimindo os dados inseridos na primeira carta;
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %u\n", populacao);
    printf("Área: %.2f km2\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de pontos turísticos: %d\n", pontos);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", percapta1); 
            float superpoder1;
            superpoder1 = (float) populacao + area + pib + pontos + (1 / densidade1) + percapta1; //soma dos atributos da carta 1;
    printf("Super Poder: %.2f\n", superpoder1); //imprimindo o superpoder da carta 1;
        printf("\n\n"); //apenas para espaçar as cartas;
    printf("Carta 2:\n"); 
    printf("Digite uma letra de 'A' a 'H' representando um dos oito estados: \n"); //mesmos comandos para a segunda carta;
    scanf(" %c", &estadoo);
    printf("Digite a letra anterior e um número de 01 a 04: \n");
    scanf("%s", codigo1);
    getchar();
    printf("Digite o nome da cidade: \n");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;
    printf("Digite o número de habitantes da cidade: \n");
    scanf("%u", &populacao1);
    printf("Digite a área em km2 da cidade: \n");
    scanf("%f", &area1);
          densidade2 = (float) populacao1 / area1;
    printf("Digite o produto interno bruto em reais da cidade: \n");
    scanf("%f", &pib1);
        percapta2 = (float) pib1 / populacao1;
    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &pontos1);   
         printf("\n\n");
    printf("Carta 2:\n"); //imprimindo os dados inseridos na segunda carta; 
    printf("Estado: %c\n", estadoo);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %u\n", populacao1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", percapta2);
          float superpoder2;
            superpoder2 = (float) populacao1 + area1 + pib1 + pontos1 + (1 / densidade2) + percapta2; //soma dos atributos da carta 2;
    printf("Super Poder: %.2f\n", superpoder2); //imprimindo o superpoder da carta 2;
//comparando os superpoderes das cartas;
int resultadoPopulacao, resultadoArea, resultadoPib, resultadoPontos, resultadoDensidade, resultadoPercapta, resultadoSuperpoder;
  resultadoPopulacao = populacao > populacao1;
  resultadoArea = area > area1;
  resultadoPib = pib > pib1;
  resultadoPontos = pontos > pontos1;
  resultadoDensidade = densidade1 < densidade2;
  resultadoPercapta = percapta1 > percapta2;
  resultadoSuperpoder = superpoder1 > superpoder2;
     printf("\n\n");
       printf("Comparação das Cartas:\n");
       printf("Se o resultado for 1, a carta 1 ganha da carta 2, se for 0, a carta 2 ganha da carta 1.\n");
      printf("População: %d\n", resultadoPopulacao);
      printf("Área: %d\n", resultadoArea);
      printf("PIB: %d\n", resultadoPib);
      printf("Pontos Turísticos: %d\n", resultadoPontos);
      printf("Densidade Populacional: %d\n", resultadoDensidade);
      printf("PIB per Capita: %d\n", resultadoPercapta);
      printf("Super Poder: %d\n", resultadoSuperpoder);
    printf("\n\n");
    printf("Comparação de cartas (Atributo: População):\n");
    printf("Carta 1: %s: %u\n", cidade, populacao);
    printf("Carta 2: %s: %u\n", cidade1, populacao1);
    if (populacao > populacao1) {
      printf("Resultado: Carta 1 venceu!");
    } 
    else {
      printf("Resultado: Carta 2 venceu!");
    }
return 0; //para indicar que o programa terminou com sucesso;

}
