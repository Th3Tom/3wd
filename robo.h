/*
 * servo.h
 *
 * Created: 24.09.2015 14:26:09
 *  Author: Patrick
 */ 

//File name: servo.h
//Author: Schabhüttl Patrick
//Date of last Change: 1.10.2015
//Description: Define constants and pins for the main program and also the function prototypes are included 

#ifndef SERVO_H_
#define SERVO_H_

//Functions to control the roboter

/************************************************************************/
/*		robo_init                                                       */
/*																		*/
/*Function:																*/
/*		initialies Timer for the Robot									*/
/*																		*/
/*Pre Conditions:														*/
/*		None															*/
/*																		*/
/*Paramete:																*/
/*		TOP_value: Top Value for the PWM-Signal							*/
/*																		*/
/*Return																*/
/*		None															*/
/************************************************************************/
void robo_init (uint16_t TOP_value);

/************************************************************************/
/*		robo_drive                                                      */
/*																		*/
/*Function:																*/
/*		give all three wheels an OCR-Value to controll the speed of		*/
/*		the wheels														*/
/*																		*/
/*Pre Conditions:														*/
/*		robo_init														*/
/*																		*/
/*Paramete:																*/
/*		servo_1: OCR-Value for Servo 1									*/
/*		servo_2: OCR-Value for Servo 2									*/
/*		servo_3: OCR-Value for Servo 3									*/
/*																		*/
/*Return																*/
/*		None															*/
/************************************************************************/
void robo_drive (uint16_t servo_1, uint16_t servo_2, uint16_t servo_3);


void robo_direction_1(uint8_t dir_1, uint8_t dir_2, uint8_t dir_3);

void robo_direction_2(uint8_t dir_1, uint8_t dir_2, uint8_t dir_3);


void robo_wheel_1(uint16_t speed, uint8_t dir1, uint8_t dir2);

void robo_wheel_2(uint16_t speed, uint8_t dir1, uint8_t dir2);

void robo_wheel_3(uint16_t speed, uint8_t dir1, uint8_t dir2);

#endif /* SERVO_H_ */