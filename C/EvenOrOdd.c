#include <stdio.h>


int main()
{
	int e 	   = 0;
	int o	   = 0;
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
	i = 0;
	while((zahlen[e] % 2) == 0)
	{
		e++;
		if(e == anzahl)
		{
			printf("Even!\n");
			return 0;
		}

	}
	while((zahlen[o] % 2) != 0){
		o++;
		if(o == anzahl)
		{
			printf("Odd!\n");
			return 0;
		}
	}
	printf("Both!\n");
	return 0;
}