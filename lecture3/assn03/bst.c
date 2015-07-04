#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

/* Returns a bst_t structure with an int array vals of size "size" and the
 * size field set appropriately. */
bst_t* make_tree(int size){
	bst_t* new_tree = malloc(sizeof(bst_t));
	new_tree->vals = malloc(sizeof(int) * (size+1));
	new_tree->size = size;
	return new_tree;
}

/*
 * Initialize the binary search tree.
 * HINT: What should we initialize values to?  What requirements might we have
 * to add to the tree specification?
 */
void init_tree(bst_t* tree){
	*(tree->vals) = -10000;
	for (int i = 1; i <= tree->size; ++i){
		*(tree->vals + i) = 10000;
	}
}

/*
 * Inserts a new value into a given tree.
 */
void insert(int val, bst_t* tree){
	int curr_index = 0;
	int curr_val = *tree->vals;
	while (curr_val < 10000){
		if (val < curr_val){
			curr_index = curr_index * 2 ;
		}
		else{
			curr_index = curr_index * 2 + 1;
		}
		curr_val = *(tree->vals + curr_index);
	}
	*(tree->vals + curr_index) = val;
}

bool find_val(int val, bst_t* tree){
	int curr_index = 1;
	int curr_val = *(tree->vals + curr_index);
	while (curr_val < 10000){
		if (curr_val == val){
			return TRUE;
		}
		else if (val < curr_val){
			curr_index = curr_index * 2 ;
		}
		else{
			curr_index = curr_index * 2 + 1;
		}
		curr_val = *(tree->vals + curr_index);
	}
	return FALSE;
}

/*
 * Given a pointer to the root, frees the memory associated with an entire list.
 */
void delete_bst(bst_t* tree){
	free(tree->vals);
	free(tree);
}

/* Given a pointer to the root, prints all of the values in a list. */
void print_bst(bst_t* tree){
	for (int i = 1; i <= tree->size; ++i){
		if (*(tree->vals + i) < 10000){
			printf("%d ", *(tree->vals+i));
		}
	}
}
