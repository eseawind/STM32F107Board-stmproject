/******************************2012-2014, NJTECH, Edu.*************************** 
FileName: key/main.c
Author:  �ﶬ÷       Version :  1.0        Date: 2014.01.30
Description:    key���ܲ��������� ��led�����������γ�  �ֱ��ò�ѯ���жϷ�ʽ���� 
Version:         1.0 
History:         
      <author>  <time>   <version >   <desc> 
      Sundm    14/01/30     1.0     �ļ�����   
*******************************************************************************/ 

#include "stm32f10x.h"
#include <stdio.h>
#include "led.h"
#include "key.h"
#include "delay.h"

extern 

int main(void)
{
  Key_Def key;
  LED_Init();
  Key_Init();
  //Set_Keyint();//���ð����жϷ�ʽ
  while (1)
  {
/*  ������ѯ��ʽ   */
    key = KEY_Scan();
    switch (key)
    {
      case KEY1:
        LEDTog(LED1);
        break;
      case KEY2:
        LEDTog(LED2);
        break;
      case KEYNULL:
        break;
      default :
        break;
    
    }
  }
}


#ifdef  USE_FULL_ASSERT

/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t* file, uint32_t line)
{ 
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */

  /* Infinite loop */
  while (1)
  {
  }
}
#endif

/**
  * @}
  */

