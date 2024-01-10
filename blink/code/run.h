#include "include.h"

void setup(){
	
}

void loop(){
	printf("test\r\n");
	HAL_GPIO_TogglePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin);
	HAL_Delay(500);
}