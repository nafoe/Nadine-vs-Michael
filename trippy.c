#include <stdio.h>
#include <stdlib.h>
int main(){
	while(1){
		if((rand() % 1 + 0) > 0.5)
			printf("1");
		else	printf("0");
		printf(" ");
	}
}