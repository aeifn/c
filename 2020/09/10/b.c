#include <stdio.h>

int main() {
        int a = 75;
        int b = 45;
        int k = 1;

        while ( a != b ) {
                if ( a%2 == 0 && b%2 == 0 ) {
                        a = a/2;
                        b = b/2;
                        k = k * 2;
                }
                if ( a%2 == 0 && b%2 != 0 ) {
                        a = a/2;
                } else if ( a%2 != 0 && b%2 == 0 ) {
                        b = b/2;
                }

                if (a<b) {
                        b=b-a;
                } else {
                        a=a-b;
                }
        }
        printf("%d\n", a*k);
}
