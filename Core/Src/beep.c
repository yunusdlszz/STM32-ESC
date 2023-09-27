/*
 * beep.c
 *
 *  Created on: Sep 26, 2023
 *      Author: yunus
 */
#include "beep.h"
#include "main.h"

















void Delay_us(volatile uint32_t microseconds)
{
  uint32_t clk_cycle_start = DWT->CYCCNT;

  /* Go to number of cycles for system */
  microseconds *= (HAL_RCC_GetHCLKFreq() / 1000000);

  /* Delay till end */
  while ((DWT->CYCCNT - clk_cycle_start) < microseconds);
}
