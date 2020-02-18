#define ex6
#include <stdio.h>

#ifdef ex5
main()
{
    int qt = 0;

    while(qt <= 4 || qt > 20)
    {
        printf("Insira um numero maior que 4 e menor ou igual a 20: ");
        scanf("%d",&qt);
    }

    int num [qt], numInv [qt], cont;

    for(cont = 0; cont < qt; cont++)
    {
        printf("Insira um numero qualquer: ");
        scanf("%d",&num[cont]);
    }

    printf("Sequencia normal: ");

    for(cont = 0; cont < qt; cont++)
    {
        printf("%d ",num[cont]);
    }

    printf("\nSequencia invertida: ");

    for(cont = 1; cont < qt + 1; cont++)
    {
        numInv[cont] = num[qt-cont];
        printf("%d ",numInv[cont]);
    }
}
#endif

#ifdef ex6
main()
{
    int a [5], b [5], c [5], d[15], cont, cont2 = 0, contn = 0;

    for(cont = 0; cont < 5; cont++)
    {
        printf("Insira um numero qualquer para o primeiro vetor: ");
        scanf("%d",&a[cont]);
    }

    for(cont = 0; cont < 5; cont++)
    {
        printf("Insira um numero qualquer para o segundo vetor: ");
        scanf("%d",&b[cont]);
    }

    for(cont = 0; cont < 5; cont++)
    {
        printf("Insira um numero qualquer para o terceiro vetor: ");
        scanf("%d",&c[cont]);
    }

    for(cont = 0; cont < 5; cont++)
    {
        d[cont2] = a[cont];
        cont2++;
        d[cont2] = b[cont];
        cont2++;
        d[cont2] = c[cont];
        cont2++;
    }

    printf("Vetor 1: %d ",a[0]);

    for(cont = 1; cont < 5; cont++)
    {
        printf("%d ",a[cont]);
    }

    printf("\nVetor 2: %d ",b[0]);

    for(cont = 1; cont < 5; cont++)
    {
        printf("%d ",b[cont]);
    }

    printf("\nVetor 3: %d ",c[0]);

    for(cont = 1; cont < 5; cont++)
    {
        printf("%d ",c[cont]);
    }

    printf("\nVetor 4: %d ",d[0]);

    for(cont = 1; cont < 15; cont++)
    {
        printf("%d ",d[cont]);
        if(d[cont] < 0)
        {
            contn++;
        }
    }

    printf("\nNumeros negativos no vetor 4: %d", contn);
}
#endif

#ifdef ex8
main()
{

}
#endif

#ifdef ex10
main()
{

}
#endif
