// Ciência da Computação
// Algoritmos e Programação 2
// Professor: José Euripedes Ferreira

// Alunos:
// Thiago de Andrade Carvalho
// Elias Lourenço Oliveira

// Compilador: gcc recursive_reverse_string.c -o recursive_reverse_string
// Executável: ./recursive_reverse_string

#include <stdio.h>
#include <stdlib.h>

void reverseString(int start, int end, char *str1, char *str2) {
    if (start <= end) {
        str2[end - start] = str1[start];
        reverseString(start + 1, end, str1, str2);
    }
    else {
        str2[end + 1] = '\0';
    }
}

int main() {
    char *str1 = "Feito_por_Thiago_e_Elias";

    int str1Size = 0;
    while (str1[str1Size] != '\0') {
        str1Size++;
    }

    char *str2 = (char*) malloc(sizeof(char) * (str1Size + 1));

    // Reverte a str1 e guarda em str2
    reverseString(0, str1Size - 1, str1, str2);

    // Deve imprimir 'sailE_e_ogaihT_rop_otieF'
    printf("Str2: %s\n", str2);

    free(str2);
    return 0;
}