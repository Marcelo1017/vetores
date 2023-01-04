#include<stdio.h>
#include<stdlib.h>

int* intervalo(int *v, int n, float min, float max, int qtd);

int main(void)
{
	int i, n, v[n], mini=0, maxi=0, qtd=0;

	float min, max;
	//LENDO OS VALORES DE MIN E MAX!!

	printf("\n Digite o valor m�nimo: ");
		scanf("%f", &min);
	printf("\n Digite o valor maximo: ");
		scanf("%f", &max);

	//LENDO O TAMANHO DE V!!
	printf("\n Qual o tamanho do vetor? ");
	scanf("%d",&n);


	printf("\n Prencha o vetor com numeros inteiros \n");
	//PREENCHENDO O VETOR V!!
	for(i=0;i<n;i++)
	{
		printf("\n Valor %d: ",i+1);
		scanf("%d", &v[i]);
	}

	intervalo(v, n, min, max, qtd);


system("PAUSE");

return (0);
}

int* intervalo(int *v, int n, float min, float max, int qtd)
{
	int j=0, i, vetorD[qtd] ;

	//VERIFICANDO QTD ENTRE MIN E MAX
	for(i=0;i<n;i++)
		if(v[i] >= (int)min && v[i] <= (int)max){
			qtd++;
			vetorD[j] = v[i];
			j++;
		}
	if(qtd==0)
		printf("\n :( Valores n�o encontrados!! \n");

		//IMPRIMINDO O VALORES DO INTERVALO
		for(j=0;j<qtd;j++)
		{
			printf("\n ___ VALORES DO INTERVALO ___\n\n VALOR: %d ",vetorD[j]);
		}
		printf("\n Quantidade de valores alocados: %d",qtd);
		free(vetorD);
	return 0;
}
