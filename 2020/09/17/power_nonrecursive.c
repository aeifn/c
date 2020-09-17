int power(int a, int n) {
	int result = 1;
	while (n) 
		if (n & 1) {
			result *= a;
			--n;
		} else {
			a *= a;
			n >>= 1;
		}
	return result;
}
