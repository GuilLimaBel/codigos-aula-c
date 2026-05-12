#include <stdio.h>

int main() {
   //Declaração de variáveis
   //Entrada
   int peso = 0;
   int altura = 0;

   printf("Ola qual e o seu peso\n");
   scanf("%i", &peso);

   printf("Ola qual e o seu altura\n");
   scanf("%i", &altura);

   //Processamento
   int imc = peso / (altura * altura);

   //Saída
   printf("O seu imc e %i!", imc);

    return 0;
}
