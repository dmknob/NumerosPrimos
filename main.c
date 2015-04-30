#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <conio.h>
#include <math.h>
#include <time.h>

int main()
{
    clock_t start_time;
    start_time = clock();

    unsigned long i=0;
    unsigned long x=0;    //Controla quantos primos foram encontrados
    unsigned long max=0;  //Valor ate onde procurar numeros primos
    unsigned long numero;   //Controla o la�o For
    unsigned long primos[518688]; //Armazena os numero primos encontrados
    //7665000
    //unsigned long long primos[259828]; //Armazena os numero primos encontrados
    int resto=0;    //Resto da divisao

    primos[0]=2;    //Primeiro numero primo

    printf("Digite o numero: ");
    scanf("%d", &max);
    //max=3800000;

    start_time = clock();
    for (numero = 3; numero<=max; numero=numero+2)
    {
        //resto = numero % primos[0];
        //if (resto != 0) //Nao eh par
        //{
            for (i=0; i<=x; i++)
            {
                //printf("I: %d\n", i);
                resto = numero % primos[i];
                //printf("R: %d\n", resto);
                if(resto == 0)
                {
                    break; //Sai do la�o
                }
                else
                {
                    if(i==x)
                    {
                        //printf("Primo -> N: %d R: %d\n", numero, resto);
                        x=x+1;  //Incrementa o total de primos
                        primos[x]=numero;   //Adiciona o numero a lista de primos
                        //break;
                    }
                }
            }
        //}
    }


    for(i = x-10; i < x; i++)
    {
        printf("%d ", primos[i]);
    }
    printf("\n");
    
    printf("Total primos ate %d: %d\n", max,x+1);
    double time_in_seconds = (clock() - start_time) / (double)CLOCKS_PER_SEC;
    printf("Tempo: %f\n", time_in_seconds);
//    system("pause");
    return 0;
}
