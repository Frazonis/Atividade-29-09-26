#include <stdio.h>

int main() {
    float nota, soma_notas = 0.0, media_geral;

    for (int i = 1; i <= 10; i++) {
        printf("Digite a nota de atendimento do cliente %d (0 a 10): ", i);
        scanf("%f", &nota);

        soma_notas = soma_notas + nota;
    }

    media_geral = soma_notas / 10.0;

    printf("\nMedia geral de atendimento: %.2f\n", media_geral);

    if (media_geral < 7.0) {
        printf("ALERTA: A media de atendimento esta abaixo do esperado!\n");
    }

    return 0;
}
