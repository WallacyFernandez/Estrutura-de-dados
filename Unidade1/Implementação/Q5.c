#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída

// Função recursiva para calcular o produto de x1 e x2
int produto(int x1, int x2) {
    if (x2 == 0) {  // Caso base: Se x2 for 0, o produto é 0
        return 0;
    } else {
        // Caso recursivo: x1 + x1 + ... (x2 vezes)
        return x1 + produto(x1, x2 - 1);
    }
}

int main() {
    int x1, x2;
    
    printf("Digite o valor de x1: ");
    scanf("%d", &x1);  // Lê o valor de x1

    printf("Digite o valor de x2: ");
    scanf("%d", &x2);  // Lê o valor de x2

    int y = produto(x1, x2);  // Chama a função recursiva para calcular o produto

    printf("Resultado: %d\n", y);  // Imprime o resultado

    return 0;  // Retorna 0 para indicar que o programa foi executado com sucesso
}