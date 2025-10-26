#include <stdio.h>

    int idade = 27;
    int quantidade = 1;
    float altura = 1.80;
    double peso = 82.50;
    char letra = 'A';
    char nome[20] = "Marcos"; 


    printf ("A idade do %s é: %d\n", nome, idade);
    printf ("A altura é: %.2f\n", altura);
    printf ("A opção é: %c\n",letra);


    /*
    printf ("%formato1 %formato2 %formato3" , variavel1, variavel2, variavel3)
    
    Modificadores de formato:

    %d : Imprime um inteiro no formato decimal.
    %i : Equivalente a um %d.
    %f : Imprime um numero de ponto flutuante no formato padrão.
    %e : Imprime um numero de ponto flutuante na notação cientifica.
    %c : Imprime um char, um unico caracter
    %s : Imprime uma cadeia (string) de caracteres.
    
    se não usa um modificar de formato, mesmo especificando uma variavel, não vai aparecer nada.
    */

    