#include <stdio.h>

main()
{
	char sel;
	
	do
	{
		scanf("\n%c",&sel);
		if (sel >= 'a' && sel <= 'z')
			printf("Minuscula\n");
		else if (sel >= 'A' && sel <= 'Z')
			printf("Maiuscula\n");
		else if (sel >= '0' && sel <= '9')
			printf("Digito\n");
		else
			printf("Sem classificacao\n");
	} 	
	while (sel != 'f');
}
