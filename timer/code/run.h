#include "arduino.h"

void setup(){
	
} 

int adc1 = 0;
void loop(){ //û����ʱ����һֱ��
	//printf("test\r\n");
	led_toggle();
	delay(500);
}

void timer_loop(){ //1ms����
	adc1 = analogRead();
	
	analogWrite(1, 100);
	analogWrite(2, 300);
	analogWrite(3, 500);
	analogWrite(4, 700);
}