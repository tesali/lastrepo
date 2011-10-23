#include <stdio.h>

int main()
{
char *przy = "witaj świecie";
char *hello = "witaj world";
char *formatka = "\n\t%s\n\n";

	printf(formatka, przy);
	printf(formatka, hello);
	printf("\n\t2 + 2 = %d\n", 2 + 2);
	return 0;
}
