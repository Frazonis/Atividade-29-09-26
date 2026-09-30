#include <stdio.h>

int main() {
    float moeda;
    float saldo_total = 0.0;

    do {
        printf("Digite o valor da moeda (0.50, 1.00, 2.00 ou 0 para sair): ");
        scanf("%f", &moeda);

        if (moeda == 0.50 || moeda == 1.00 || moeda == 2.00) {
            saldo_total = saldo_total + moeda;
            printf("Moeda adicionada! Saldo atual: R$ %.2f\n\n", saldo_total);
        } else if (moeda != 0.0) {
            printf("Valor invalido! Moedas aceitas: 0.50, 1.00 ou 2.00.\n\n");
        }
    } while (moeda != 0.0);

    printf("\n=== COFRINHO DIGITAL ===\n");
    printf("Total acumulado: R$ %.2f\n", saldo_total);

    return 0;
}
