#include <stdio.h>

int main() {
int populacao, NPontos, estado[20];
float PIB, area;
char nomeCidade[50],codigo;


   
printf("Digite o Estado entre A a H: \n");
scanf("%s", &estado);

printf("Digite o código entre 01 e 04: \n");
scanf("%s", &codigo);

printf("Digite o nome da cidade: \n");
scanf("%s", &nomeCidade);

printf("Digite o tamanho da população: \n");
scanf("%d", &populacao);

printf("Digite a área total do país: \n");
scanf("%f", &area);

printf("Digite o PIB do país: \n");
scanf("%f", &PIB);

printf("Digite a quantidade de pontos turísticos existentes: \n");
scanf("%d", &NPontos);

printf("CARTA 1\n");
printf("Estado:%s \n",estado);
printf("Código:%d \n",codigo);
printf("Nome do Cidade:%s \n",nomeCidade);
printf("População: %d \n", populacao);
printf("A Área to total é: %f \n", area);
printf("PIB:%f \n", PIB);
printf("Numero de pontos turísticos:%d \n",NPontos);
return 0;
}
