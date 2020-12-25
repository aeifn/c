/************************************
  
  Author: Egor Kuzmichev
  RLE comporession algorithm
  MSU 2020

*************************************/

#include <stdio.h>

#define MAX 10

int encode() {

	// current char
	char cur;

	/* Структура state описывает состояние автомата */
	struct {
		int mode;
		int count;
		char prev;
		char uniq[MAX];
	} state;

	// Set initial state
	state.count=0;
	state.mode=0;

	// Run machine
	while(cur=getchar()){

		// мы в серии повторений
		if (state.mode>0){
			if(cur==state.prev){ 
				state.count++;
			} else {
				// выводим серию повторений
				printf("%d%c", state.count, state.prev);
				// переходим в уникальную серию
				state.count=0;
				state.mode=-1;
			}
		} else

		// мы в уникальной серии
		if (state.mode<0) {
			if(state.count==MAX) {
				// выводим серию повторений
				state.uniq[state.count]=(char) 0;
				printf("0%d%s", state.count, state.uniq);
				// обнуляем счетчик
				state.count=0;
			} 
			if(cur!=state.prev&&cur!=EOF){ 
				state.uniq[state.count]=state.prev;
				state.count++;
			} else {
				// выводим уникальную серию
				state.uniq[state.count]=(char) 0;
				if (state.count>0)
					printf("0%d%s", state.count, state.uniq);
				// переходим в серию повторений
				state.count=2;
				state.mode=1;
			}
		} else

		if(state.mode==0){
			// переходим в уникальную серию
			state.mode--;	
		}

		if(cur==EOF)
			break;

		state.prev=cur;
	}
}

int main() {
	encode();
}
