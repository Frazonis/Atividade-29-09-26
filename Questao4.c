#include <stdio.h>

int main() {
    int passos_da_hora;
    int total_passos = 0;
    int horas_necessarias = 0;

    while (total_passos < 10000) {
        horas_necessarias++;
        
        printf("Digite a quantidade de passos dados na hora %d: ", horas_necessarias);
        scanf("%d", &passos_da_hora);

        total_passos = total_passos + passos_da_hora;
        printf("Total acumulado: %d passos\n\n", total_passos);
    }

    printf("=== META ATINGIDA ===\n");
    printf("Total final: %d passos\n", total_passos);
    printf("Horas necessarias: %d\n", horas_necessarias);

    return 0;
}
