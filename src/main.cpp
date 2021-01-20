/*
* Project:    Assignment1
* File:       main.c
* Author(s):  Michael Thoreau, Chris Piekarski
*/

#include <mbed.h>

void part1();
void part1b();
void part2();
void extension();

// define LEDs
DigitalOut led1(LED1);
DigitalOut led2(LED1);

int main() {

	// part 1 of the assignment
	part1();

	// part 1 of the assignment
	part1b();

	// part 2 of the assignment
	part2();

	// extension component
	extension();



	while(1) {
		wait_ms(100);
	}

}

/*
*	Part 1 - objective: Upload basic code to the board,
*	blink an LED
*/
void part1() {
	uint8_t i;
	uint8_t ledVar = 0;

	// blink 20 times
	for(i = 0; i < 40; i++) {
		
		// toggle variable
		ledVar = ~ledVar;

		// write to the LED
		led1.write(ledVar);

		// this line is equivalent to the line above
		led1 = ledVar;

		// wait for 500 ms
		wait_ms(500);
	}
}


/*
*	Part 1b - objective: Fix the errors in code below to blink led2 
*	describe each problem in a separate comment
*/
void part1b() {
	uint8_t* i;

	for(i == (uint8_t*)3000; i >= 0; ++i) {
		
		// toggle LED
		led2 = ~led2;

		wait_us(0.5);
	}
}

void part2() {

}


void extension () {

}