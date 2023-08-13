#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída

// Função para inverter um número de forma não recursiva
int inverterNumeroNaoRecursivo(int numero) {
    int invertido = 0;

    while (numero != 0) {
        int digito = numero % 10;  // Pega o último dígito do número
        invertido = invertido * 10 + digito;  // Adiciona o dígito invertido ao número invertido
        numero /= 10;  // Remove o último dígito do número
    }

    return invertido;  // Retorna o número invertido
}

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);  // Lê o número fornecido pelo usuário

    int invertido = inverterNumeroNaoRecursivo(numero);  // Chama a função para inverter o número
    printf("Número invertido (não recursivo): %d\n", invertido);  // Imprime o número invertido

    return 0;  // Retorna 0 para indicar que o programa foi executado com sucesso
}