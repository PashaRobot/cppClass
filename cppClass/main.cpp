/*
 * cppClass.cpp
 *
 * Created: 27.09.2021 18:10:52
 * Author : Pavel Bezdelev
 */ 

#include <avr/io.h>
#include "HD44780.h"

 uint8_t qwe[] = "qweqweqweqeqeq";

uint8_t*	p_qwe = qwe;


HD44780 display;

int main(void)
{
    /* Replace with your application code */
	display.Send_Data(*qwe);
	display.Send_Data('a');
	display.Send_Data('t');
	display.Send_Data('a');
	//display.Send_Cmd(0x40 | 128); Set_X_Y(x,y)
	display.Send_Data('a');
	display.Send_Data('b');
	display.Send_Data('c');
	PORTA_OUT = *(p_qwe);
    while (1) 
    {
    }
}

