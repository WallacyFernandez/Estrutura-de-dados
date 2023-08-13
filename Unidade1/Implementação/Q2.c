#include <stdio.h>

// estrutura para representar uma data
typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

// função que calcula quantas aulas de laboratório temos dado
// recebe como parâmetros duas datas: hoje e ultimo dia do semestre
// retorna o número de aulas de laboratório
int diasDeAula(Data hoje, Data ultimo) {
    int aulas = 0; // contador de aulas
    while (hoje.dia != ultimo.dia || hoje.mes != ultimo.mes || hoje.ano != ultimo.ano) { // enquanto não chegar no último dia do semestre
        if (hoje.dia == 1) { // se for o primeiro dia do mês, atualiza o mês e o dia
            hoje.mes = (hoje.mes % 12) + 1; // mês seguinte
            if (hoje.mes == 1) { // se for janeiro, atualiza o ano
                hoje.ano++; // ano seguinte
            }
            if (hoje.mes == 2) { // se for fevereiro, verifica se é ano bissexto
                if (hoje.ano % 4 == 0 && (hoje.ano % 100 != 0 || hoje.ano % 400 == 0)) { // ano bissexto
                    hoje.dia = 29; // último dia de fevereiro
                } else { // ano não bissexto
                    hoje.dia = 28; // último dia de fevereiro
                }
            } else if (hoje.mes == 4 || hoje.mes == 6 || hoje.mes == 9 || hoje.mes == 11) { // se for um mês com 30 dias
                hoje.dia = 30; // último dia do mês
            } else { // se for um mês com 31 dias
                hoje.dia = 31; // último dia do mês
            }
        } else { // se não for o primeiro dia do mês, decrementa o dia
            hoje.dia--;
        }
        if (hoje.dia % 7 == 2 || hoje.dia % 7 == 4) { // se for terça ou quinta, incrementa o contador de aulas
            aulas++;
        }
    }
    return aulas; // retorna o número de aulas de laboratório
}

int main()
{
    Data hoje, ultimo; // declara duas variáveis do tipo Data
    printf("Digite o dia, mes e ano de hoje:\n"); // pede ao usuário para digitar a data de hoje
    scanf("%d %d %d", &hoje.dia, &hoje.mes, &hoje.ano); // lê a data de hoje
    printf("Digite o dia, mes e ano do ultimo dia do semestre:\n"); // pede ao usuário para digitar a data do último dia do semestre
    scanf("%d %d %d", &ultimo.dia, &ultimo.mes, &ultimo.ano); // lê a data do último dia do semestre
    printf("O numero de aulas de laboratorio que temos dado e: %d\n", diasDeAula(hoje, ultimo)); // imprime o resultado da função diasDeAula
    return 0;
}