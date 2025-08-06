#include <stdio.h>

int main() {
    int d;
    float resultado;
    float preco;

    while (1) { // Loop infinito
        printf("Digite o numero de compras (negativo para sair): ");
        scanf("%d", &d);

        if (d < 0) {
            printf("Encerrando o programa.\n");
            break; // Sai do loop
        }

        if (d < 12) {
            preco = 0.80f;
        } else {
            preco = 0.65f;
        }

        resultado = d * preco;

        printf("Preco da Unidade: R$ %.2f\n", preco);
        printf("Total a pagar: R$ %.2f\n\n", resultado);
    }

    return 0;
}