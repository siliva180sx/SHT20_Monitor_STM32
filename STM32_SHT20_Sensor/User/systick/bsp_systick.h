#ifndef __BSP_SYSTICK_H
#define __BSP_SYSTICK_H

#include "stm32f10x.h"
#include "core_cm3.h"

void SysTick_delay__ms(uint32_t ms);      //聲明bsp_systick.c 文件的延時函數以便main.c主程式調用
void SysTick_Init(void);

#endif /*__BSP_SYSTICK_H*/


