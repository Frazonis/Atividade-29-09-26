#include <stdio.h>

int main() {
    float consumo, soma_consumo = 0, consumo_medio_geral;

    for (int i = 1; i <= 5; i++) {
        printf("Digite o consumo do morador %d (em m3): ", i);
        scanf("%f", &consumo);

        soma_consumo = soma_consumo + consumo;

        if (consumo <= 20.0) {
            printf("Consumo dentro da media\n\n");
        } else {
            printf("Consumo acima da media\n\n");
        }
    }

    consumo_medio_geral = soma_consumo / 5.0;

    printf("=== RESULTADO ===\n");
    printf("Consumo medio geral do condominio: %.2f m3\n", consumo_medio_geral);

    return 0;
}
