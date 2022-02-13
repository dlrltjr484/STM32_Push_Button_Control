#include "Push_Button.h"

uint8_t getButtonState(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, uint8_t *prevState)
{
	uint8_t curState;

	curState = HAL_GPIO_ReadPin(GPIOx, GPIO_Pin);
	if ( (curState == PRESSED) && (*prevState == RELEASED))
	{
		*prevState = curState;
		HAL_Delay(20);
		return 0;
	}
	else if ( (curState == RELEASED) && (*prevState == PRESSED))
	{
		*prevState = curState;
		return 1;
	}
	return 0;
}
