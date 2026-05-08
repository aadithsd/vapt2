#include<stdio.h>
#include<unistd.h>

int main()
{
	printf("process id getpid() is: %d",getpid());
	printf("process id getppid() is: %d",getppid());
	return 0;
}
