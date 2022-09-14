long long int	rec_fib(long long int n) {
	if (n <= 2)
		return 1;
	return (rec_fib(n - 1) + rec_fib(n - 2));
}