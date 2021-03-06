#include <stm32f4xx_hal.h>
#include "System\DELAY\delay.h"
#include "Hardware\LCD\lcd.h"
//#include "Hardware\TOUCH\touch.h"
#include "game.h"

extern DMA_HandleTypeDef hdma2_fsmc;
void SysTick_Handler(void)
{
	HAL_IncTick();
	HAL_SYSTICK_IRQHandler();
}

int main(void)
{
	HAL_Init();
	System_Clock_Init(336, 8, 2, 4);
	LCD_Init();
	//Touch_Init();
	Game_Init();
	uint8_t i = 0xFF;
	for (;;)
	{
		Toad_Go();
		HAL_Delay(30);
	}
}
