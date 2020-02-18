#define ex19
#include <stdio.h>
#include <stdlib.h>

#ifdef ex1
main()
{
    int k = 0, cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0, seq;

    while(k <= 0)
    {
        printf("Insira o numero de termos que serao apresentados: ");
        scanf("%d",&k);
        if(k <= 0)
        {
            printf("\nNumero invalido, insira numeros > 0, ");
        }
    }

    for(seq = 0; seq < k; seq++)
    {
        cont1 = cont1 + 3;
        if(seq == k - 1)
        {
            printf("%d \n", cont1);
        }
        else
        {
            printf("%d ", cont1);
        }
    }

    cont1 = 1;

    for(seq = 0; seq < k; seq++)
    {
        cont2 = cont2 + 4;
        if(seq == k - 1)
        {
            printf("%d/%d \n", cont1,cont2);
        }
        else
        {
            printf("%d/%d ", cont1,cont2);
        }
    }

    cont1 = -1; cont2 = 0;

    for(seq = 0; seq < k; seq++)
    {
        cont1 = cont1 + 2;
        cont2 = cont2 + 8;
        if(seq == k - 1)
        {
            printf("%d/%d \n", cont1,cont2);
        }
        else
        {
            printf("%d/%d ", cont1,cont2);
        }
    }

    cont1 = 0; cont2 = 0;

    for(seq = 0; seq < k; seq++)
    {
        cont1 = cont1 + 2;
        cont2 = cont2 + 3;
        if(seq == k - 1)
        {
            printf("%d/%d \n", cont1,cont2);
        }
        else
        {
            printf("%d/%d ", cont1,cont2);
        }
    }

    cont1 = 0; cont2 = 0;

    for(seq = 0; seq < k; seq++)
    {
        cont1++;
        cont3 = cont1 *  cont1;
        cont2 = cont2 + 8;

        if(cont1 % 2 == 0)
        {
            cont4++;
            if(seq == k - 1)
            {
                printf("%d \n", cont4);
            }
            else
            {
                printf("%d ", cont4);
            }

        }

        else
        {
            if(seq == k - 1)
            {
                printf("%d/%d \n", 4 * cont3,cont2);
            }
            else
            {
                printf("%d/%d ", 4 * cont3,cont2);
            }
        }
    }
}
#endif

#ifdef ex2
main()
{
    int k = 0, contf, num = 0, contp = 0;

    while(k <= 0)
    {
        printf("Digite um numero para representar a quantidade de numeros a serem inseridos: ");
        scanf("%d",&k);
    }

    for (contf = 0; contf < k; contf++)
    {
        printf("Digite um numero: ");
        scanf("%d",&num);

        if(num > 0)
        {
            contp++;
        }
    }

    printf("Dos numeros digitados, %d deles sao positivos",contp);

}
#endif

#ifdef ex3
main()
{
    int k = 0, idade = 0, aux = 0, cont;

    while(k <= 0)
    {
        printf("Digite um numero para representar a quantidade de idades a serem inseridas: ");
        scanf("%d",&k);
    }

    for(cont = 0; cont < k; cont++)
    {
        printf("Digite uma idade: ");
        scanf("%d",&aux);

        idade = aux + idade;

    }

    printf("O resultado da somatoria de todas as idades e igual a %d ",idade);
}
#endif

#ifdef ex4
main()
{
    int k = 0, num = 0, cont = 0, contnp = 0, contz = 0, aux = 0;

    while(k <= 0)
    {
        printf("Digite um numero para representar a quantidade de numeros a serem inseridos: ");
        scanf("%d",&k);
    }

    for (cont = 0; cont < k; cont++)
    {
        printf("Digite um numero: ");
        scanf("%d",&num);

        if(num == 0)
        {
            contz++;
        }
        else
        {
            if(num < 0)
            {
                aux = num % 2;
                if(aux == 0)
                {
                    contnp++;
                }
            }
        }
    }

    printf("Nos numeros digitados, %d deles eram 0s e %d deles eram negativos e positivos", contz, contnp);
}
#endif

