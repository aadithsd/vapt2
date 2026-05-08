#include<stdio.h>
#include<unistd.h>

int main()
{
	int pid;
	printf("\nbefore fork() - process id: %d",getpid());
	pid = fork();
	
	if(pid<0)
		printf("fork failed");
	else if(pid==0)
	{
		printf("\nChild process: ");
		printf("\nchild pid: %d",getpid());
		printf("\nparent pid: %d",getppid());
	}	
	else
	{
		printf("\nparent process: ");
		printf("\nparent pid: %d",getpid());
		printf("\nchild pid: %d",pid);
		
	
	}
	
	return 0;
}
