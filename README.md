# Real Time Embedded Systems
### Programming Assignment 1 - Introduction

<br />

The purpose of this assignment is to get you comfortable with the development environment as well as the basics of microcontroller programming and debugging. 

All questions should be answered by modifying the main.c file; Add comments and code to the file where required and rename your main.c file as Assignment1_ident.c  before submitting on NYU classes.

The assignment will be graded according to the following:

| Part        | Grade       |
| ------------| ----------- |
| 1a          | 50%         |
| 1b          | 10%         |
| 1c          | 10%         |
| 2           | 10%         |
| Extension   | 20%         |

<br />

---

<br />


**FAQ**

**My code gets stuck at:**   `serial = new USBSerial()`

You have to plug in a second usb cable to use the USBSerial interface. See these [Instructions](tutorials/USBSerial.md).


<br />


**My code no longer appears to run when connected to an external power source?**

This is caused by a firmware bug in the st-link controller on the board. Follow these [Instructions on Updating the Firmware](tutorials/firmware.md) on your board.

<br />

**I'm not seeing any data from printf()?**

Make sure to follow all the instructions [here](tutorials/firmware.md).

<br />

**I have another question/issue?**

Contact a the professor or a TA, one place to start: mjt9978@nyu.edu
