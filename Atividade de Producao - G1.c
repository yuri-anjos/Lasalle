// Github: yuri-anjos
// printf para mostrar valores na tela
// scanf para entrada de dados do usuário
// %lf para entrada/saída de pontos flutuantes e %c para entrada da operação
// IF usado para verificar condicoes
// Switch Case usado para identificar qual operação matemática realizar
// No início do DoWhile criei um booleano como marcador de algum problema, como uma operação inválida (e no caso da divisão quando possui divisor 0)

// Já tenho experiencia com programação, o que fiz foi pesquisar a sintaxe da linguagem e a forma de utilização dos tipos de dados

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
    char comando;
    double valorUm;
    double valorDois;
    double result;
    
    printf("Nome: Yuri França dos Anjos \n");
    printf("Curso: Análise e Desenvolvimento de Sistemas \n");
    printf("Universidade: Lassale \n");
    printf("Matrícula: 202212809 \n");

    do {
        bool valido = true;
   
        printf("Valor Um: \n");
        scanf("%lf", &valorUm);
        
        printf("Qual operação deseja realizar? \n");
        scanf(" %c", &comando);
        
        if(comando != 'r') {
            printf("Valor Dois: \n");
            scanf("%lf", &valorDois);
        }
        
        switch (comando) {
            case '+':
                result = valorUm + valorDois;
                break;
            case '-':
                result = valorUm - valorDois;
                break;
            case '/':
                if(valorDois == 0) {
                    valido = false;
                } else {
                    result = valorUm / valorDois;
                }
                break;
            case '*':
                result = valorUm * valorDois;
                break;
            case 'r':
                result = sqrt(valorUm);
                break;
            case '^':
                result = pow(valorUm, valorDois);
                break;
            default:
                valido = false;
        }
        
        if(valido) {
            printf("Resultado: %lf \n", result);
            break;
        } else {
            printf("Esta não foi uma operação válida, tente novamente! \n\n");
        }
        
    } while(1);
    
    return 0;
}
