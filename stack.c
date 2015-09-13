
/* stack.c: stack implem */
/* source: http://www.cs.utsa.edu/~wagner/CS2213/stack/stack.html */

#include "stack.h"
#include<malloc.h>
#ifndef STACK_H 
#define STACK_H

#define EMPTYSTACK -1;
#define MAXSTACK  100;
//int top = EMPTYSTACK;
//char items[MAXSTACK];
char *items;
int charInit = 0;
//items = malloc (sizeof (char) * 100);
//char * counter = items;

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
	//top + 1 == MAXSTACK;
	}

int empty () {
	return 0;
	//top == EMPTYSTACK;
	}
#endif
