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

//define Pins for direction
#define PORT_DIRECTION	PORTB

/*
#define PORT_DIR_1_2	PORTF
#define PORT_DIR_2_2	PORTF
#define PORT_DIR_3_2	PORTF

#define PIN_DIR_1_2		PIN0
#define PIN_DIR_2_2		PIN1
#define PIN_DIR_3_2		PIN2
//*/

///*
#define PORT_DIR_1_2	PORTE
#define PORT_DIR_2_2	PORTG
#define PORT_DIR_3_2	PORTE

#define PIN_DIR_1_2		PIN5
#define PIN_DIR_2_2		PIN5
#define PIN_DIR_3_2		PIN3
//*/

#define DIRECTION_1	PIN4
#define DIRECTION_2	PIN5
#define DIRECTION_3	PIN6

//define Pins for enable
#define ENABLE_1	PIN3
#define ENABLE_2	PIN4
#define ENABLE_3	PIN5

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

/************************************************************************/
/*		robo_direction                                                  */
/*																		*/
/*Function:																*/
/*		give all three wheels a direction								*/
/*																		*/
/*Pre Conditions:														*/
/*		robo_init														*/
/*																		*/
/*Paramete:																*/
/*		dir_1: Direction of the Servo 1									*/
/*		dir_2: Direction of the Servo 2									*/
/*		dir_3: Direction of the Servo 3									*/
/*																		*/
/*Return																*/
/*		None															*/
/************************************************************************/
void robo_direction(uint8_t dir_1, uint8_t dir_2, uint8_t dir_3);


/************************************************************************/
/*		robo_wheel_1	                                                */
/*																		*/
/*Function:																*/
/*		function to controll entirely wheel 1 (servo 1)					*/
/*																		*/
/*Pre Conditions:														*/
/*		robo_init														*/
/*																		*/
/*Paramete:																*/
/*		speed: Speed of the Servo in percent (0 - 100)					*/
/*		dir: Direction of the Servo										*/
/*																		*/
/*Return																*/
/*		None															*/
/************************************************************************/
void robo_wheel_1(uint8_t speed, uint8_t dir);

/************************************************************************/
/*		robo_wheel_2	                                                */
/*																		*/
/*Function:																*/
/*		function to controll entirely wheel 2 (servo 2)					*/
/*																		*/
/*Pre Conditions:														*/
/*		robo_init														*/
/*																		*/
/*Paramete:																*/
/*		speed: Speed of the Servo in percent (0 - 100)					*/
/*		dir: Direction of the Servo										*/
/*																		*/
/*Return																*/
/*		None															*/
/************************************************************************/
void robo_wheel_2(uint8_t speed, uint8_t dir);

/************************************************************************/
/*		robo_wheel_3	                                                */
/*																		*/
/*Function:																*/
/*		function to controll entirely wheel 3 (servo 3)					*/
/*																		*/
/*Pre Conditions:														*/
/*		robo_init														*/
/*																		*/
/*Paramete:																*/
/*		speed: Speed of the Servo in percent (0 - 100)					*/
/*		dir: Direction of the Servo										*/
/*																		*/
/*Return																*/
/*		None															*/
/************************************************************************/
void robo_wheel_3(uint8_t speed, uint8_t dir);

void robo_direction_2(uint8_t dir_1, uint8_t dir_2, uint8_t dir_3);

#endif /* SERVO_H_ */