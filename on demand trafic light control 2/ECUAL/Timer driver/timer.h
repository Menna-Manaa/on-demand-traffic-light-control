/*
 * timer.h
 *
 * Created: 12/22/2022 3:03:36 PM
 *  Author: Menaa_Manaa
 */ 


#ifndef TIMER_H_
#define TIMER_H_

#include "../../Utilities/registers.h"


void TIMER_init();//initialize Timer0
void TIMER_delay(uint16_t millisec); //delay of specific amount default uses 256 prescalar


#endif /* TIMER_H_ */