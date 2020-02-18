#include <stdio.h>

main()
{
    int num [10], numInv [10], cont;

    for(cont = 0; cont < 10; cont++)
    {
        printf("Insira um numero qualquer: ");
        scanf("%d",&num[cont]);
    }

    printf("Sequencia normal: ");

    for(cont = 0; cont < 10; cont++)
    {
        printf("%d ",num[cont]);
    }

    printf("\nSequencia invertida: ");

    for(cont = 0; cont < 10; cont++)
    {
        numInv[cont] = num[9-cont];
        printf("%d ",numInv[cont]);
    }

}
