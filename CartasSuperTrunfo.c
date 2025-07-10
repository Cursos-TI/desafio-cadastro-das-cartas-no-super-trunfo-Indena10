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
    return 0;
}
