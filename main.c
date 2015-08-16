#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int main(int argc, char *argv[])
{
    clock_t start_time;
    start_time = clock();

    unsigned long i=0;
    unsigned long x=0;    //Controla quantos primos foram encontrados
    unsigned long max=0;  //Valor ate onde procurar numeros primos
    unsigned long numero;   //Controla o la�o For
    unsigned long primos[1000000]; //Armazena os numero primos encontrados    //7665000
    int resto=0;    //Resto da divisao
    primos[0]=2;    //Primeiro numero primo
    char *ptr;
    max = strtoul(argv[1], &ptr, 10);

    start_time = clock();
    for (numero = 3; numero<=max; numero=numero+2)
    {
        for (i=0; i<=x; i++)
        {
            resto = numero % primos[i];
            if(resto == 0)
            {
                break; //Sai do la�o
            }
            else
            {
                if(i==x)
                {
                    x=x+1;  //Incrementa o total de primos
                    primos[x]=numero;   //Adiciona o numero a lista de primos
                }
            }
        }
    }
    for(i = 0; i <= x; i++)
    {
        printf("%lu ", primos[i]);
    }
    printf("\n");
    printf("Total primos ate %lu: %lu\n", max,x+1);
    double time_in_seconds = (clock() - start_time) / (double)CLOCKS_PER_SEC;
    printf("Tempo: %f\n", time_in_seconds);
    return 0;
}
