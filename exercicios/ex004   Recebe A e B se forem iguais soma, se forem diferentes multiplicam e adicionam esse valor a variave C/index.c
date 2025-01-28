#include <stdio.h>

int main() {
    int n1, n2, resultado;

    printf("Digite dois numeros. Se forem iguais, irei somar eles e mostrar o resultado.\n\n");

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    if (n1 == n2) {
        resultado = n1 + n2;
        printf("Os numeros sao iguais. A soma deles e: %d\n", resultado);
    } else {
        printf("Os numeros sao diferentes.\n");
        printf("O primeiro numero e: %d\n", n1);
        printf("O segundo numero e: %d\n", n2);
    }

    return 0;
}
