#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída

// Função para verificar se um número é perfeito
int isPerfect(int num) {
    int sum = 0;  // Começamos com 0 para calcular a soma dos divisores

    // Loop para encontrar divisores e calcular a soma
    for (int i = 1; i <= num/2; i++) {
        if (num % i == 0) { // Verifica se i é um divisor de num
            sum += i; // Adiciona o divisor à soma
        }
    }

    return (sum == num); // Retorna verdadeiro se a soma dos divisores for igual ao número
}

int main() {
    printf("Números perfeitos entre 1 e 1000:\n");

    // Loop para verificar números de 1 a 1000
    for (int i = 1; i <= 1000; i++) {
        if (isPerfect(i)) { // Verifica se o número é perfeito
            printf("%d =", i);

            int firstFactor = 1; // Usado para determinar se precisamos imprimir o sinal "+"
            
            // Loop para imprimir os fatores de um número perfeito
            for (int j = 1; j <= i/2; j++) {
                if (i % j == 0) {  // Verifica se j é um divisor de i
                    if (firstFactor) {
                        printf(" %d", j);
                        firstFactor = 0; // Agora sabemos que o primeiro fator já foi impresso
                    } else {
                        printf(" + %d", j);
                    }
                }
            }
            printf("\n");
        }
    }

    return 0;  // Retorna 0 para indicar que o programa foi executado com sucesso
}
