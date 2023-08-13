#include <stdio.h>   // Inclui a biblioteca padrão de entrada e saída
#include <math.h>    // Inclui a biblioteca de funções matemáticas

void findPythagoreanTriples(int limit) {  // Função para encontrar triplos pitagóricos até um limite
    for (int a = 1; a <= limit; a++) {   // Loop para variar o valor do cateto 1 (começando de 1)
        for (int b = a; b <= limit; b++) {  // Loop para variar o valor do cateto 2 (começando do valor de a)
            for (int c = b; c <= limit; c++) {  // Loop para variar o valor da hipotenusa (começando do valor de b)
                if (a * a + b * b == c * c) {   // Verifica se a relação pitagórica é satisfeita
                    printf("Cateto 1: %d, Cateto 2: %d, Hipotenusa: %d\n", a, b, c);  // Imprime o triplo pitagórico
                }
            }
        }
    }
}

int main() {
    int limit;
    printf("\n\nDigite o limite para os lados do triangulo pitagorico: ");
    scanf("%d", &limit);  // Solicita ao usuário um limite para os comprimentos dos lados

    printf("\nTriplos pitagoricos:\n");
    findPythagoreanTriples(limit);  // Chama a função para encontrar triplos pitagóricos dentro do limite

    return 0;  // Retorna 0 para indicar que o programa foi executado com sucesso
}