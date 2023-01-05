/*
 * button.c
 *
 * Created: 12/22/2022 2:44:38 PM
 *  Author: Menna_Manaa
 */ 
#include "button.h"

//initialize
void BUTTON_init(uint8_t buttonPort,uint8_t buttonPin){
	DIO_init(buttonPort,buttonPin,IN);
}

// button read
void BUTTON_read(uint8_t buttonPort,uint8_t buttonPin,uint8_t *value){
	DIO_read(buttonPort,buttonPin,value);
}