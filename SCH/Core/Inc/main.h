/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"
#include "LList.h"
#include "sched.h"
#include "fsm.h"
#include "button.h"
#include "LED_control.h"
/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */
/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */
extern UART_HandleTypeDef huart2;
/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */
#define BUTTON_1_PORT		GPIOA
#define BUTTON_2_PORT		GPIOA
#define BUTTON_3_PORT		GPIOA


#define BUTTON_1_PIN		GPIO_PIN_1
#define BUTTON_2_PIN		GPIO_PIN_2
#define BUTTON_3_PIN		GPIO_PIN_3


#define RED_1_PORT  			GPIOA
#define GREEN_1_PORT			GPIOA
#define YELLOW_1_PORT			GPIOA
#define RED_2_PORT  			GPIOA
#define GREEN_2_PORT			GPIOA
#define YELLOW_2_PORT			GPIOA


#define RED_1_PIN  				GPIO_PIN_4
#define GREEN_1_PIN				GPIO_PIN_5
#define YELLOW_1_PIN			GPIO_PIN_6
#define RED_2_PIN  				GPIO_PIN_7
#define GREEN_2_PIN				GPIO_PIN_8
#define YELLOW_2_PIN			GPIO_PIN_9

#define DOT_PORT				GPIOA
#define DOT_PIN					GPIO_PIN_10

#define SEG_EN_1_PORT			GPIOA
#define SEG_EN_2_PORT			GPIOA
#define SEG_EN_3_PORT			GPIOA
#define SEG_EN_4_PORT			GPIOA

#define SEG_EN_1_PIN			GPIO_PIN_10
#define SEG_EN_2_PIN			GPIO_PIN_11
#define SEG_EN_3_PIN			GPIO_PIN_12
#define SEG_EN_4_PIN			GPIO_PIN_13

#define SEG_PORT				GPIOB
#define SEG_A_PIN				GPIO_PIN_0
#define SEG_B_PIN				GPIO_PIN_1
#define SEG_C_PIN				GPIO_PIN_2
#define SEG_D_PIN				GPIO_PIN_3
#define SEG_E_PIN				GPIO_PIN_4
#define SEG_F_PIN				GPIO_PIN_5
#define SEG_G_PIN				GPIO_PIN_6
/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
