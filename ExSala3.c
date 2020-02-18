#include <stdio.h>

main()
{
    int k = 0, num = 0, cont = 0, conti = 0, contp = 0, maiori = 0, soma = 0, aux = 0;

    while(k<=0)
    {
        printf("Digite um numero que representa a quantidade de numeros a serem inseridos: ");
        scanf("%d",&k);
    }

    for(cont = 0;cont<k;cont++)
    {
        printf("Digite um numero: ");
        scanf("%d",&num);

        aux=num%2;

        if(aux == 0)
        {
            soma = soma + num;
            contp++;
        }

        else
        {
            if(num > 10 && num < 100)
            {
                conti++;
                if(num > maiori)
                {
                    maiori = num;
                }
            }
            else
            {
                if(num > maiori)
                {
                    maiori = num;
                }
            }
        }
    }

    soma = soma / contp;

    printf("Dos numeros digitados, %d eram impares entre 10 e 100, o maior impar positivo inserido foi %d, e a media dos numeros pares foi de %d",conti,maiori,soma);
}
