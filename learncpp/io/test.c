#include<stdio.h>
#include<unistd.h>

#define BUFFSIZE 8192
int main(){
	char buf[BUFFSIZE];
	
	int n ;
	
	while( (n = read(STDIN_FILENO, buf, BUFFSIZE)) > 0)
		if(write(STDOUT_FILENO, buf, n) != n)
			printf("write error");
	
	if(n<0)
		printf("read error");
	
	return 0;
}