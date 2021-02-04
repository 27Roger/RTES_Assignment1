/*
* Project:    Assignment1
* File:       main.c
* Author(s):  Michael Thoreau, Chris Piekarski
*/

#include <mbed.h>
#include <string.h>


/* 	Include for printing via the micro USB port
*	This requires you have the latest st-link driver:
*   https://www.st.com/en/development-tools/stsw-link009.html
*	See a TA for help if you cannot print via this method - and remove the following lines
*/
#include <USBSerial.h>

// Important!  -  comment out this line if the debugger gets stuck here
USBSerial serial;



// Function Prototypes
void part1();
void part1b();
void part1c();
void part2();
void extension();


// Define LEDs
DigitalOut led1(LED1);
DigitalOut led2(LED2);



// Variables Used for Part 2/Extension
uint8_t secretString[16] = {0x21, 0x53, 0x45, 0x54, 0x52, 0x20, 0x6F, 0x74, 0x20, 0x65, 0x6D, 0x6F, 0x63, 0x6C, 0x65, 0x57};
uint8_t decodedString[16];



int main() {

	// part 1  - blinky
	part1();

	// part 1b - blinky 2
	part1b();

	// part 1c - printing over serial
	part1c();
	
	// part 2  - debugging
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


/* Here we want to go through some basic printing to terminal.
*  See the top of the file if you have issues printing over USBSerial
*  Write a line to print in hex the literal below
*  Try a few more here, what else can you print?
*/
void part1c() {
	uint8_t anInt = 33;
	float aFloat = 33.033;

	// hello world
	serial.printf("Hello World!\n\r");
	
	// print an integer - with a few format options
	serial.printf("An integer: %d\n\r", anInt);
	serial.printf("An integer: %03d\n\r", anInt);
	serial.printf("An integer: %07d\n\r", anInt);

	// print a float - different levels of precision
	serial.printf("An integer: %f\n\r", aFloat);
	serial.printf("An integer: %.2f\n\r", aFloat);
	serial.printf("An integer: %05.5f\n\r", aFloat);

	// see more formatting here:
	// https://alvinalexander.com/programming/printf-format-cheat-sheet/


	// your task - print me!
	uint16_t hexLiteral = 0x1234;

}


/*
*	Part 2 - Use the debugger for this next part of the assignment.
*	From the variables window, write down the contents of 'secretString'
*	as it is decoded by the function below. Set an appropriate breakpoint
*	and utilize 'Step Into' to monitor the changing local variables.
* 	Write a comment to show that you decoded the string!
*/
void part2() {
	uint8_t i;

	//decode the string
	for(i = 0; i < 16; i++){
		decodedString[i] = secretString[15-i];
	}

	// erase the decoded string
	for(i = 0; i < 16; i++){
		decodedString[i] = 0x00;
	}
}

/*
*	Extension - Decoding the message and printing to terminal.
*
*	You are an agent working for the CIA and have intercepted a message from a person of interest.
*	{0x49,0x20,0x6C,0x6F,0x76,0xFF,0x20,0x70,0xEE,0x7A,0x7A,0xFE,0x2E}
*
*	But there is an issue, the message was compromised during transmission. Your task below is to
*	write a function that prints out the full message to the terminal.
*	After seeing the message printed, give your best guess to what the message says and write your answer
*	below in decoded_message and print this result as well.
*
*	See http://www.asciitable.com/ and https://www.cplusplus.com/reference/cstdio/printf/ for details on converting ASCII to hex.
*	
*/
uint8_t message[13] = {0x49,0x20,0x6C,0x6F,0x76,0xFF,0x20,0x70,0xEE,0x7A,0x7A,0xFE,0x2E};
uint8_t decoded_message[13] = {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};

void extension () {

}