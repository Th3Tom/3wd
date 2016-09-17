/*
 * _3wd_test.c
 *
 * Created: 14.04.2016 14:23:05
 *  Author: Tom_
 */ 


#include <avr/io.h>
#include <avr/interrupt.h>
#include "robo.h"
#include "uart0.h"

int main(void)
{
	uint16_t speed = 0;

	uart0_init(9600, 1, 1);
	robo_init(59999);
	//robo_init(39999);
	
	//robo_drive( 65535, 65535, 65535);
	//robo_drive( 59999, 59999, 59999);
	//robo_drive( 39999, 39999, 39999);
	robo_drive( 0, 0, 0);

	robo_direction_1(0, 0, 0);
	robo_direction_2(1, 1, 1);

	
    while(1){
		robo_wheel_1(speed, 0, 1);
		uart0_putIntAsDigits(speed);
		uart0_newLine();

		switch(uart0_getc()){
		//+-1
			case '4':
				speed += 1;
				break;
			case '1':
				speed -= 1;
				break;
		//+-10
			case '5':
				speed += 10;
				break;
			case '2':
				speed -= 10;
				break;
		//+-100
			case '6':
				speed += 100;
				break;
			case '3':
				speed -= 100;
				break;
		//+-1000
			case '8':
				speed += 1000;
				break;
			case '9':
				speed -= 1000;
				break;
		}
	}
}