#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int compare(const void * a, const void * b)
{
	return ( *(int*)a - *(int*)b );
}


int main()
{
	int i 	   = 0;
	int anzahl = 0;
	printf("Bitte die Anzahl eingeben: \n");
	scanf("%i",&anzahl);
	int zahlen[anzahl];

	while(i < anzahl) 
	{
		printf("%i.Zahl:\t",i+1);
		scanf("%i",&zahlen[i]);
		i = i+1;
	}
	qsort(zahlen,anzahl,sizeof(int),compare);
	i = anzahl-1;
	printf("Zahlenfolge: \t");
	while(i >= 0) 
	{
		printf("%i",zahlen[i]);
		printf(",");
		i = i-1;
	}
	printf("\n");
}