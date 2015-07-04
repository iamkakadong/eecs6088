#include <stdio.h>

int x;

void process_var(int* xp){
	*xp = 5;
}

void fun() {
	process_var(&x);
	printf("%d\n", x);
}

int main(){
	fun();
	return 0;
}