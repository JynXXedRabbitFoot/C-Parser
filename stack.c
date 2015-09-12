
/* stack.c: stack implem */
/* source: http://www.cs.utsa.edu/~wagner/CS2213/stack/stack.html */

#include "stack.h"

#ifndef STACK_H 
#define STACK_H

#define MAXSTACK 100
#define EMPTYSTACK -1
int top = EMPTYSTACK;
//char items[MAXSTACK];
char * items;
//char * counter = items;

char peek () {
	return *items;
	}

void push (char c) {
	(*items++) = c;
	}

char pop () {
	return *items--;
	}

int full () {
	return top + 1 == MAXSTACK;
	}

int empty () {
	return top == EMPTYSTACK;
	}
#endif
