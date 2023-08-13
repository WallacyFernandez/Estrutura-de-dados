#include <stdio.h>

int f(int m, int n) {
    if (n == 1) {
        return m + 1;  // Condição (a)
    } else if (m == 1) {
        return n + 1;  // Condição (b)
    } else {
        return f(m, n - 1) + f(m - 1, n);  // Condição (c)
    }
}

int main() {
    int m, n;

    printf("Digite o valor de m: ");
    scanf("%d", &m);  // Lê o valor de m

    printf("Digite o valor de n: ");
    scanf("%d", &n);  // Lê o valor de n

    int resultado = f(m, n);  // Chama a função f para calcular o resultado
    printf("Resultado: %d\n", resultado);  // Imprime o resultado

    return 0;  // Retorna 0 para indicar que o programa foi executado com sucesso
}