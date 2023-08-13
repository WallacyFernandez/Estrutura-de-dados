#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída

int main() {  // Função principal do programa

    int characters_per_line = 10;  // Define o número de caracteres por linha

    // Loop para iterar sobre os valores ASCII de 0 a 127
    for (int ascii_value = 127; ascii_value >= 0; ascii_value--) {

        printf("%c ", ascii_value);  // Imprime o caractere correspondente ao valor ASCII

        // Verifica se o número de caracteres impressos é múltiplo de 10
        
        if ((ascii_value + 1) % characters_per_line == 0) {

            printf("\n");  // Quebra a linha após imprimir 10 caracteres

        }
    }

    return 0;  // Retorna 0 para indicar que o programa foi executado com sucesso

}