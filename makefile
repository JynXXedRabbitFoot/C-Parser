
statemachine: mainprogram.o stack.o state1.o state2.o state3.o \
	 state4.o state5.o state6.o state7.o state8.o state9.o \
	state0.o state10.o state11.o statemachine.o reduction.o 
	cc -o statemachine mainprogram.o stack.o state1.o state2.o \
	state0.o state3.o state4.o state5.o state6.o state7.o \
	state8.o state9.o state10.o state11.o statemachine.o reduction.o

mainprogram.o: mainprogram.c stack.c state1.c state2.c \
	state3.c state4.c state5.c state6.c state7.c state8.c \
	state9.c state10.c state11.c statemachine.c
	cc -c mainprogram.c
stack.o: stack.c
	cc -c stack.c

reduction.o: reduction.c
	cc -c reduction.c

state1.o: state1.c
	cc -c state1.c
state2.o: state2.c	
	cc -c state2.c
state3.o: state3.c	
	cc -c state3.c
state4.o: state4.c	
	cc -c state4.c
state5.o: state5.c	
	cc -c state5.c
state6.o: state6.c	
	cc -c state6.c
state7.o: state7.c	
	cc -c state7.c
state8.o: state8.c	
	cc -c state8.c
state9.o: state9.c	
	cc -c state9.c
state10.o: state10.c	
	cc -c state10.c
state11.o: state11.c	
	cc -c state11.c



statemachine.o: statemachine.c
	cc -c statemachine.c

clean: 
	rm *.o

