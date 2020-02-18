#define ex1L2
#include <stdio.h>
#include <stdlib.h>

#ifdef ex1L1
main()
{
    int a, b, r;
    printf("Digite um numero: ");
    scanf("%d",&a);

    printf("Digite outro numero: ");
    scanf("%d",&b);

    if(a == b)
    {
        printf("Os numeros sao iguais");
    }
    else
    {
        if(a > b)
        {
            r = a - b;
        }
        else
        {
            r = b - a;
        }

        printf("O resultado e: %d",r);
    }

}
#endif

#ifdef ex2L1
main()
{
    int a,b,c,r;
    do
    {
        do
        {
            printf("Digite um numero de 1 a 19: ");
            scanf("%d", &a);
        }
        while(a <= 0 || a >= 20);

        do
        {
            printf("Digite um numero negativo: ");
            scanf("%d", &b);
        }
        while(b>=0);

        printf("Digite um numero qualquer: ");
        scanf("%d", &c);

        a = a*a;
        b = b*b;
        c*= c;
        r = a + b + c;

        if(r < 1000)
        {
            printf("Resultado menor que 1000, reiniciando o programa \n\n");
        }
    }
    while(r<1000);

    printf("O resultado e: %d",r);

}
#endif

#ifdef ex3L1
main()
{
    int a, m;

    printf("Digite um numero qualquer: ");
    scanf("%d", &a);

    if(a<0)
    {
        m = a * -1;
    }
    else
    {
        m = a;
    }

    printf("O numero digitado foi %d e seu modulo e %d", a,m);
}
#endif

#ifdef ex4L1
main()
{
    float sal,desc;

    printf("Digite seu salario: ");
    scanf("%f",&sal);

    desc = sal * 0.02;
    sal = sal - desc;

    printf("Seu salario e de %f reais",sal);
}
#endif

#ifdef ex6L1
main()
{
    int a,b,r;

    printf("Digite um numero: ");
    scanf("%d", &a);

    printf("Digite outro numero: ");
    scanf("%d", &b);

    r = a + b;

    if(r >= 10)
    {
        r = r + 5;
    }
    else
    {
        r = r - 7;
    }

    printf("O resultado, apos os calculos, e %d", r);
}
#endif

#ifdef ex7L1
main()
{
    int ano,niver,idade1,idade2;

    printf("Digite o ano em que nasceu: ");
    scanf("%d", &niver);

    printf("Digite o ano atual: ");
    scanf("%d", &ano);

    idade1 = ano - niver;

    ano = 2020;

    idade2 = ano - niver;

    printf("Voce tem %d anos, e em 2020 voce tera %d anos", idade1,idade2);
}
#endif

#ifdef ex8L1
main()
{
    int n1, n2;
    do
    {
        printf("Digite um numero maior que 0: ");
        scanf("%d",&n1);
    }
    while(n1<=0);
    do
    {
        printf("Digite um numero menor ou igual a 0: ");
        scanf("%d",&n2);
    }
    while(n2>0);

    printf("O produto e igual a %d", n1 * n2);
}
#endif

#ifdef ex10L1
main()
{
    int n1,n2,n3;

    do
    {
        printf("Digite um numero maior ou igual a 100: ");
        scanf("%d",&n1);
    }
    while(n1<100);

    do
    {
        printf("Digite outro numero maior ou igual a 100: ");
        scanf("%d",&n2);
    }
    while(n2<100);

    printf("Digite um numero qualquer: ");
    scanf("%d",&n3);

    printf("O produto dos numeros e igual a %d", n1 * n2 * n3);
}
#endif

#ifdef ex12L1
main()
{
    float Vsal, Nsal;

    printf("Digite seu salario: ");
    scanf("%f",&Vsal);

    if(Vsal < 800)
    {
        Nsal = Vsal * 1.15;
    }
    else
    {
        if(Vsal > 1000)
        {
            Nsal = Vsal * 1.05;
        }
        else
        {
            Nsal = Vsal * 1.10;
        }
    }

    printf("Seu salario era de %f, seu salario novo e de %f", Vsal,Nsal);
}
#endif

