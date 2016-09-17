/*
 * general.h
 *
 * Created: 17.09.2016 17:41:33
 *  Author: Thomas
 */ 


#ifndef GENERAL_H_
#define GENERAL_H_

//Direction 1 | 1,2,3
#define DDR_DIR_1_1		DDRB
#define DDR_DIR_1_2		DDRB
#define DDR_DIR_1_3		DDRB

#define PORT_DIR_1_1	PORTB
#define PORT_DIR_1_2	PORTB
#define PORT_DIR_1_3	PORTB

#define PIN_DIR_1_1		PIN4
#define PIN_DIR_1_2		PIN5
#define PIN_DIR_1_3		PIN6

//Direction 2 | 1,2,3
#define DDR_DIR_2_1		DDRE
#define DDR_DIR_2_2		DDRG
#define DDR_DIR_2_3		DDRE

#define PORT_DIR_2_1	PORTE
#define PORT_DIR_2_2	PORTG
#define PORT_DIR_2_3	PORTE

#define PIN_DIR_2_1		PIN5
#define PIN_DIR_2_2		PIN5
#define PIN_DIR_2_3		PIN3

/*
#define PORT_DIRECTION	PORTB
#define DIRECTION_1	PIN4
#define DIRECTION_2	PIN5
#define DIRECTION_3	PIN6
//*/

//Enable 1,2,3
#define DDR_ENABLE_1	DDRH
#define DDR_ENABLE_2	DDRH
#define DDR_ENABLE_3	DDRH

#define PORT_ENABLE_1	PORTH
#define PORT_ENABLE_2	PORTH
#define PORT_ENABLE_3	PORTH

#define PIN_ENABLE_1	PIN3
#define PIN_ENABLE_2	PIN4
#define PIN_ENABLE_3	PIN5

/*
#define ENABLE_1	PIN3
#define ENABLE_2	PIN4
#define ENABLE_3	PIN5
//*/

#endif /* GENERAL_H_ */