#include <stdio.h>
#include <time.h>
// pointers

char * name = "john lennon";

void test() {
	printf("%s", name);
}

int counter = 0;
int * pointer = &counter;

void up_the_counter() {
	*pointer += 1;
}

/*
 *int main() {
 *    printf("what the fuck is up boiii");
 *    int inp;
 *    printf("how many times to up the fucking counter boiiiiiiiiiiiiiiii ");
 *    scanf("%d", &inp);  
 *    printf("upping the counter %d times", inp);
 *
 *    printf("upping the counter, counter: %d, pointer: %d", counter, *pointer);
 *    for (int i=0; i<counter; i++) {
 *        up_the_counter();
 *    }
 *    printf("upped the counter thru the pointer, counter: %d, pointer: %d", counter, *pointer);
 *    return 0;
 *}
 */
int fib1(int n) {
	// find the nth fibonacci number
	if (n <= 1) return n;
	return fib1(n-1) + fib1(n-2);
}



int main() {
	int inp;
	printf("enter digit> ");
	scanf("%d", &inp);
  	clock_t start_time1 = clock();
	int _fib1 = fib1(inp);
  	double elapsed_time1 = (double)(clock() - start_time1) / CLOCKS_PER_SEC;
	printf("fib1: %d, %f \n", _fib1, elapsed_time1);
}

