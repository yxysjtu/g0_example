#include "arduino.h"

void setup(){
	
} 

int adc1 = 0;
void loop(){ //没有延时，会一直跑
	//printf("test\r\n");
	led_toggle();
	delay(500);
}

void timer_loop(){ //1ms周期
	adc1 = analogRead();
	
	analogWrite(1, 100);
	analogWrite(2, 300);
	analogWrite(3, 500);
	analogWrite(4, 700);
}