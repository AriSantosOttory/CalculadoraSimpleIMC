#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Digite o peso em quilogramas: ");
    scanf("%f", &peso);

    printf("Digite a altura em metros: ");
    scanf("%f", &altura);

    // Calcula o IMC
    imc = peso / (altura * altura);

    printf("O seu IMC é: %.2f\n", imc);

    return 0;
}

