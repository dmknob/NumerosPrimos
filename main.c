#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>
#include <time.h>

int main()
{
  clock_t start_time;
  start_time = clock();

  unsigned long i=0;
  unsigned long x=0;		//Controla quantos primos foram encontrados
	unsigned long max=0;	//Valor ate onde procurar numeros primos
	unsigned long numero;	 //Controla o la�o For
	unsigned long primos[518688]; //Armazena os numero primos encontrados
	//Da erro no windows se tentar com um vetor maior.
	int resto=0;		//Resto da divisao

	primos[0]=2;		//Primeiro numero primo

	printf("Digite o numero: "); //Valor ate onde procurar numeros primos
	scanf("%d", &max);

	start_time = clock(); //Armazena o numero de ticks atual

	for (numero = 3; numero<=max; numero=numero+2)
	{
		for (i=0; i<=x; i++)
    {
      resto = numero % primos[i];
      if(resto == 0)
      {
        break; //Forca sair do laco
      }
      else
      {
        if(i==x)
        {
          x=x+1;	//Incrementa o total de primos
          primos[x]=numero;	 //Adiciona o numero a lista de primos
        }
      }
    }
	}

  //Calcula o tempo que levou processando
  double time_in_seconds = (clock() - start_time) / (double)CLOCKS_PER_SEC;

	//Imprime os ultimos primos calculados
  for(i = x-10; i < x; i++)
	{
    printf("%d ", primos[i]);
	}
	printf("\n");
	printf("Total primos ate %d: %d\n", max,x+1);
	printf("Tempo: %f\n", time_in_seconds);
	system("pause");
	return 0;
}
