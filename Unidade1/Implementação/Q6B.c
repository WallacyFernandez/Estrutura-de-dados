#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída

// Função recursiva para inverter um número
int inverterNumeroRecursivo(int numero, int invertido) {
    if (numero == 0) {
        return invertido;  // Caso base: retorna o número invertido quando o número original se torna 0
    } else {
        int digito = numero % 10;  // Pega o último dígito do número
        invertido = invertido * 10 + digito;  // Adiciona o dígito invertido ao número invertido
        return inverterNumeroRecursivo(numero / 10, invertido);  // Chama a função recursivamente sem o último dígito
    }
}

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);  // Lê o número fornecido pelo usuário

    int invertido = inverterNumeroRecursivo(numero, 0);  // Chama a função para inverter o número
    printf("Número invertido (recursivo): %d\n", invertido);  // Imprime o número invertido

    return 0;  // Retorna 0 para indicar que o programa foi executado com sucesso
}