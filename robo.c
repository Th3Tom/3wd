/*
 * servo.c
 *
 * Created: 24.09.2015 14:24:14
 *  Author: Patrick
 */ 

//File name: servo.c
//Author: Schabhüttl Patrick
//Date of last Change: 1.10.2015
//Description: Functions too control the roboter and to configure the timer

#include <avr/io.h>
#include <avr/interrupt.h>
#include "robo.h"
#include "general.h"

void robo_init (uint16_t TOP_value)	
{
	DDR_ENABLE_1 |= (1 << PIN_ENABLE_1);
	DDR_ENABLE_2 |= (1 << PIN_ENABLE_2);
	DDR_ENABLE_3 |= (1 << PIN_ENABLE_3);

	/*
	DDRH |= ((1<<ENABLE_3) | (1<<ENABLE_2) | (1<<ENABLE_1)); //PWM output on servo
	//*/

	DDR_DIR_1_1 |= (1 << PIN_DIR_1_1);
	DDR_DIR_1_2 |= (1 << PIN_DIR_1_2);
	DDR_DIR_1_3 |= (1 << PIN_DIR_1_3);
	DDR_DIR_2_1 |= (1 << PIN_DIR_2_1);
	DDR_DIR_2_2 |= (1 << PIN_DIR_2_2);
	DDR_DIR_2_3 |= (1 << PIN_DIR_2_3);

	/*
	DDRB |= ((1 << DIRECTION_1) | (1 << DIRECTION_2) | (1 << DIRECTION_3));
	DDRE |= ((1 << PIN_DIR_1_2) | (1 << PIN_DIR_3_2));
	DDRG |= (1 << PIN_DIR_2_2);
	//*/

	//set timer 4 to fast-pwm-mode with ICR as TOP register
	TCCR4B |= ((1<<WGM43) | (1<<WGM42));
	TCCR4A |= (1<<WGM41);
	
	TCCR4A |= (1<<COM4A1); //set at BOTTOM, clear at compare match
	TCCR4A |= (1<<COM4B1);
	TCCR4A |= (1<<COM4C1);
	
	ICR4 = TOP_value; //set TOP-value: 20ms //39999
	
	//prescaler = 8, timer 4 started
	TCCR4B |= (1<<CS41);  
}

void robo_drive (uint16_t servo_1, uint16_t servo_2, uint16_t servo_3)
{
	OCR4A = servo_1;
	OCR4B = servo_2;
	OCR4C = servo_3;
}

void robo_direction_1(uint8_t dir_1, uint8_t dir_2, uint8_t dir_3)
{
	if(dir_1 == 1)
		PORT_DIR_1_1 |=  (1 << PIN_DIR_1_1);
	else
		PORT_DIR_1_1 &= ~(1 << PIN_DIR_1_1);
	
	if(dir_2 == 1)
		PORT_DIR_1_2 |=  (1 << PIN_DIR_1_2);
	else
		PORT_DIR_1_2 &= ~(1 << PIN_DIR_1_2);
	
	if(dir_3 == 1)
		PORT_DIR_1_3 |=  (1 << PIN_DIR_1_3);
	else
		PORT_DIR_1_3 &= ~(1 << PIN_DIR_1_3);
}

void robo_direction_2(uint8_t dir_1, uint8_t dir_2, uint8_t dir_3)
{
	if(dir_1 == 1)
		PORT_DIR_2_1 |=  (1 << PIN_DIR_2_1);
	else
		PORT_DIR_2_1 &= ~(1 << PIN_DIR_2_1);
	
	if(dir_2 == 1)
		PORT_DIR_2_2 |=  (1 << PIN_DIR_2_2);
	else
		PORT_DIR_2_2 &= ~(1 << PIN_DIR_2_2);
	
	if(dir_3 == 1)
		PORT_DIR_2_3 |=  (1 << PIN_DIR_2_3);
	else
		PORT_DIR_2_3 &= ~(1 << PIN_DIR_2_3);
}

void robo_wheel_1(uint16_t speed, uint8_t dir1, uint8_t dir2)
{
	OCR4A = speed;
			
	if(dir1 == 1)
		PORT_DIR_1_1 |=  (1 << PIN_DIR_1_1);
	else
		PORT_DIR_1_1 &= ~(1 << PIN_DIR_1_1);

	if(dir2 == 1)
		PORT_DIR_2_1 |=  (1 << PIN_DIR_2_1);
	else
		PORT_DIR_2_1 &= ~(1 << PIN_DIR_2_1);
}

void robo_wheel_2(uint16_t speed, uint8_t dir1, uint8_t dir2)
{
	OCR4B = speed;
	
	if(dir1 == 1)
		PORT_DIR_1_2 |=  (1 << PIN_DIR_1_2);
	else
		PORT_DIR_1_2 &= ~(1 << PIN_DIR_1_2);

	if(dir2 == 1)
		PORT_DIR_2_2 |=  (1 << PIN_DIR_2_2);
	else
		PORT_DIR_2_2 &= ~(1 << PIN_DIR_2_2);
}

void robo_wheel_3(uint16_t speed, uint8_t dir1, uint8_t dir2)
{
	OCR4C = speed;
	
	if(dir2 == 1)
		PORT_DIR_1_3 |=  (1 << PIN_DIR_1_3);
	else
		PORT_DIR_1_3 &= ~(1 << PIN_DIR_1_3);

	if(dir2 == 1)
		PORT_DIR_2_3 |=  (1 << PIN_DIR_2_3);
	else
		PORT_DIR_2_3 &= ~(1 << PIN_DIR_2_3);
}

