
#include <unistd.h>
#include <stdio.h>

int main() {


	pid_t pid;

	pid = fork();

	if (pid == 0) {
		for (int i=1;i<10000001;i++) {
			printf("%d\n",i);
		}
	} else {
		while (1) {}
	}



	return 0;
}

