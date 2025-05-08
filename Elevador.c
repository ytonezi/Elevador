#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>

main()
{
    int x, andares, entrada, saida, passageiros, devemsair;

    printf("Andares do predio: ");
    scanf("%d", & andares);

    passageiros= 0;

    for (x=1; x<=andares; x++)
    {
        printf("\nAndar %d\n", x);
        printf("\nEntrada: ");
        scanf("%d", & entrada);
        printf("Saida: ");
        scanf("%d", & saida);

        passageiros += entrada - saida;
        printf("\nHa %d passageiros neste elevador", passageiros);

        if (passageiros > 15)
    {
        devemsair = passageiros - 15;
        printf("Para prosseguir, %d passageiros devem deixar o elevador.", devemsair);
        passageiros -= devemsair;
    }
    else if (passageiros < 0)
            {
                passageiros = 0;
            }
    }

    printf("\nAo descer, %d passageiros permaneceram no elevador.", passageiros);
}