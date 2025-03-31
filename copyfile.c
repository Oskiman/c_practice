// copyfile.c
// program copies contents of one file to another


#include <stdio.h>

int main()
{
	int ch;
    	FILE *fp;		// pointer to file to be read from
	FILE *fpw;		// pointer to file to write to
	char fname[50];     	// file name to be read from
    	char fwname[50];	// file name to write to
    	printf("Enter the name of the file to read from: ");
    	scanf("%s", fname);
    	fp = fopen(fname, "r");     // open file for reading
	printf("Enter the name of the file to write to: ");
	scanf("%s", fwname);	
	fpw = fopen(fwname, "w");		// open file to write to
    	
    	while((ch = getc(fp)) != EOF)
        	fputc(ch, fpw);		// copy to file to write to

	// close files
        fclose(fp);     
	fclose(fpw);
	
	return 0;
}

