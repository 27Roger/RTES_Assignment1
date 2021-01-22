/*
* Project:    Assignment1
* File:       main.c
* Author(s):  Michael Thoreau, Chris Piekarski
*/

#include <mbed.h>
#include <string.h>

void part1();
void part1b();
void part2();
void extension();

// define LEDs
DigitalOut led1(LED1);
DigitalOut led2(LED1);

string test = "";

// Variables Used for Part 2/Extension
char secretString[16] = {0x57,0x65,0x6C,0x63,0x6F,0x6D,0x65,0x20,0x74,0x6F,0x20,0x52,0x54,0x45,0x53,0x21};


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

/*
*	Part 2 - Use the debugger for this next part of the assignment.
*	In the variables window, write down the contents of 'secretString'
*	as processed by the function below. Set an appropriate breakpoint
*	and utilize 'Step Into' to monitor the changing local variables.
*/
void part2() {
  uint8_t i;

  for(i = 0; i < 16; ++i){
    test = secretString[i];
  }

}


void extension () {

}