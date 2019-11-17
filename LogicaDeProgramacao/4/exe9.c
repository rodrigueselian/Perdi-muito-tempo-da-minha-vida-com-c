#include <stdio.h>

main()
{
	float alt, pes;
	
	printf("insira sua altura e seu peso respectivamente:\n");
	scanf("%f%f",&alt,&pes);
	
	if((pes > 70 && pes < 80) && (alt < 1.90 && alt > 1.75)){
		printf("ACEITO");
	} else {
		if((pes > 70 && pes < 80) && (alt > 1.90 || alt < 1.75)){
			printf("RECUSADO POR ALTURA");
		} else {
			if((pes < 70 || pes > 80) && (alt < 1.90 && alt > 1.75)){ 
				printf("RECUSADO POR PESO");
			} else {
				printf("TOTALMENTE RECUSADO");
			}
		}
	}
}
