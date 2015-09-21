
/* stack.c: stack implem */
/* source: http://www.cs.utsa.edu/~wagner/CS2213/stack/stack.html */

#include "stack.h"
#include<malloc.h>
#ifndef STACK_H 
#define STACK_H

#define EMPTYSTACK -1;
#define MAXSTACK  100;
char *items;
int charInit = 0;

char peek () {
	return *items;
	}

void push (char c) {
	if(charInit == 0) {
		items = malloc (sizeof (char) * 100);
		charInit = 1;
		}
	items++;
	*items = c;
	}

char pop () {
	items--;
	return *items;
	}

int full () {
	return 0;
	}

int empty () {
	return 0;
	}
#endif
