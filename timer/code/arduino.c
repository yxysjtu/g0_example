#include "arduino.h"

void led_on(){
    HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
}
void led_off(){
    HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_RESET);
}
void led_toggle(){
    HAL_GPIO_TogglePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin);
}

void delay(uint32_t ms){
	HAL_Delay(500);
}

uint16_t analogRead(){
    return ADC_single(0);
}

void analogWrite(uint8_t channel, uint32_t duty){//channel:1-4, duty:0-999
    if(duty > 999) duty = 999;

    switch (channel)
    {
    case 1: TIM2->CCR1 = duty;break;
    case 2: TIM2->CCR2 = duty;break;
    case 3: TIM2->CCR3 = duty;break;
    case 4: TIM2->CCR4 = duty;break;
    default:
        break;
    }
} 