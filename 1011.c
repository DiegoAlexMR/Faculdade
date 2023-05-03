#include <stdio.h>

const double PI = 3.14159;

int main() {
    double raio, volume;

    printf("Digite o valor do raio da esfera: ");
    scanf("%lf", &raio);

    if (raio < 0) {
        printf("Valor inválido para o raio da esfera. Tente novamente.\n");
        return 1;
    }

    volume = (4.0/3) * PI * raio * raio * raio;

    printf("O volume da esfera é: %.2lf\n", volume);

    return 0;
}
