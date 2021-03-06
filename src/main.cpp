/*
* Project:    Assignment2
* File:       main.c
* Author(s):  Michael Thoreau, Chris Piekarski
*/

#include <mbed.h>


// Function Prototypes
void part1();


// Define LEDs
DigitalOut led1(LED1);
DigitalOut led2(LED2);

// Extern functions
extern "C" int asm_hw(int a, int b);

/* main function for Assignment 2 - comment out parts you aren't currently working on */
int main() {

	while (1) {
		

		wait_ms(100);
	}

}


/*
*	Part 1 - objective: Upload basic code to the board,
*	blink an LED
*/
void part1() {
// Modify the following function to return the subtraction of two integers.

		int result = asm_hw(1,2);
}


