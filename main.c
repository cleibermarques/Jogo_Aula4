#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() 
{
	setlocale(LC_ALL, "portuguese");
	srand(time(NULL));
	
	int numeroSorteado = rand() % 1000;
	int palpite;
	char outraPartida;
	
	do
	{
		do
		{
			printf("\r\nDigite seu palpite: ");	
			scanf("%d", &palpite);
			printf("O seu palpite foi: %d", palpite);	
			
			if (palpite == numeroSorteado)
			{
				printf("\n\rParabéns, você ganhou!!!!");
			}
			else if (palpite < numeroSorteado)
			{
				printf("\n\rDesculpe, o número sorteado é maior que seu palpite!\n");
			}
			else
			{
				printf("\n\rDesculpe, o número sorteado é menor que seu palpite!\n");
			}
		} while (palpite != numeroSorteado);
		
		printf("\n\r\nOutra partida? [s/n] ", outraPartida);
		scanf("\n%c", &outraPartida);
		if (outraPartida == 's' || outraPartida == 'S')
		{
			system("cls");
		}
		else
		{
			return 0;
		}
	} while (outraPartida == 's' || outraPartida == 'S');
	return 0;
}
