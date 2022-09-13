#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>


int ex01();
int ex02();
int ex03();
int ex04();
int ex05();
int ex06();
int ex07();
int ex08();
int ex09();
int ex10();
int ex11();
int ex12();
int ex13();
int ex14();
int ex15();

int main() {
    int op;
    printf("TERCEIRA LISTA AEDS\n\n");
    printf("Escolha:\n");
    printf("1 - Exercicio 01\n");
    printf("2 - Exercicio 02\n");
    printf("3 - Exercicio 03\n");
    printf("4 - Exercicio 04\n");
    printf("5 - Exercicio 05\n");
    printf("6 - Exercicio 06\n");
    printf("7 - Exercicio 07\n");
    printf("8 - Exercicio 08\n");
    printf("9 - Exercicio 09\n");
    printf("10 - Exercicio 10\n");
    printf("11 - Exercicio 11\n");
    printf("12 - Exercicio 12\n");
    printf("13 - Exercicio 13\n");
    printf("14 - Exercicio 14\n");
    printf("15 - Exercicio 15\n");
    scanf("%i",&op);
    switch (op) {
        case 1:
            ex01();
            break;
        case 2:
            ex02();
            break;
        case 3:
            ex03();
            break;
        case 4:
            ex04();
            break;
        case 5:
            ex05();
            break;
        case 6:
            ex06();
            break;
        case 7:
            ex07();
            break;
        case 8:
            ex08();
            break;
        case 9:
            ex09();
            break;
        case 10:
            ex10();
            break;
        case 11:
            ex11();
            break;
        case 12:
            ex12();
            break;
        case 13:
            ex13();
            break;
        case 14:
            ex14();
            break;
        case 15:
            ex15();
            break;
        default:
            printf("Opcao invalida\n");
        return 0;
    }
}


int ex01 () {
    int numero, resto;
    printf("Qual o número?\n");
    scanf("%i",&numero);
    resto = numero % 2;
    printf("O resto da divisao de %i por 2:\n",numero,resto);
    if (resto == 0) {
        printf("Numero Par\n");
    };
    return 0;
}

int ex02 () {
    int numero, resto;
    printf("Qual o número?\n");
    scanf("%i",&numero);
    resto = numero % 2!=0;
    printf("O resto da divisao de %i por 2:\n",numero,resto);
    if (resto == 1) {
        printf("Numero impar\n");
    };
    return 0;
}

int ex03 () {
    int valor, resto;
    printf("Insira um número\n");
    scanf("%i",&valor);
    resto = valor % 2;
    printf("O resto da divisao de %i por 2:\n",valor,resto);
    if (resto == 1, valor>100) {
         printf("Numero impar maior que 100\n");
    };
    return 0;
}

int ex04 () {
    int valor, resto;
    printf("Insira um número inteiro\n");
    scanf("%i",&valor);
    resto = valor % 2;
    if (resto == 1 && valor>100){
        printf("Numero impar maior que 100\n");
    }
    else if(resto == 1 && valor<100) {
        printf("Numero impar menor que 100\n");
    }
    else if(resto == 0 && valor>100) {
        printf("Numero par maior que 100\n");
    } else {
        printf("Numero par menor que 100\n");
    };
    return 0;
}

int ex05 () {
    int valor;
    printf("Qual o numero?\n");
    scanf("%i",&valor);
    if (valor > 25 && valor < 75) {
        printf("Pertence\n");
    } else {
        printf("Não pertence\n");
    };
    system("pause");
    return 0;
}

int ex06 () {
    int valor;
    printf("Qual o numero?\n");
    scanf("%i",&valor);
    if (valor >= 25 && valor <= 75) {
        printf("Pertence\n");
    } else {
        printf("Não pertence\n");
    };
    system("pause");
    return 0;
}