#ifdef ex13L1
main()
{
    float n1,n2,n3,n4,mf;

    do
    {
    printf("Digite sua primeira nota: ");
    scanf("%f", &n1);
    }
    while(n1<0 || n1 > 10);

    do
    {
    printf("Digite sua segunda nota: ");
    scanf("%f", &n2);
    }
    while(n2<0 || n2 > 10);

    do
    {
    printf("Digite sua terceira nota: ");
    scanf("%f", &n3);
    }
    while(n3<0 || n3 > 10);

    do
    {
    printf("Digite sua quarta nota: ");
    scanf("%f", &n4);
    }
    while(n4<0 || n4 > 10);

    mf = (n1 + n2 + n3 + n4) / 4;

    if(mf >= 5)
    {
        printf("Aprovado, %f", mf);
    }
    else
    {
        printf("Reprovado, %f", mf);
    }
}
#endif

#ifdef ex14L1
main()
{
    int n1,n2,n3;

    do
    {
        printf("Digite um numero maior que 100: ");
        scanf("%d", &n1);
    }
    while(n1 <= 100);

    do
    {
        printf("Digite um numero menor que 50: ");
        scanf("%d", &n2);
    }
    while(n2 >= 50);

    n3 = n1 + n2;

    printf("O produto dos numeros e igual a %d", n1 * n2 * n3);

}
#endif

#ifdef ex15L1
main()
{
    int n1,n2,n3,n4,res;

    do
    {
        do
        {
            printf("Digite um numero maior que 10 e menor que 25: ");
            scanf("%d", &n1);
        }
        while(n1 <= 10 || n1 >= 25);

        do
        {
            printf("Digite um numero maior ou igual a 0: ");
            scanf("%d", &n2);
        }
        while(n2 < 0);

        n3 = n2 + n1;

        n4 = n3 * n2 * n1;

        n1 = n1 * n1;
        n2 = n2 * n2;
        n3 = n3 * n3;
        n4 = n4 * n4;

        res = n1 + n2 + n3 + n4;

        if(res < 50000)
        {
            printf("Resultado e igual a %d , menor que 50000, reiniciando o projeto \n",res);
        }
        else
        {
            printf("Resultado e igual a %d , maior que 50000",res);
        }
    }
    while(res < 50000);
}
#endif

#ifdef exSalaDo
main()
{
    int k,num,soma = 0,cont = 0;

    do
    {
        printf("Digite um numero que representa a quantidade de valores que voce escolhera para a soma: ");
        scanf("%d",&k);
    }
    while(k <= 0);

    do
    {
        printf("Digite um numero para a soma: ");
        scanf("%d",&num);

        soma = soma + num;
        cont++;
    }
    while(cont != k);

    printf("O resultado de todas as somas e de %d",soma);

}
#endif

#ifdef exSalaWhile
main()
{
    int k = 0,num,soma = 0,cont = 0;

    while(k <= 0)
    {
        printf("Digite um numero que representa a quantidade de valores que voce escolhera para a soma: ");
        scanf("%d",&k);
    }

    while(cont != k)
    {
        printf("Digite um numero para a soma: ");
        scanf("%d",&num);

        soma = soma + num;
        cont++;
    }

    printf("O resultado de todas as somas e de %d",soma);

}
#endif

#ifdef exSalaFor
main()
{
    int k = 0,num,cont = 0,soma = 0;

    while(k <= 0)
    {
        printf("Digite um numero que representa a quantidade de valores que voce escolhera para a soma: ");
        scanf("%d",&k);
    }

    for(cont = 0; cont < k; cont++)
    {
        printf("Digite um numero para a soma: ");
        scanf("%d",&num);

        soma = soma + num;
    }

    printf("O resultado de todas as somas e de %d",soma);

}
#endif

#ifdef ex1L2
main()
{

}
#endif
