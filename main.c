#include <stdio.h>
#include <time.h>

long long int	rec_fib(long long int n);
long long int	dyn_fib(long long int n);

int	main(void) {
	clock_t begin = clock();

	printf("result: %lld\n", rec_fib(50));

	clock_t end = clock();
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("Time spent with recursion = %f seconds\n", time_spent);

	printf("\n=============================================\n\n");

	begin = clock();

	printf("result: %lld\n", dyn_fib(50));

	end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("Time spent with dynamic prog = %f seconds\n", time_spent);
}