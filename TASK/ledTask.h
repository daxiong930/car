#ifndef _LED_TASK_H__
#define _LED_TASK_H__


/* Includes ------------------------------------------------------------------*/
#include "FreeRTOS.h"
#include "task.h"
#include "gpio.h"
#include "pwm.h"
/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/

/* Exported functions ------------------------------------------------------- */
void ledTask(void* arg);

#endif  /* _LED_TASK_H__ */

