#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	FILE *fp;
	fp = fopen("filename.txt", "w");
	/* Processing of the file */
	fprintf(fp, "%s", "Hello World");
	/* End of processing */
	fclose(fp);
	return (0);
}
