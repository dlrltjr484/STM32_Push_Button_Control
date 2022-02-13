# STM32_Push_Button_Control

***************************************************************************

2022-02-13

Code for Push Button Control

Used STM32F103RB and STM32F411RE
PC0 ~ PC3 : GPIO Output
Return 1 when releasing the button

using like this
if( getButtonState(BUTTON1_GPIO_Port, BUTTON1_Pin, &prevButton1State) )

***************************************************************************