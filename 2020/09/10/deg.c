#include <stdio.h>


int deg(int x, int y) {
	int result = x;
	for (int i = 1; i < y; i++) {
		result = result * x;
	}
	return result;
}

int main() {
	int x = 2;
	int y = 10;
	printf("%d\n", deg(x,y) );
}
