long power(int a, int n) {
	long res = 1;
	int i;
	for (i = 1; i <= n; i++) {
		res *= a;
	}
	return res;
}	
