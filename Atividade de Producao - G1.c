// Github: yuri-anjos
// printf para mostrar valores na tela
// scanf para entrada de dados do usu�rio
// %d para entrada de valores inteiros
// %lf para entrada/sa�da de pontos flutuantes
// IF usado para saber se a opera��o selecinada precisava da 2� entrada
// Switch Case usado para identificar qual opera��o matem�tica realizar

#include <stdio.h>

int main() {
    int comando;
    double valorUm;
    double valorDois;
    double result;
    
    printf("Nome: Yuri Fran�a dos Anjos \n");
    printf("Curso: An�lise e Desenvolvimento de Sistemas \n");
    printf("Universidade: Lassale \n");
    printf("Matr�cula: 202212809 \n");

    printf("1 - Soma \n2 - Subtra��o \n3 - Divis�o \n4 - Multiplica��o \n5 - Raiz Quadrada \n6 - Pot�ncia��o \n");
    printf("Qual opera��o deseja realizar? \n");
    scanf("%d", &comando);
    
    printf("Valor Um: \n");
    scanf("%lf", &valorUm);
    
    if(comando != 5) {
        printf("Valor Dois: \n");
        scanf("%lf", &valorDois);
    }
    
    switch (comando) {
        case 1:
            result = valorUm + valorDois;
            break;
        case 2:
            result = valorUm - valorDois;
            break;
        case 3:
            result = valorUm / valorDois;
            break;
        case 4:
            result = valorUm * valorDois;
            break;
        case 5:
            result = sqrt(valorUm);
            break;
        case 6:
            result = pow(valorUm, valorDois);
            break;
    }
    
    printf("Resultado: %lf \n", result);
}