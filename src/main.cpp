/*
* Project:    Assignment2
* File:       main.c
* Author(s):  Michael Thoreau, Chris Piekarski
*/

#include <mbed.h>


// Function Prototypes
void part1();
void part2();
void part3();

// Define LEDs
DigitalOut led1(LED1);
DigitalOut led2(LED2);

// Extern functions
extern "C" int asm_hw(int a, int b);
extern "C" int asm_led(int OnOff);

/* main function for Assignment 2 - comment out parts you aren't currently working on */
int main() {

	while (1) {
		
		part1();

		part2();

		part3();

		wait_ms(100);
	}

}


/*	Adding and Subtracting
*	Part 1 - objective: Modify the assembly program asm_hw to 
*	return the subtraction of two integers.
*/
void part1() {

		int result = asm_hw(2,1);
		printf("2 - 1 equals %d",result);

}

/*	Blinking an LED
*	Part 2 - objective: Modify the assembly function asm_led so it will
*	flip an integer between 0 and 1. Use the result to blink an LED.
*/

void part2() {

	}


/*	Assembly LED Error
*	Part 3 - objective: Write a new assembly function asm_error and declare it appropriately in the extern functions list above.
*	You will pass in two integers into the function and add them. If there is an overflow flag, turn on the red LED.
*/

void part3() {

	}

}
