#include <stdio.h>

void main()
{
	int i = 0;
	char c, s[100] = {"\0"};
	for (;(c = getchar()) != EOF; i++)
	if (c == '\n' || c == ' ')
	{
		for (i = i-1; i > -1; i--)
		putchar(s[i]);
		putchar(c);
	} else if (i < 100)
	s[i] = c;
}
