long power(int a, int n) {
	if (n == 0)
		return 1;
	if (n % 2 == 1)
		return power(a, n-1) * a;
	else {
		long b = power(a, n/2);
		return b * b;
	}
}
