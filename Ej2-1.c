# include <stdio.h>
# include <time.h>

int main() {
	clock_t start;
	clock_t end;
	int i;
	double time;

	start = clock();

	for (i=0;i<1000000;i++) {
		
	}

	for (i=0;i<1000000;i++) {
		
	}

	for (i=0;i<1000000;i++) {

	}

	end = clock();
	time = (double)(end-start);

	printf("\nTiempo: %f\n",time;
	return 0;
}
