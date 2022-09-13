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
        default:
            printf("Opcao invalida\n");
        return 0;
    }
}


int ex01 () {
    int primeiro,sucessor;
    printf("Escreva o numero:\n");
    scanf("%i",&primeiro);
    sucessor=primeiro+1;
    printf("sucessor=%i\n",sucessor);
    return 0;
}

int ex02 () {
    int ex1,ex2,ex3,ex4,media;
    printf("Primeiro numero:\n");
    scanf("%f",&ex1);
    printf("Segundo numero:\n");
    scanf("%f",&ex2);
    printf("Terceiro numero:\n");
    scanf("%f",&ex3);
    printf("Quarto numero:\n");
    scanf("%f",&ex4);
    media=(ex1+ex2+ex3+ex4)/4;
    printf("media=%.2f\n",media);
    return 0;
}

int ex03 () {
    int nota1,nota2,nota3,peso1,peso2,peso3,mediaPonderada;
    printf("Nota 1:\n");
    scanf("%i",&nota1);
    printf("Peso 1:\n");
    scanf("%i",&peso1);
    printf("Nota 2:\n");
    scanf("%i",&nota2);
    printf("Peso 2:\n");
    scanf("%i",&peso2);
    printf("Nota 3:\n");
    scanf("%i",&nota3);
    printf("Peso 3:\n");
    scanf("%i",&peso3);
    mediaPonderada = (nota1*peso1)*(nota2*peso2)*(nota3*peso3);
    printf("mediaPonderada=%i\n", mediaPonderada);
    return 0;
}

int ex04 () {
    float temperaturaC,temperaturaF,formulaF;
    printf("Temperatura em c:\n");
    scanf("%f",&temperaturaC);
    formulaF= temperaturaC*(9/5);
    temperaturaF=formulaF+32;
    printf("Temperatura em F foi %f\n",temperaturaF);
    return 0;
}

int ex05 () {
    float salario,percentual,valorAumento,salarioTotal,valorPorCento;
    printf("Salario:\n");
    scanf("%f",&salario);
    printf("Percentual de aumento\n");
    scanf("%f",&valorPorCento);
    percentual = valorPorCento/100;
    valorAumento = salario*percentual;
    salarioTotal = salario+valorAumento;
    printf("Salario total de: %f\n",salarioTotal);
    return 0;
}

int ex06 () {
    float baseTriangulo, alturaTriangulo, areaTriangulo;
    printf("Valor da base:\n");
    scanf("%f",&baseTriangulo);
    printf("Valor da altura:\n");
    scanf("%f",&alturaTriangulo);
    areaTriangulo = (baseTriangulo*alturaTriangulo)/2;
    printf("A area é %f\n",areaTriangulo);
    return 0;
}

int ex07()
{
    float pesoRacao, racaoDiaria, resto;
    printf("Informe o peso do saco de ração em Kg:\n");
    scanf("%f",&pesoRacao);
    printf("Informe a quantidade diaria em g:\n");
    scanf("%f",&racaoDiaria);
    resto = pesoRacao-((racaoDiaria*2*5)/1000);
    printf("O restante de ração é: %.2fKg\n",resto);
    system("pause");
    return 0;
}

int ex08()
{
    float a, b;
    printf("Escreva o valor de a:\n");
    scanf("%f",&a);
    printf("Escreva o valor de b:\n");
    scanf("%f",&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("a=%f\nb=%f",a,b);
    return 0;
}

int ex09()
{
    int numero, resto;
    printf("Qual o numero?\n");
    scanf("%i",&numero);
    resto = numero % 7;
    printf("O resto é:%i\n",resto);
    return 0;
}

int ex10()
{
    int a1, a2, n, r, an, soma;
    printf("Primeiro termo:\n");
    scanf("%i",&a1);
    printf("Segundo termo:\n");
    scanf("%i",&a2);
    printf("Numero de termos:\n");
    scanf("%i",&n);
    r = a2 - a1;
    an = a1 + (n - 1) * r;
    soma = n * (a1 + an) / 2;
    printf("A soma dos termos é: %i", soma);
    return 0;
}
