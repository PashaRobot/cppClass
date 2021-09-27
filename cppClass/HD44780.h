/* 
* HD44780.h
*
* Created: 27.09.2021 18:11:19
* Author: Pavel Bezdelev
*/


#ifndef __HD44780_H__
#define __HD44780_H__


#include <avr/io.h>

#define F_CPU 2000000UL

#include <util/delay.h>

#define HD44780_Set_SGRAM_ADDRESS_gc			0b01000000

#define HD44780_Set_DDRAM_ADDRESS_gc			0b10000000

#define HD44780_Function_Set_8bit_1line_5x8_gc  0b00110000
#define HD44780_Function_Set_8bit_2line_5x8_gc  0b00111000
#define HD44780_Function_Set_8bit_2line_5x11_gc 0b00111100
#define HD44780_Function_Set_8bit_1line_5x11_gc 0b00110100
#define HD44780_Function_Set_4bit_1line_5x8_gc  0b00100000
#define HD44780_Function_Set_4bit_2line_5x8_gc  0b00101000
#define HD44780_Function_Set_4bit_2line_5x11_gc 0b00101100
#define HD44780_Function_Set_4bit_1line_5x11_gc 0b00100100

#define HD44780_Shift_Control_Cursor_Right_gc	0b00011100
#define HD44780_Shift_Control_Cursor_Left_gc	0b00011000
#define HD44780_Shift_Control_Display_Right_gc	0b00011100
#define HD44780_Shift_Control_Display_Left_gc	0b00011000

#define HD44780_Display_Control_OFF_OFF_OFF_gc	0b00001000
#define HD44780_Display_Control_ON_OFF_OFF_gc	0b00001100
#define HD44780_Display_Control_ON_OFF_ON_gc	0b00001101
#define HD44780_Display_Control_ON_ON_OFF_gc	0b00001110
#define HD44780_Display_Control_ON_ON_ON_gc		0b00001111

#define HD44780_Entry_Mode_Set_OFF_OFF_gc		0b00000100
#define HD44780_Entry_Mode_Set_OFF_ON_gc		0b00000101
#define HD44780_Entry_Mode_Set_ON_OFF_gc		0b00000110
#define HD44780_Entry_Mode_Set_ON_ON_gc			0b00000111
#define HD44780_16x2							0b10000010


#define HD44780_Return_Home_gc					0b00000010

#define HD44780_Clear_Display_gc				0b00000001

class HD44780
{
//variables
public:
protected:
private:

//functions
public:
	HD44780();
//	~HD44780();
	
	void	Send_Data(uint8_t);
	void	Send_Cmd(uint8_t);
	void	String(uint8_t*);

protected:
	void _PORTA_OUT_(uint8_t);
private:

//	HD44780( const HD44780 &c );
//	HD44780& operator=( const HD44780 &c );

}; //HD44780

#endif //__HD44780_H__
