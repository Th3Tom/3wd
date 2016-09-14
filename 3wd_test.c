/*
 * _3wd_test.c
 *
 * Created: 14.04.2016 14:23:05
 *  Author: Tom_
 */ 


#include <avr/io.h>
#include <avr/interrupt.h>
#include "robo.h"

int main(void)
{
	robo_init(39999);
	
	//robo_drive( 65535, 65535, 65535);
	robo_drive( 39999, 39999, 39999);
	//robo_drive( 0, 0, 0);
	///*
	robo_direction(0, 0, 0);
	robo_direction_2(1, 1, 1);
	//*/

	/*
	//not working
	robo_direction(1, 1, 1);
	robo_direction_2(0, 0, 0);
	//*/

	//dir 1
	/*
	PORT_DIRECTION |= (1 << DIRECTION_1);
	PORT_DIR_1_2 &= ~(1 << PIN_DIR_1_2);
	//*/

	/*
	PORT_DIRECTION |= (1 << DIRECTION_2);
	PORT_DIR_2_2 &= ~(1 << PIN_DIR_2_2);
	//*/

	/*
	PORT_DIRECTION |= (1 << DIRECTION_3);
	PORT_DIR_3_2 &= ~(1 << PIN_DIR_3_2);
	//*/

	//dir 0
	/*
	PORT_DIRECTION &= ~(1 << DIRECTION_1);
	PORT_DIR_1_2 |= (1 << PIN_DIR_1_2);
	//*/

	/*
	PORT_DIRECTION &= ~(1 << DIRECTION_2);
	PORT_DIR_2_2 |= (1 << PIN_DIR_2_2);
	//*/

	/*
	PORT_DIRECTION &= ~(1 << DIRECTION_3);
	PORT_DIR_3_2 |= (1 << PIN_DIR_3_2);
	//*/


	/*
	robo_wheel_1(100, 1);
	robo_wheel_2(50, 0);
	robo_wheel_3(50, 1);
	//*/
	
    while(1);
}