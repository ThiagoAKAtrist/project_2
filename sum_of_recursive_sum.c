// Ciência da Computação
// Algoritmos e Programação 2
// Professor: José Euripedes Ferreira

// Alunos:
// Thiago de Andrade Carvalho
// Elias Lourenço Oliveira

// Compilador: gcc sum_of_recursive_sum.c -o sum_of_recursive_sum
// Executável: ./sum_of_recursive_sum

#include <stdio.h>

int verifyNumber(int n){
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n); 

    while(n < 0){
        printf("Número inválido!\n");
        printf("Digite um numero inteiro positivo:");
        scanf("%d", &n); 
    }
    return n;
}

int factorial(int n){
    if(n == 0)
        return 1;
    return n * factorial(n - 1);
}

float recursiveSumFactorial(float n){
    if(n == 0)
        return 1.0f;
    return n / factorial(n) + recursiveSumFactorial(n-1);
}

float recursiveSumElevate(float n){
    if(n == 1)
        return 1.0f;
    if(n < 1)
        return 0.0f;
    return 1 / (n * n) + recursiveSumElevate(n-1);
}

int main(){

    int n = verifyNumber(n);
    int factorialResult = factorial(n);

    float sumFactorial = recursiveSumFactorial(n);
    float sumElevate = recursiveSumElevate(n);
    
    float SumResult = recursiveSumFactorial(n) + recursiveSumElevate(n);

    printf("%d! = %d; Resultado somatoria um: %.3f;\n",n , factorialResult, sumFactorial);
    printf("Resultado somatoria dois: %.3f;\n", sumElevate);
    printf("Primeira somatória + Segunda somatória = %.3f\n", SumResult);

    return 0;
}