#include <stdio.h>
#include <stdlib.h>

int* get_array(int* len){
	*len = 3;
	int* arr = malloc(sizeof(int) * 3); 
	arr[0] = 1; arr[1] = 2; arr[2] = 3; 
	return arr ;
}

int main() {
	int len, i;
	int* arr = get_array(&len); 
	for (i = 0; i < len; ++i) {
		printf("%d\n", arr[i]); 
	}
	return 0; 
}