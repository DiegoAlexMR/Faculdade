#include <stdio.h>

int main() {
    float valor;
    int notas[] = {100, 50, 20, 10, 5, 2};
    int moedas[] = {100, 50, 25, 10, 5, 1};
    int qtd_notas[6] = {0};
    int qtd_moedas[6] = {0};

    scanf("%f", &valor);

    int valor_em_centavos = (int)(valor * 100);

    for (int i = 0; i < 6; i++) {
        qtd_notas[i] = valor_em_centavos / (notas[i] * 100);
        valor_em_centavos %= notas[i] * 100;
    }

    for (int i = 0; i < 6; i++) {
        qtd_moedas[i] = valor_em_centavos / moedas[i];
        valor_em_centavos %= moedas[i];
    }

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", qtd_notas[0]);
    printf("%d nota(s) de R$ 50.00\n", qtd_notas[1]);
    printf("%d nota(s) de R$ 20.00\n", qtd_notas[2]);
    printf("%d nota(s) de R$ 10.00\n", qtd_notas[3]);
    printf("%d nota(s) de R$ 5.00\n", qtd_notas[4]);
    printf("%d nota(s) de R$ 2.00\n", qtd_notas[5]);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", qtd_moedas[0]);
    printf("%d moeda(s) de R$ 0.50\n", qtd_moedas[1]);
    printf("%d moeda(s) de R$ 0.25\n", qtd_moedas[2]);
    printf("%d moeda(s) de R$ 0.10\n", qtd_moedas[3]);
    printf("%d moeda(s) de R$ 0.05\n", qtd_moedas[4]);
    printf("%d moeda(s) de R$ 0.01\n", qtd_moedas[5]);

    return 0;
}
