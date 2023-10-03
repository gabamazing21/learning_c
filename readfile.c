#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	FILE *filename; /* pointer variable to handle file name */
	char ch[100];
	filename = fopen("filename.txt", "r");
	printf("%s", fgets(ch, 50, filename));
	fclose(filename);
	return (0);
}
