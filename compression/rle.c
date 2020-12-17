/************************************
  
  Author: Egor Kuzmichev
  RLE comporession algorithm
  MSU 2020

  Example usage:

  echo aaaaaaaaaa | ./a.out
  aa10

  echo ababababab | ./a.out
  ababababab

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
            if(counter==1){
                putchar(prev);
            } else {
                putchar(prev);
                putchar(prev);
                printf("%d", counter);
            }
            counter=1;
        }
        prev=cur;
    }
}