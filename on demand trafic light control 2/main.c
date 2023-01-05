/*
 * on demand traffic light control 2.c
 *
 * Created: 12/21/2022 7:47:49 AM
 * Author : 20122
 */ 

#include "Application/application.h"


int main(void)
{
	//Initialization
	APP_init();
	
	//Main loop
	while(1){
		APP_start();
	}
}



//testing main function
//int main(void){
//BUTTON_init(BUTTON_1_PORT,BUTTON_1_PIN);
//LED_init(LED_CAR_PORT,LED_CAR_G_PIN);
//LED_init(LED_PED_PORT,LED_PED_G_PIN);
//TIMER_init();
//uint8_t value;
//while(1){
//BUTTON_read(BUTTON_1_PORT,BUTTON_1_PIN,&value);
//if(value==HIGH){
//LED_toggle(LED_CAR_PORT,LED_CAR_G_PIN);
//LED_on(LED_PED_PORT,LED_PED_G_PIN);
//TIMER_delay(500);
//LED_off(LED_PED_PORT,LED_PED_G_PIN);
//TIMER_delay(500);
//
//}else{
//LED_on(LED_CAR_PORT,LED_CAR_G_PIN);
//}
//
//}
//}
