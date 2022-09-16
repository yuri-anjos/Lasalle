// Github: yuri-anjos
// printf para mostrar valores na tela
// scanf para entrada de dados do usu�rio
// %lf para entrada/sa�da de pontos flutuantes e %c para entrada da opera��o
// IF usado para verificar condicoes
// Switch Case usado para identificar qual opera��o matem�tica realizar
// No in�cio do DoWhile criei um booleano como marcador de algum problema, como uma opera��o inv�lida (e no caso da divis�o quando possui divisor 0)

// J� tenho experiencia com programa��o, o que fiz foi pesquisar a sintaxe da linguagem e a forma de utiliza��o dos tipos de dados

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
    char comando;
    double valorUm;
    double valorDois;
    double result;
    
    printf("Nome: Yuri Fran�a dos Anjos \n");
    printf("Curso: An�lise e Desenvolvimento de Sistemas \n");
    printf("Universidade: Lassale \n");
    printf("Matr�cula: 202212809 \n");

    do {
        bool valido = true;
   
        printf("Valor Um: \n");
        scanf("%lf", &valorUm);
        
        printf("Qual opera��o deseja realizar? \n");
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
            printf("Esta n�o foi uma opera��o v�lida, tente novamente! \n\n");
        }
        
    } while(1);
    
    return 0;
}
