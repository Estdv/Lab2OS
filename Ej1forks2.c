#include <stdio.h>
#include <unistd.h>

int main()
{
	int i;

	for (i = 1; i<5; ++i){
		fork();
	}
	printf("proceso\n");
}
