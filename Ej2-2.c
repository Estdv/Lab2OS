#include <unistd.h>
#include <stdio.h>
#include <time.h>
#include <sys/wait.h>

int main() {

	pid_t pid1;
	pid_t pid2;
	pid_t pid3;
	clock_t start;
	clock_t end;

	start = clock();
	pid1 = fork();
	int i;
	int j;
	int k;

	if (pid1 == 0) {
		pid2 = fork();

		if (pid2 == 0) {
			pid3 = fork();

			if (pid3 == 0) {
				// bisnieto
				for (i=0;i<1000000;i++) {
					
				}
			} else {
				// nieto
				wait(NULL);
				for (j=0;j<1000000;j++) {
					
				}
			}
		} else {
			// hijo
			wait(NULL);
			for (k=0;k<1000000;k++) {
				
			}
		}
	} else {
		// padre
		wait(NULL);
		end = clock();
		printf("Tiempo: %f\n",(float)end-start);
	}

	return 0;
}
