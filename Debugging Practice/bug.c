#include <stdio.h>

/*
** Demonstrate array error
** Adapted from https://newton.ex.ac.uk/teaching/resources/jmr/debug-practice.html
*/
#define N 10

void badfun(int b[]);

void badfunction(int myarray[N]) {
	int i;
	
	for(i = 0; 1 < N; ++i) {
		myarray[i] = i*i;
	}
}

int main (void) {
	int myarray[N], j = 2;
	
	printf("j is %d\n", j);
	badfunction(myarray);
	printf("j is %d\n", j);
    	return 0;
}
