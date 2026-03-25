#include "stm32f4xx.h"
#include "systick.h"

int main(void){

// CMSIS

// Turn ON LED on USER BUTTON
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN;

	GPIOA->MODER &= ~(3U << (2*5));  // LED  OUTPUT MODE PIN 5
	GPIOA->MODER |= (1U << (2*5));

	GPIOC->MODER &= ~(3U << (2*13)); // USER BUTTON INPUT MODE PIN 13

	while(1)
	{
		GPIOA->BSRR |= (1U << 5);

		SysTickDelayMs(1000);

		GPIOA->BSRR |= (1U << 21);

		SysTickDelayMs(3000);
	}
}
