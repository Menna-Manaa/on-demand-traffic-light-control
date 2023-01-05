/*
 * button.h
 *
 * Created: 12/22/2022 2:44:00 PM
 *  Author: Menna_Manaa
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_
#include "../../MCAL/dio.h"

//Button port and pin
#define BUTTON_1_PORT PORT_D
#define BUTTON_1_PIN PIN2


//initialize
void BUTTON_init(uint8_t buttonPort,uint8_t buttonPin);

// button read
void BUTTON_read(uint8_t buttonPort,uint8_t buttonPin,uint8_t *value);



#endif /* BUTTON_H_ */