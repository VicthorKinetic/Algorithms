#include <stdio.h>

main()
{
    int j = 0, num = 0, contp = 0, maiorp = 0, aux, cont;

    while(j <= 0)
    {
        printf("Digite o numero de termos a serem digitados: ");
        scanf("%d",&j);
    }

    for(cont = 0; cont < j; cont++)
    {
        printf("Digite um numero: ");
        scanf("%d",&num);

        aux = num%2;

        if(aux == 0)
        {
            contp++;
            if(contp == 1 || num > maiorp)
            {
                maiorp = num;
            }
        }
    }

    if(contp == 0)
    {
        printf("Nenhum numero par digitado");
    }
    else
    {
        printf("Foram digitados %d numeros pares e o maior deles e %d", contp,maiorp);
    }
}
