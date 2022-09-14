long long int	dyn_fib(long long int n) {
	long long int	x[n + 1];

	x[0] = 0;
	x[1] = 1;
	for (int i = 2; i <= n; i++) {
		x[i] = x[i - 1] + x[i - 2];
	}
	return x[n];
}
