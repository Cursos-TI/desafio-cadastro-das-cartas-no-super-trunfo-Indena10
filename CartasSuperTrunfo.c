#include <stdio.h>

int main() {
int populacao, NPontos;
float PIB, area;
char nomeCidade[50], codigo[2], estado[1];

printf("CARTA 1\n");
   
printf("Digite o Estado entre A a H: \n");
scanf("%c", &estado);

printf("Digite o código entre 01 e 04: \n");
scanf("%s", &codigo);

printf("Digite o nome da cidade: \n");
scanf("%s", &nomeCidade);

printf("Digite o tamanho da população: \n");
scanf("%f", &populacao);

printf("Digite a área total do país: \n");
scanf("%d", &area);

printf("Digite o PIB do país: \n");
scanf("%f", &PIB);

printf("Digite a quantidade de pontos turísticos existentes: \n");
scanf("%d", &NPontos);

    return 0;
}
