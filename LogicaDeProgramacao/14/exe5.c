#include <stdio.h>

main()
{
	char let;
	
	do
	{
		scanf("\n%c",&let);
		if (let >= 'a' && let <= 'z')
		printf("%c\n",let-32);
		else if (let >= 'A' && let <= 'Z')
		printf("Letra maiuscula\n");
		else
		printf("nao e letra\n");
	}
	while (let != '@');
}