#ifdef ex5
main()
{
    int k = 0, num = 0, cont = 0, aux1 = 0, aux2 = 0, contdiv = 0;

    while(k <= 0)
    {
        printf("Digite um numero que represente a quantidade de numeros desejados: ");
        scanf("%d",&k);
    }

    for (cont = 0; cont < k; cont++)
    {
        do
        {
            printf("Digite um numero positivo: ");
            scanf("%d",&num);
        }
        while(num <= 0);

        aux1 = num % 2;
        aux2 = num % 3;

        if(aux1 == 0 && aux2 == 0)
        {
            contdiv++;
        }
    }

    printf("A quantidade de numeros divisiveis por 2 e 3 ao mesmo tempo digitados e %d",contdiv);
}
#endif

#ifdef ex6
main()
{
    int x = 0, h = 0, aux = 1, cont;

    while(x <= 0)
    {
        printf("Digite um numero para representar a quantidade de numeros a serem inseridos: ");
        scanf("%d",&x);
    }

    for (cont = 0; cont < x; cont++)
    {
        do
        {
            printf("Digite um numero maior ou igual a 15: ");
            scanf("%d",&h);
        }
        while(h < 15);

        aux = h * aux;
    }

    printf("O produto dos numeros digitados e igual a %d", aux);
}
#endif

#ifdef ex7
main()
{
    float n = 0, peso = 0, k = 0, cont;

    while(n <= 0)
    {
        printf("Digite um numero para representar a quantidade de pesos a serem inseridos: ");
        scanf("%f",&n);
    }

    for(cont = 0; cont < n; cont ++)
    {
        printf("Digite um peso: ");
        scanf("%f",&peso);

        k = peso + k;
    }

    k = k / n;

    printf("A media dos pesos inseridos é igual a %f", k);
}
#endif

#ifdef ex8
main()
{
    int k = 0, soma = 0, cont = 0;
    float produto = 1;

    while(k <= 0)
    {
        printf("Digite um numero que represente a quantidade de numeros naturais desejados: ");
        scanf("%d",&k);
    }

    for(cont = 1; cont <= k; cont++)
    {
        soma = cont + soma;

        produto = cont * produto;
    }

    printf("A soma e igual a %d, e o produto e igual a %f",soma,produto);
}
#endif

#ifdef ex9
main()
{
    int k = 0, num = 0, contr = 0, cont;

    while(k <= 0)
    {
        printf("Digite um numero para representar a quantidade de numeros a serem utilizados: ");
        scanf("%d",&k);
    }

    for (cont = 0; cont < k; cont++)
    {
        printf("Digite um numero: ");
        scanf("%d",&num);

        if(num < -16 && num >= -23)
        {
            contr++;
        }
    }

    printf("A quantidade de numeros maiores ou iguais a -23 e menores que -16 e %d",contr);
}
#endif

#ifdef ex10
main()
{
    int k = 0, num = 0, contr = 0, cont;

    while(k <= 0)
    {
        printf("Digite um numero para representar a quantidade de numeros pares e multiplos de 5 a serem usados: ");
        scanf("%d",&k);
    }

    for (cont = 0; cont < k; cont++)
    {
        num = num + 10;
    }

    num = num / cont;

    printf("A media dos numeros pares e multiplos de 5 e de %d", num);
}
#endif

#ifdef ex18
main()
{
    int k = 0, num1 = 1, num2 = 1, cont = 0, soma = 0, aux1 = 0, aux2 = 0;

    while(k <= 0)
    {
        printf("Digite um numero para representar a quantidade de termos da sequencia de Fibonacci a serem usados: ");
        scanf("%d",&k);
    }

    printf("%d ",num1);

    for(cont = 0; cont < k - 1; cont++)
    {
        printf("%d ",num1);

        aux1 = num1 + num2;
        num2 = num1;
        num1 = aux1;

        aux2 = aux1;
        aux1 = aux1%3;

        if(aux1 == 0)
        {
            soma = soma + aux2;
        }
    }
    if(soma == 0)
    {
        printf("\nNenhum dos numeros apresentados eram divisiveis por 3");
    }
    else
    {
        printf("\nDos numeros apresentados, a soma dos numeros divisiveis por 3 e %d", soma);
    }

}
#endif

#ifdef ex19
main()
{
    int num = -1, aux = 0, cont = 0;

    while(num < 0)
    {
        printf("Digite um numero inteiro e maior ou igual a 0: ");
        scanf("%d",&num);
    }

    aux = num;

    if(num == 0)
    {
        printf("O fatorial do numero e igual a 1");
    }
    else
    {
        for(cont = aux-1; cont > 1; cont--)
        {
            num = cont * num;
        }

        printf("O fatorial do numero e igual a %d",num);
    }
}
#endif

