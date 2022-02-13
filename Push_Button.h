#define BUTTON1_Pin GPIO_PIN_0
#define BUTTON1_GPIO_Port GPIOC
#define BUTTON2_Pin GPIO_PIN_1
#define BUTTON2_GPIO_Port GPIOC
#define BUTTON3_Pin GPIO_PIN_2
#define BUTTON3_GPIO_Port GPIOC
#define BUTTON4_Pin GPIO_PIN_3
#define BUTTON4_GPIO_Port GPIOC

#define RELEASED 1
#define PRESSED  0   

uint8_t prevButton1State = RELEASED;
uint8_t prevButton2State = RELEASED;
uint8_t prevButton3State = RELEASED;
uint8_t prevButton4State = RELEASED;

uint8_t getButtonState(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, uint8_t *prevState);

