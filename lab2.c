#include <stdio.h>

int main() {

    int n; // numero inicial
    int i; // para o loop

    while(1){
        printf("Digite um numero de 0 a 50: ");
        scanf("%d", &n);

        if(n >= 0 && n <= 50){
            for(i = n - 1; i > 0; i--){
                printf("Resto de %d %% %d = %d\n", n, i, n % i);
            }
            printf("\n");
        } else {
            printf("Numero invalido, tente novamente.\n");
        }
    }

    return 0;
}