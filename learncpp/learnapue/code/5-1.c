#include "ourhdr.h"

int main()
{
	int c;
	while ( (c = fgetc(stdin)) != EOF)
		if (putc(c,stdout) ==EOF)
			err_sys("output error");
		
	if(ferror(stdin))
		err_sys("input");
	exit(0);
}