// Dan Kruse
// Array-Free stack implementation.

#include "stack.h"
#include<malloc.h>
#ifndef STACK_H 
#define STACK_H

char *items;
int charInit = 0;
int size = 0;

// Returns the Character at the top of the stack.
char peek () {
	return *items;
	}

// Adds a Character to the top of the stack.
void push (char c) {
	if(charInit == 0) {
		items = malloc (sizeof (char) * 100);
		charInit = 1;
		}
	items++;
	size++;
	*items = c;
	}

// Removes and returns the Character at the top of the stack.
char pop () {
	items--;
	size--;
	return *items;
	}

// Returns 1 if the stack is full, 0 if not.
int full () {
	if(size >= 100) {
		return 1;
		}
	else return 0;
	}

// Returns 1 if the stack is empty, 0 if not.
int empty () {
	if(size == 0) {
		return 1;
		}
	else return 0;
	}
#endif
