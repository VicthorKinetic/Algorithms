#define ex1
#include <stdio.h>

#ifdef ex1
main()
{
    int k = 0, cont, n, contm = 0, conti = 0;
    float menor = 0, media = 0;

    while(k <= 0)
    {
        printf("Digite a quantidade de funcionarios a ser digitado: ");
        scanf("%d",&k);
    }

    int idade [k];
    char nome [k] [40];
    float salario[k];
    float salarioF[k];

    for(cont = 0; cont < k; cont++)
    {
        printf("\nDigite o nome do funcionario: ");
        scanf("%s",&nome[cont]);

        printf("Digite a idade do funcionario: ");
        scanf("%d",&idade[cont]);

        printf("Digite o salario base do funcionario: ");
        scanf("%f",&salario[cont]);

        if(salario[cont] <= 800)
        {
            salarioF[cont] = salario[cont] * 1.15;
        }
        else
        {
            if(salario[cont] >= 1000)
            {
                salarioF[cont] = salario[cont] * 1.05;
            }
            else
            {
                salarioF[cont] = salario[cont] * 1.10;
            }
        }

        if(idade[cont] > 18 && idade[cont] < 25)
        {
            contm = contm + 1;
            media = salarioF[cont] + media;
        }

        if(idade[cont] > 40)
        {
            conti++;
            if(salario[cont] < menor || conti == 1)
            {
                menor = salario[cont];
            }
        }
    }

    for(cont = 0; cont < k; cont++)
    {
        printf("Nome: %s, Idade: %d anos, Salario Base: %.2f reais, Salario Novo: %.2f reais\n\n", nome[cont],idade[cont],salario[cont],salarioF[cont]);
    }


    if(contm == 0)
    {
        printf("Nao foi digitado pessoas entre 18 e 25 anos\n");
    }
    else
    {
        media = media / contm;
        printf("A media dos novos salarios para pessoas entre 18 e 25 anos e igual a %.2f\n",media);
    }

    printf("O menor salario encontrado entre as pessoas com idade superior a 40 anos e %.2f reais",menor);
}

#endif

#ifdef ex2
main()
{

}
#endif

#ifdef ex3
main()
{

}
#endif

#ifdef ex4
main()
{

}
#endif

#ifdef ex5
main()
{

}
#endif

#ifdef ex6
main()
{

}
#endif

#ifdef ex7
main()
{

}
#endif
