// This is a slightly contrived example to provide an intro
// to programming for AVR/Arduino-C using an online IDE.
// The comments will note when things are a bit odd for
// this particular use case

#include <stdio.h> // load in some standard helper functions

// Your task (in 4 parts) is to design a function to compute all of
// the multiples of 7, less than 100, starting at 7, in order.
// To make this work with an setup() and loop() function paradigm
// we are going to use a global variable that can be accessed by
// all of the functions;

int our_global_variable; // Task 1: define the type for this whole number
                         //         aka updated the TBD

void setup(){
	// Task 2: set the initial value of our_global_variable
	our_global_variable = 7;
}

int loop(){
	// Task 3: update our_global_variable
	our_global_variable = our_global_variable + 7;
	// Task 4: check if we are done and if so return a 1 else a 0
	if(our_global_variable > 100){
		return 1;
	}
	else{
		return 0;
	}
}

// set up the main function to run like an Arduino
// all of the code below here is done for you
// comments are left to explain what it is doing
// note: main is a convention in C to represent the function
//       you want to be run when the program runs
int main()
{
    setup(); // initialize variables
    while(1){ // run the loop forever
	printf("%d\n",our_global_variable); // print out the value
                                            // this would be a serial command
                                            // on a microcontroller
        int return_value = loop(); // capture the return value
                                   // of a helper function
        if (return_value != 0){break;} // have a way to exit
                                       // this is important or the
                                       // online compiler may crash
                                       // on a microcontroller we will
                                       // omit this and let it run forever
    }
    return 0; // main always returns an integer by convention
}

