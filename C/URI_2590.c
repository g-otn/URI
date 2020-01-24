#include <stdio.h>

// g-otn
// URI_2590
// Sete
int main()
{

    int numeroDeInstancias; // int max > 10^9
    scanf("%d", &numeroDeInstancias);

    while (numeroDeInstancias--)
    {
        int expoente;
        scanf("%d", &expoente);

        int fatiaDaPizza = expoente % 8;

        switch (fatiaDaPizza)
        {
        case 0:
        case 4:
            printf("1\n");
            break;
        case 1:
        case 5:
            printf("7\n");
            break;
        case 2:
        case 6:
            printf("9\n");
            break;
        case 3:
        case 7:
            printf("3\n");
            break;
        }
    }

    return 0;
}