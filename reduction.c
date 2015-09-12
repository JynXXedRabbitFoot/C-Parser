/* stubs file for reductions */
/* replace this with your header */

#include "stack.h"

char grammar1 = 'x';
char stateA = 'x';
char grammar2 = 'x';
char stateB = 'x';
char grammar3 = 'x';
char stateC = 'x';

//Reduce "E + T" to "E"
char reduction1 () {
	//pop state
	stateC = pop ();
	// Verify next stack terminal "T"
	if(peek () != 'T') {
		push (stateC);
		return '0';
		}
	else {
		grammar3 = pop ();
		}
	//pop state
	stateB = pop ();
	// Verify next stack terminal "+"
	if(peek () != '+') {
		push (stateB);
		push (grammar3);
		push (stateC);
		return '0';
		}
	else {
		grammar2 = pop ();
		}
	//pop state
	stateA = pop ();
	// Verify next stack terminal "E"	
	if(peek () != 'E') {
		push (stateA);
		push (grammar2);
		push (stateB);
		push (grammar3);
		push (stateC);
		return '0';
		}
	else {
		pop ();
		}
	push ('E');
	return 'E';
	}

//Reduce "T" to "E"
char reduction2 () {
	//pop state
	stateA = pop ();
	// Verify next stack terminal "T"	
	if(peek () != 'T') {
		push (stateA);
		return '0';
		}
	else {
		pop ();
		}
	push ('E');
	return 'E';
	}

//Reduce "T * F" to "T"
char reduction3 () {
	stateC = pop ();//pop state
	// Verify next stack terminal "T"	
	if(peek () != 'F') {
		push (stateC);
		return '0';
		}
	else {
		grammar3 = pop ();
		}
	stateB = pop ();//pop state
	// Verify next stack terminal "*"
	if(peek () != '*') {
		push (stateB);
		push (grammar3);
		push (stateC);
		return '0';
		}
	else {
		grammar2 = pop ();
		}
	stateA = pop ();//pop state
	// Verify next stack terminal "F"
	if(peek () != 'T') {
		push (stateA);
		push (grammar2);
		push (stateB);
		push (grammar3);
		push (stateC);
		return '0';
		}
	else {
		pop ();
		}
	push ('T');
	return 'T';
	}

//Reduce "F" to "T"
char reduction4 () {
	stateA = pop ();//pop state
	// Verify next stack terminal "F"
	grammar1 = pop ();
	if(grammar1 != 'F') {
		push (grammar1);
		push (stateA);
		return '0';
		}
	push ('T');
	return 'T';
	}

//Reduce "( E )" to "F"
char reduction5 () {
	stateC = pop ();//pop state
	// Verify next stack terminal ")"
	if(peek () != ')') {
		push (stateC);
		return '0';
		}
	else {
		grammar3 = pop ();
		}
	stateB = pop ();//pop state
	// Verify next stack terminal "E"
	if(peek () != 'E') {
		push (stateB);
		push (grammar3);
		push (stateC);
		return '0';
		}
	else {
		grammar2 = pop ();
		}
	stateA = pop ();//pop state
	// Verify next stack terminal "("
	if(peek () != '(') {
		push (stateA);
		push (grammar2);
		push (stateB);
		push (grammar3);
		push (stateC);
		return '0';
		}
	else {
		pop ();
		}
	push ('F');
	return 'F';
	}

//Reduce "id (A)" to "F"
char reduction6 () {
	stateA = pop ();//pop state
	//Verify next stack terminal
	if(pop () != 'A') {
		push (stateA);
		return '0';
		}
	else {
		pop ();
		}
	push ('F');
	return 'F';
	}
