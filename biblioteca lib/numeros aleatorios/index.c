#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//<stdlib.h> rand(), srand.
//<time.h> time.



int main()
{
    srand(time(NULL)); //srand coloca a seed com base no horario

    int numero_max = 10;
    int numero_aleatorio = rand() % numero_max;

    printf("%d\n",numero_aleatorio);
    return 0;
}