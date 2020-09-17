#include <stdio.h>

/*
 Задача сделать, чтобы функция подсчета степени работала побыстрее
*/

int power(int a, int n) {
	int result = 1;
	while (n) {
		if (n & 1) {
			result *= a;
		a *= a;
		n >>= 1;
	}
	return result;
}
