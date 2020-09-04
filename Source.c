#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
	int i;
	char Nama1[20] = { 'R','I','Z','K','Y',' ','K','H','A','P','I','D','S','Y','A','H' };
	char Nama2[20] = "Rizky Khapidsyah";

	printf("----------------\n");
	printf("Array Karakter\n");
	printf("----------------\n");

	for (i = 0; i < 19; i++)
	{
		printf("%c", Nama1[i]);
	}

	puts("\n");
	printf("------------------------------------------------------\n");
	printf("Array String: %s\n\n", Nama2);
	printf("------------------------------------------------------\n");

	_getch();
	return 0;
}