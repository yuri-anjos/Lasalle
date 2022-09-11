// Github: yuri-anjos
// printf para mostrar valores na tela
// scanf para entrada de dados do usuário
// %d para entrada de valores inteiros
// %lf para entrada/saída de pontos flutuantes
// IF usado para saber se a operação selecinada precisava da 2° entrada
// Switch Case usado para identificar qual operação matemática realizar

#include <stdio.h>

int main() {
    int comando;
    double valorUm;
    double valorDois;
    double result;
    
    printf("Nome: Yuri França dos Anjos \n");
    printf("Curso: Análise e Desenvolvimento de Sistemas \n");
    printf("Universidade: Lassale \n");
    printf("Matrícula: 202212809 \n");

    printf("1 - Soma \n2 - Subtração \n3 - Divisão \n4 - Multiplicação \n5 - Raiz Quadrada \n6 - Potênciação \n");
    printf("Qual operação deseja realizar? \n");
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