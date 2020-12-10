/************************************
  Author: Egor Kuzmichev
  RLE comporession algorithm
  MSU 2020

  Example usage:
  > echo aaaabbbcc | ./a.out
  4a3b2c
*************************************/
#include <stdio.h>

int main() {
    char cur;
    char prev=EOF;
    int counter=0;
    while((cur=getchar())!=EOF) {
        if (cur==prev || prev==EOF) {
            counter++;
        } else {
            printf("%d", counter);
            putchar(prev);
            counter=1;
        }
        prev=cur;
    }
}