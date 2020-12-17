/************************************
  
  Author: Egor Kuzmichev
  RLE comporession algorithm
  MSU 2020

  Example usage:

  echo aaaaaaaaaa | ./a.out
  *10a%

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
                // special character *
                printf("%s","*");
                printf("%d", counter);
                putchar(prev);
            }
            counter=1;
        }
        prev=cur;
    }
}
