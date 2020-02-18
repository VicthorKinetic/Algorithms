#include <stdio.h>
#include <math.h>

main()
{
    int opcao;

    printf ("Digite 1 para somar, 2 para raiz ou 3 para potencia: \n");
    scanf ("%d", &opcao);

    switch(opcao)
    {
        case 1:
            {
                int n1, n2;

                printf("Digite um numero: ");
                scanf("%d",&n1);

                printf("Digite um numero: ");
                scanf("%d",&n2);

                n1 = n1 + n2;

                printf("A soma deu igual a %d", n1);
                break;
            }

        case 2:
            {
                double n1 = 0;

                while(n1 <=0)
                {
                    printf("Digite um numero positivo: ");
                    scanf("%f",&n1);
                }

                double sqrt(double n1);

                printf("A raiz e igual a %f", sqrt);

                break;
            }
    }


}

//1.Somar dois números
//2.Raiz quadrada de um número positivo
//3.Elevar um número a uma determinada potência, ambos    definidos pelo usuário.

