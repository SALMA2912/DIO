/*
 * registers.h
 *
 *  Created on: Aug 19, 2022
 *      Author: k
 */

#ifndef DIO_REGISTERS_H_
#define DIO_REGISTERS_H_



//Port A

#define input_regA *((volatile u8*)0x39)       //PINA
#define direction_regA *((volatile u8*)0x3A)   //DDRA
#define output_regA *((volatile u8*)0x3B)      //PORTA

//Port B

#define input_regB *((volatile u8*)0x36)      //PINB
#define direction_regB *((volatile u8*)0x37)  //DDRB
#define output_regB *((volatile u8*)0x38)     //PORTB

//Port C

#define input_regC *((volatile u8*)0x33)     //PINC
#define direction_regC *((volatile u8*)0x34)  //DDRC
#define output_regC *((volatile u8*)0x35)    //PORTC

//Port D

#define input_regD *((volatile u8*)0x30)   //PIND
#define direction_regD *((volatile u8*)0x31)  //DDRD
#define output_regD *((volatile u8*)0x32)    //PORTD


#endif /* DIO_REGISTERS_H_ */
