/*
* Project:    Assignment1
* File:       main.c
* Author(s):  Michael Thoreau, Chris Piekarski
*/

#include <mbed.h>

void part1();
void part2();
void extension();

DigitalOut led1(LED1);

int main() {

	// part 1 of the assignment
	part1();

	// part 2 of the assignment
	part2();

	// extension component
	extension();



	while(1) {
		wait_ms(100);
	}

}


void part1() {

}

void part2() {

}


void extension () {

}