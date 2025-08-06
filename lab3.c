#include <stdio.h>

void analisa_numeros(int n1, int n2, int n3, int n4, int n5) {
    int pares = 0, impares = 0, positivos = 0, negativos = 0;
    int valores[5] = {n1, n2, n3, n4, n5};
    int i;

    for(i = 0; i < 5; i++) {
        if(valores[i] % 2 == 0) pares++;
        else impares++;

        if(valores[i] >= 0) positivos++;
        else if(valores[i] < 0) negativos++;
    }

    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impares);
    printf("%d valor(es) positivo(s)\n", positivos);
    printf("%d valor(es) negativo(s)\n", negativos);
}

int main() {
    int N;
    int t;

    printf("Digite a quantidade de testes: ");
    scanf("%d", &N);

    for(t = 0; t < N; t++) {
        int n1, n2, n3, n4, n5;
        printf("Digite 5 numeros inteiros separados por espaco: ");
        scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
        analisa_numeros(n1, n2, n3, n4, n5);
        printf("\n");
        
    }
     
        
    

    return 0;
}