int ex07()
{
    int valor;
    printf("Qual o numero?\n");
    scanf("%i",&valor);
    if (valor >= 15 && valor <= 45) {
        printf("Pertence ao intervalo 15:45\n");
    }
    if (valor >= 66 && valor <= 99) {
        printf("Pertence ao intervalo 66:99\n");
    };
    system("pause");
    return 0;
}

int ex08()
{
    int valor1, valor2, resto1, resto2;
    printf("Quais os numeros?\n");
    scanf("%i%i",&valor1,&valor2);
    resto1 = valor1 % 2;
    resto2 = valor2 % 2;
    if (valor1 == 0 && resto2 == 1) {
        printf("O primeiro é par e o segundo impar\n");
    } else {
        printf("O primeiro não é par e não é o segundo impar\n");
    };
    return 0;
}

int ex09()
{
    int valor1, valor2, resto1, resto2;
    printf("Quaal o primeiro numeros?\n");
    scanf("%i",&valor1);
    printf("Quaal o segundo numeros?\n");
    scanf("%i",&valor2);
    resto1 = valor1 % 2;
    resto2 = valor2 % 2;
    if (valor1 > 0 && resto1 == 0 && valor2 < 0 && resto2 == -1) {
        printf("Primeiro número par e positivo, e o segundo impar e negativo.\n");
    };
    return 0;
}

int ex10()
{
    int valor1, valor2 ;
    printf("Qual o primeiro número?\n");
    scanf("%i",&valor1);
    printf("Qual o segundo número?\n");
    scanf("%i",&valor2);
    if (valor1 > valor2) {
        printf("O primeiro numero é > o segundo numero\n");
    };
    if (valor1 < valor2) {
        printf("O primeiro numero é < o segundo numero\n");
    };
    if (valor1 == valor2) {
        printf("O primeiro numero é = ao segundo numero\n");
    };
    return 0;
}

int ex11() {
    int valor1, valor2, valor3;
    printf("Qual o primeiro valor?\n");
    scanf("%i",&valor1);
    printf("Qual o segundo valor?\n");
    scanf("%i",&valor2);
    printf("Qual o terceiro valor?\n");
    scanf("%i",&valor3);
    if (valor1 > valor2 && valor1 < valor3) {
        printf("Valor 1 esta entre os outros 2 valores\n");
    };
    return 0;
}

int ex12() {
    int valor1, valor2, valor3;
    printf("Qual o primeiro valor?\n");
    scanf("%i",&valor1);
    printf("Qual o segundo valor?\n");
    scanf("%i",&valor2);
    printf("Qual o terceiro valor?\n");
    scanf("%i",&valor3);
    if (valor1 < valor2 || valor1 > valor3) {
        printf("Valor 1 não esta entre os outros 2 valores\n");
    };
    return 0;
}

int ex13() {
    char x, y, z;
    printf("Digite x:\n");
    scanf("%c",&x);
    printf("Digite y:\n");
    scanf("%c",&y);
    printf("Digite z:\n");
    scanf("%c",&z);
    if ( x < y && x > z || x < z && x > y) {
        printf(" 1 ");
    }else {
        printf(" 0 ");
    }
    return 0;
}

int ex14() {
    char c1, c2, c3;
    printf("Primeiro caractere\n");
    scanf("%s",&c1);
    printf("\n O valor na tabela ascii desse caractere é: %d\n", c1);

    printf("Segundo caractere\n");
    scanf("%s",&c2);
    printf("\n O valor na tabela ascii desse caractere é: %d\n", c2);

    printf("Terceiro caractere\n");
    scanf("%s",&c3);
    printf("\n O valor na tabela ascii desse caractere é: %d\n", c3);
    if (c1 < c2 && c2 < c3) {
        printf("Ordem alfabética\n");
    } else {
        printf("erro");
    };
    return 0;
}

int ex15() {
    char letra;
    printf("Digite uma letra:\n");
    scanf("%s",&letra);
    if (isupper(letra)) {
        printf("A letra está maiuscula");
    } else {
        printf("Está minuscula");
    }
    return 0;
}
