//e x i t以登记这些函数的相反顺序调用它们。同一函数如若登记多次，则也被调用多次。

#include "ourhdr.h"

static void my_exit1(void),my_exit2(void);

int main()
{
	if (atexit(my_exit2)!=0)
		err_sys("can't register my_exit2");
	if (atexit(my_exit1)!=0)
		err_sys("can't register my_exit1");
	if (atexit(my_exit1)!=0)
		err_sys("can't register my_exit1");
	
	printf("main is done\n");
	return 0;
}

static void my_exit1()
{
	printf("first exit handler\n");
}

static void my_exit2()
{
	printf("second exit handler\n");
}