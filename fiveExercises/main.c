/*
 Davi Cesar Martins e Silva
 766486
*/

// 1
#include <stdio.h>
int main()
{

    int x, y, soma;

    printf("Escolha o primeiro número:");
    scanf("%i", &x);

    printf("Escolha o primeiro número:");
    scanf("%i", &y);

    soma = x + y;

    printf("A soma é : %i", soma);

    return 0;
}

// 2
int main()
{
    float vs, sm, qntsm;

    printf("Informe o seu salário:");
    scanf("%f", &vs);

    sm = 1320;
    qntsm = vs / sm;

    printf("O seu salário é igual a %.2f do salário mínimo.", qntsm);
    return 0;
}

// 3
int main()
{
    int cdu, c1, d1, d2, u1, c2, r1, udc;

    printf("Escreva um número de 3 dígitos:");
    scanf("%i", &cdu);

    c1 = cdu / 100;
    r1 = cdu % 100;
    d1 = r1 / 10;
    u1 = cdu % 10;
    c2 = u1 * 100;
    d2 = d1 * 10;

    udc = c2 + d2 + c1;

    printf("%i", udc);
    return 0;
}
// 4
int main()
{
    int dia, mes, ano, seg;

    printf("Informe o dia: \n");
    scanf("%i", &dia);
    printf("Informe o mês: \n");
    scanf("%i", &mes);
    printf("Informe o ano: \n");
    scanf("%i", &ano);

    seg = ((ano - 1970) + (mes - 1) + (dia - 1)) * 86400;

    printf("Segundos = %i", seg);

    return 0;
}

// 5
int main()
{
    int cdu, c1, d1, d2, u1, c2, r1, udc, dv, soma;
    printf("Informe a sua conta corrente: ");
    scanf("%i", &cdu);

    c1 = cdu / 100;
    r1 = cdu % 100;
    d1 = r1 / 10;
    u1 = cdu % 10;
    c2 = u1 * 100;
    d2 = d1 * 10;

    udc = c2 + d2 + c1;

    dv = cdu + udc;

    c1 = dv / 100;
    r1 = dv % 100;
    d1 = r1 / 10;
    u1 = dv % 10;

    d1 = d1 * 2;
    u1 = u1 * 3;
    soma = c1 + d1 + u1;

    dv = soma % 10;

    printf("Dígito verificador: %i", dv);

    return 0;
}