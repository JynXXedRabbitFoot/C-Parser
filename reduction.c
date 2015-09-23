//Dan Kruse
//Perform Stack Reductions
#include "stack.h"
#include "statemachine.h"

//Reduce "E + T" to "E"
char reduction1 () {
	pop ();//pop state
	// Verify next stack terminal "T"
	if(peek () != 'T') {
		return '1';
		}
	else {
		pop (); //pop terminal
		}
	pop ();	//pop state
	// Verify next stack terminal "+"
	if(peek () != PLUS) {
		return '1';
		}
	else {
		pop ();//pop terminal
		}
	pop ();	//pop state
	// Verify next stack terminal "E"	
	if(peek () != 'E') {
		return '1';
		}
	else {
		pop ();//pop terminal
		}
	return 'E';
	}


//Reduce "T" to "E"
char reduction2 () {
	pop ();//pop state
	// Verify next stack terminal "T"	
	if(peek () != 'T') {
		return '1';
		}
	else {
		pop ();
		}
	return 'E';
	}


//Reduce "T * F" to "T"
char reduction3 () {
	pop ();//pop state
	// Verify next stack terminal "T"	
	if(peek () != 'F') {
		return '1';
		}
	else {
		pop ();
		}
	pop ();//pop state
	// Verify next stack terminal "*"
	if(peek () != MULT) {
		return '1';
		}
	else {
		pop ();
		}
	pop ();//pop state
	// Verify next stack terminal "F"
	if(peek () != 'T') {
		return '1';
		}
	else {
		pop ();
		}
	return 'T';
	}


//Reduce "F" to "T"
char reduction4 () {
	pop ();//pop state
	// Verify next stack terminal "F"
	if(peek () != 'F') {
		return '1';
		}
	else {
		pop ();
		}
	return 'T';
	}


//Reduce "( E )" to "F"
char reduction5 () {
	pop ();//pop state
	// Verify next stack terminal ")"
	if(peek () != RIGHT) {
		return '1';
		}
	else {
		pop ();
		}
	pop ();//pop state
	// Verify next stack terminal "E"
	if(peek () != 'E') {
		return '1';
		}
	else {
		pop ();
		}
	pop ();//pop state
	// Verify next stack terminal "("
	if(peek () != LEFT) {
		return '1';
		}
	else {
		pop ();
		}
	return 'F';
	}


//Reduce "id (A)" to "F"
char reduction6 () {
	pop ();//pop state
	//Verify next stack terminal
	if(peek () != 'A') {
		return '1';
		}
	else {
		pop ();
		}
	return 'F';
	}
