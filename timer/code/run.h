#include "arduino.h"

void setup(){
	
} 

int adc1 = 0;
void loop(){ //没有延时，会一直跑
	//printf("test\r\n");
	led_toggle();
	delay(500);
}

uint32_t pwm1 = 0;

void timer_loop(){ //1ms周期
	adc1 = analogRead();
	
	//小车该怎么跑
	analogWrite(1, pwm1);
	analogWrite(2, 300);
	analogWrite(3, 500);
	analogWrite(4, 700);
}