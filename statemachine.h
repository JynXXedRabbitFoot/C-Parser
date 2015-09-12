#ifndef STATE_H
#define STATE_H

/* define my state constants */
/* to represent states as a single byte, we use count in hex */
#define STATE0 '0'
#define STATE1 '1'
#define STATE2 '2'
#define STATE3 '3'
#define STATE4 '4'
#define STATE5 '5'
#define STATE6 '6'
#define STATE7 '7'
#define STATE8 '8'
#define STATE9 '9'
#define STATEA 'a'  /* hex 10 */
#define STATEB 'b'  /* hex 11 */

/* define the terminals for our state machine */
#define ID 'i'
#define PLUS '+'
#define MULT '*'
#define LEFT '('
#define RIGHT ')'
#define DOLLAR '$'
/* note, we don't need to define E, T, F */


/* define my state machine */
void processEvent(char event);

/* define my states */
/* note they all have the same signature...
 * like an interface in java.
 */
extern int state0(char event);
extern int state1(char event);
extern int state2(char event);
extern int state3(char event);
extern int state4(char event);
extern int state5(char event);
extern int state6(char event);
extern int state7(char event);
extern int state8(char event);
extern int state9(char event);
extern int state10(char event);
extern int state11(char event);

#endif
