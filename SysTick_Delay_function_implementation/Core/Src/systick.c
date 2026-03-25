/*
 * systick.c
 *
 *  Created on: Mar 22, 2026
 *      Author: Sanjana
 */

#include <stm32f4xx.h>

#define SYSTICK_LOAD   16000

#define CTRL_ENABLE		(1U << 0)
#define CTRL_CLKSOURCE	(1U << 2)
#define CTRL_COUNTFLAG	(1U << 16)


void SysTickDelayMs(int delay)
{
	SysTick->LOAD = SYSTICK_LOAD;

	SysTick->VAL = 0;

	SysTick->CTRL = CTRL_ENABLE | CTRL_CLKSOURCE;

	for(int i = 0; i < delay; i++)
	{
		while((SysTick->CTRL & CTRL_COUNTFLAG) == 0)
		{

		}
	}

	SysTick->CTRL = 0;
}


