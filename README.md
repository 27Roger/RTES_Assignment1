# Real Time Embedded Systems
### Programming Assignment 2 - Assembly

<br />

The purpose of this assignment is to take a deep dive into how abstract code we write is interpreted by the compiler. You will get hands on with writing regular programming and interfacing it directly into the assembly language. 

All questions should be answered by modifying the main.c file; Add comments and code to the file where required and rename your main.c file as Assignment1_ident.c  before submitting on NYU classes.

The assignment will be graded according to the following:

| Part        | Grade       |
| ------------| ----------- |
| 1           | 50%         |
| x           | 10%         |
| x           | 10%         |
| x           | 10%         |
| x           | 20%         |


### Instructions

Create a new project in platformIO as demonstrated in class. Copy the code from main.c in this repository to your main.c file and modify to complete each part.


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

Make sure to follow all the instructions [here](tutorials/USBSerial.md).

<br />

**I have another question/issue?**

Contact a the professor or a TA, one place to start: mjt9978@nyu.edu
