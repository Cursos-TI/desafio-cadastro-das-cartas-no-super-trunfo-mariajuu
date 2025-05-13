#include <stdio.h>
#include <string.h> // necessário para usar uma função que eu adicionei após

int main() {
    char estado, estadoo; //uma letra de 'A' a 'H' representando um dos 8 estados;
    char codigo[3], codigo1[3]; //a letra do estado e um numero  de 01 a 04;
    char cidade[25], cidade1[25]; //variavel para armazenar o nome da cidade;
    int populacao, populacao1; //numero de habitantes da cidade;
    float area, area1; //area em km2 da cidade;
    float pib, pib1; //produto interno bruto em reais da cidade;
    int pontos, pontos1; //quantidade de pontos turisticos da cidade;


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
    scanf("%d", &populacao);
    printf("Digite a área em km2 da cidade: \n");
    scanf("%f", &area);
    printf("Digite o produto interno bruto em reais da cidade: \n");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &pontos);
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
    scanf("%d", &populacao1);
    printf("Digite a área em km2 da cidade: \n");
    scanf("%f", &area1);
    printf("Digite o produto interno bruto em reais da cidade: \n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &pontos1);   
       printf("\n\n"); //apenas para espaçar as cartas;
    printf("Carta 1:\n"); //imprimindo os dados inseridos na primeira carta;
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km2\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de pontos turísticos: %d", pontos);
    printf("\n\n");
    printf("Carta 2:\n"); //imprimindo os dados inseridos na segunda carta; 
    printf("Estado: %c\n", estadoo);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d", pontos1);

return 0; //para indicar que o programa terminou com sucesso;

}
